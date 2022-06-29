#include <bits/stdc++.h>
using namespace std;

int partition(int a[], int low, int high){
    int i = low, j = high;
    int pivot = a[low];
    while (i<j) {
        while (a[i] <= pivot) {
            i++;
        }
        while (a[j] > pivot) {
            j--;
        }
        if (i < j) {
            swap(a[i], a[j]);
        }
    }
    swap(a[low], a[j]);
    return j;
}

void quickSort(int a[], int l, int r){
    if(l<r){
        int pi = partition(a, l, r);
        quickSort(a, l, pi-1);
        quickSort(a, pi+1, r);
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
    quickSort(arr, 0, 6);
    printArr(arr, 7);
}

