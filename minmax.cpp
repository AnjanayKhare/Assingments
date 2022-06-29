#include <iostream>
#include <bits/stdc++.h>
#define MIN -10000
using namespace std;

int max(int a, int b, int c){
    return max(max(a, b), c);
}

int cross(int arr[], int l, int h){
    int temp,s=0, mid = (l+h)/2;
    int m1 = MIN;
    int m2 = MIN;
    for(int i=mid;i>=0;i--){
        s+=arr[i];
        m1 = max(m1, s);
    }
    s = 0;
    for(int i=mid+1;i<=h;i++){
        s += arr[i];
        m2 = max(m2, s);
    }
    return max(m1, m2, m1+m2);
}

int maxSubarray(int arr[], int l, int h){
    if(l==h) return arr[l];
    int mid = (l+h)/2;
    return max(maxSubarray(arr, l, mid), maxSubarray(arr, mid+1, h), cross(arr, l, h));
}

int main(){
    int arr[] = {10,-16,5,2,-1,7,-8,-5,3};
    cout<<maxSubarray(arr, 0, 8);
}
