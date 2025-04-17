#include <iostream>
using namespace std;

int arr[20], B[20]; // Array utama dan array bantu
int n; // Jumlah elemen dalam array

void mergesort(int low, int high) {
    if (low >= high){ // step 1
        return; // step 1a
    }

    int mid = (low + high) / 2; // step 2
}