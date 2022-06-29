#include <bits/stdc++.h>
using namespace std;

int linearSearch(int arr[], int n, int target){
    for (int i = 0; i < n; ++i) {
        if (arr[i] == target) return i;
    }
    // -1 flagging absence of target element in array
    return -1;
}
int binarySearch(int arr[], int n, int target){
    int l = 0, h = n-1, mid = (l+h)/2;
    while (l<=h){
        mid = (l+h)/2;
        if(arr[mid] == target) return mid;
        else if(target > arr[mid]) l = mid+1;
        else h = mid-1;
    }
    // -1 flagging absence of target element in array
    return -1;
}

int main(){
    int arr[] = {1, 3, 4, 5, 7, 90, 107};
    cout<<binarySearch(arr, 7, 107)<<endl;
    cout<<linearSearch(arr, 7, 90)<<endl;
}
