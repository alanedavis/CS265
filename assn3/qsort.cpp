#include <iostream>
#include <vector>

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
      int arrSize;
      cout << "Enter size of Array:" << endl;
      cin >> arrSize;

      int A[arrSize];

      for(int i=0; i<arrSize; i++){
            cout << "Enter value for position A[" << i << "]" << endl;
            cin >> A[i];
      }

      cout << "Input: \n[";
      for(int k=0; k<arrSize; k++){
            if(k == arrSize-1){
                  cout << A[k];
            } else {
                  cout << A[k] << ", ";
            }
      }

      qsort(A, 0, arrSize-1);

      cout << "]\nOutput: \n[";
      for(int k=0; k<arrSize; k++){
            if(k == arrSize-1){
                  cout << A[k];
            } else {
                  cout << A[k] << ", ";
            }
      }
      cout << "]\n\n";

        return 0;
    }

