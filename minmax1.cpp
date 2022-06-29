#include <bits/stdc++.h>
using namespace std;

int *minMax(int arr[], int l, int h){
    int *minmax = (int *)malloc(sizeof(int)*2);
    if (l==h){
        minmax[0] = arr[l];
        minmax[1] = arr[l];
        return minmax;
    }
    int mid = (l+h)/2;
    int *m1, *m2;
    m1 = minMax(arr, l, mid);
    m2 = minMax(arr,mid+1, h);
    minmax[0] = min(m1[0], m2[0]);
    minmax[1] = max(m1[1], m2[1]);
    return minmax;
}

int main(){
    int arr[] = {1, 5, 3, 4, 2, 10, 1};
    int *m = minMax(arr, 0, 6);
    cout<<m[0]<<" " <<m[1];
}

