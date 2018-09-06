#!/usr/bin/python3

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

def main():
    arrSize = input("Enter Size of Array: ")
    A = [0]*int(arrSize)

    for i in range(0,int(arrSize)):
        arrNums = input("Enter the value for position A[%d]:\n" % (i))
        A[i] = int(arrNums)

    print("Input:", A)
    qsort(A,0,len(A)-1)
    print("Output:", A, "\n\n")

main()
