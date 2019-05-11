
#include <iostream>
using namespace std;

void swap(int *arr, int i, int j) {
    int tmp = arr[i];
    arr[i] = arr[j];
    arr[j] = tmp;
}

void insertionSort(int *arr, int n) {

    for(int i=1; i<n; i++) {
        int index = i, j;
        for(j=i; j>0; j--) {
            if(arr[j] > arr[j-1])
                break;
            swap(arr, j, j-1);
        }
    }

}

void printArray(int *arr, int n) {
    cout << "List: ";
    for(int i=0; i<n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {

    int arr[] = {97,54,67,89,43,12,33,56,55,21,22,49,81,7};
    int n = sizeof(arr)/ sizeof(int);

    printArray(arr, n);

    cout << "Array after sorting: \n";
    insertionSort(arr, n);

    printArray(arr, n);

}