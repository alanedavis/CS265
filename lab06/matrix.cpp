#include <iostream>
#include <string>
#include <math.h>

using namespace std;

int main()
{
        cout << "Welcome to Matrix Multiplication!" << endl;

        int matSize;
	int sum = 0;

        cout << "Enter size of Matrix:" << endl;
        cin >> matSize;

        int A[matSize][matSize], B[matSize][matSize], C[matSize][matSize];

        for(int n=0; n < 2; n++){
                for(int i=0; i < matSize; i++){
                        for(int j=0; j < matSize; j++){
                                if(n == 0){
                                        cout << "Enter value for position A[" << i << "][" << j << "]" << endl;
                                        cin >> A[i][j];
                                } else {
                                        cout << "Enter value for position B[" << i << "][" << j << "]" << endl;
                                        cin >> B[i][j];
                                }
                        }
                }
        }

	for(int i=0; i < matSize; i++){
		for(int j=0; j < matSize; j++){
			C[i][j] = 0;
			for(int n = 0; n < matSize; n++){
				C[i][j] += A[i][n] * B[n][j];
			}
		}
	}
	
	for(int i=0; i < matSize; i++){
        	for(int j=0; j < matSize; j++){
                	cout << "C[" << i << "][" << j << "] = " << C[i][j] << endl;
		}
	}

	return 0;
}
