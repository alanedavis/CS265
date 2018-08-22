#!/usr/bin/python3

import random

def partition(array, low, high):
    index = low-1
    pivot = array[high]

    for i in range(low, high):
        if array[i] <= pivot:
            index = index + 1
            array[index], array[i] = array[i], array[index]
    
    array[index+1], array[high] = array[high], array[index+1]
    return(index+1)

def qsort(array, low, high):
    if low < high:
        newIndex = partition(array,low,high)
        qsort(array, low, newIndex-1)
        qsort(array, newIndex+1, high)

for i in range(10):
    arr = [0]*random.randint(10,20)

    for j in range(len(arr)):
        arr[j] = random.randint(0,100)

    print("Before Quick Sort:", arr)
    qsort(arr,0,len(arr)-1)
    print("After Quick sort:", arr, "\n\n")