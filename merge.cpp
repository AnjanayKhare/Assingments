#include <bits/stdc++.h>
using namespace std;


void merge(int arr[], int l, int m, int r){
    if (r==l){
        return;
    }
    int temp[r-l+1];
    int i=l,j=m+1,k=0;
    while (k < r-l+1){
        if((i<=m) && (j<=r)){
            if(arr[i] < arr[j]){
                temp[k] = arr[i];
                i++;
            } else{
                temp[k] = arr[j];
                j++;
            }
        }else{
            if(i<=m){
                temp[k] = arr[i];
                i++;
            }else {
                temp[k] = arr[j];
                j++;
            }
        }
        k++;
    }
    k=l;
    i=0;
    while (k <= r){
        arr[k] = temp[i];
        i++;
        k++;
    }
}


void mergeSort(int arr1[], int low, int high){
    if (low<high) {
        int mid = (low + high) / 2;
        mergeSort(arr1, low, mid);
        mergeSort(arr1, mid+1, high);
        merge(arr1, low, mid, high);
    }
}
void printArr(int arr[], int n){
    for(int i=0; i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}


int main(){
    int arr[] = {1, 5, 3, 4, 2, 10, 1};
    mergeSort(arr, 0, 6);
    printArr(arr, 7);
}
