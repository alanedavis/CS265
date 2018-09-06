#include <iostream>
#include <vector>
#include <stdlib.h>
#include <time.h>

using namespace std;

void swap(int* a, int* b){
    int t = *a;
    *a = *b;
    *b = t;
}

int partition(int array[], int low, int high){
    int pivot = array[high];
    int index = low-1;
    int loop = high - low;

    for(int i=low; i<=high-1; i++){
        if(array[i] <= pivot){
            index++;
            swap(&array[index], &array[i]);
        }
    }
    swap(&array[index+1], &array[high]);
    return index+1;
}

void qsort(int array[], int low, int high){
    if(low<high){
        int newIndex = partition(array,low,high);
        qsort(array, low, newIndex-1);
        qsort(array, newIndex+1, high);
    }
}

int main() {
    srand(time(NULL));
    int numRange;

    for(int i=0; i<10; i++){
        numRange = rand() % 20 + 10;
        int arr[numRange];
        for(int j=0; j<numRange; j++){arr[j] = rand() % 100;}

        cout << "Before Quick Sort: \n[ ";
        for(int k=0; k<numRange; k++){cout << arr[k] << " ";}
        qsort(arr, 0, numRange-1);
        cout << "]\nAfter Quick Sort: \n[ ";
        for(int k=0; k<numRange; k++){cout << arr[k] << " ";}
        cout << "]\n\n";
    }

    return 0;
}
