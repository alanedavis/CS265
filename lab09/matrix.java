import java.util.Scanner;

public class matrix {
	
	public static void main ( String [] args ) {

		int matSize;
		int sum = 0;
		
		Scanner reader = new Scanner(System.in);
		System.out.println("Enter size of Matrix:");
        	matSize = reader.nextInt();

		int[][] A = new int[matSize][matSize];
        	int[][] B = new int[matSize][matSize];

        	for(int n=0; n < 2; n++){
                	for(int i=0; i < matSize; i++){
                        	for(int j=0; j < matSize; j++){
                                	if(n == 0){
                                        	System.out.println("Enter Value for Position A["+i+"]["+j+"]");
                                        	A[i][j] = reader.nextInt();
                                	} else {
                                        	System.out.println("Enter Value for Position A["+i+"]["+j+"]");
                                        	B[i][j] = reader.nextInt();
                                	}
                        	}
                	}
        	}

		int[][] C = multiplyMatrices(A, B, matSize);
		displayProduct(C);
	
	return ;
	}

	public static int[][] multiplyMatrices(int[][] A, int[][]B, int matSize){
		int[][] C = new int[matSize][matSize];
		for(int i=0; i < matSize; i++){
			for(int j=0; j < matSize; j++){
				for(int n = 0; n < matSize; n++){
					C[i][j] += A[i][n] * B[n][j];
				}
			}
		}

		return C;
	}

	public static void displayProduct(int[][] C){
		System.out.println("Product of two Matrices: ");
		for(int[] row : C){
        		for(int column : row){
                		System.out.print(column + "	");
			}
			System.out.println();
		}
	}
	
}
