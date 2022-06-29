#include <bits/stdc++.h>
using namespace std;

void insertionSort(int arr[], int n){

    int i, key, j;
    for(i=1;i<n;i++){
        key = arr[i];
        j = i-1;
        while (j>=0 && arr[j] > key){
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = key;
    }
}

void bubbleSort(int arr[], int  n){
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if (arr[j] > arr[j+1]) swap(arr[j], arr[j+1]);
        }
    }
}

void printArr(int arr[], int n){
    for(int i=0;i<n;i++) {
        cout << arr[i] << " " ;
    }
    cout<<endl;
}



int main(){
    int arr1[] = {5, 6, 4, 73, 14};
	int arr2[] = {4, 8, 2, 7, 90, 89, 108};
	insertionSort(arr1, 5);
	bubbleSort(arr2, 7);
    printArr(arr1, 5);
    printArr(arr2, 7);
}
