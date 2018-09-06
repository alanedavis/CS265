#!/bin/python3

print("Welcome to Matrix Multiplication!")

matSize = int(input("Enter size of Matrix: "))

A = [[0 for col in range(matSize)] for row in range(matSize)]
B = [[0 for col in range(matSize)] for row in range(matSize)]
C = [[0 for col in range(matSize)] for row in range(matSize)]

for n in range(0,2):
    for i in range(0,matSize):
        for j in range(0,matSize):
            if n == 0:
                aVal = input("Enter the value for position A[%d][%d]:\n" % (i,j))
                A[i][j] = int(aVal)
            else:
                bVal = input("Enter the value for position B[%d][%d]:\n" % (i,j))
                B[i][j] = int(bVal)

for i in range(0,matSize):
    for j in range(0,matSize):
        C[i][j] = 0
        for n in range(0,matSize):
            C[i][j] += A[i][n] * B[n][j]

for i in range(0,matSize):
    for j in range(0,matSize):
        print("C[%d][%d] = %d" % (i,j,C[i][j]))
