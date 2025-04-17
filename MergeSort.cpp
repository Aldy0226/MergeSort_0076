#include <iostream>
using namespace std;

int arr[20], B[20]; // Array utama dan array bantu
int n; // Jumlah elemen dalam array

void mergesort(int low, int high) {
    if (low >= high){ // step 1
        return; // step 1a
    }

    int mid = (low + high) / 2; // step 2
    mergesort(low, mid); // step 3a
    mergesort(mid + 1, high); // step 3b

    int i = low; // step 4a
    int j, k;
    j = mid + 1; // step 4b
    k = low; // step 4c
    while (i <= mid && j <= high) // step 4d 
    {
        if (arr[i] <= arr[j]) { // step 4d, i
            B[k] = arr[i]; // step 4d, i, 1
            i++; // step 4d, i, 2
        }
        else
        {
            B[k] = arr[j]; // step 4d, j, 1
            j++; // step 4d, j, 2
        }
        k++; // step 4d, k, 1
    }
}