import java.util.Random;
import java.util.Scanner;

public class qsort
{
        public static int[] quicksort(int[] v, int start, int end)
        {
                if (end > start)
                {
                        int pivotIndex = (int)(Math.random() * (end-start) + start);
                        int pivotValue = v[pivotIndex];
                        swap(v, pivotIndex, end);

                        int last = start;
                        for (int i = start; i < end; i++)
                                {
                                        if ((v[i]) <= (pivotValue))
                                        {
                                                swap(v, i, last);
                                                last++;
                                        }
                                }
                        swap(v, end, last);
                        quicksort(v, start, last - 1);
                        quicksort(v, last + 1, end);
                }
                return (int[]) v;
        }

        private static void swap(int[] v, int i, int j)
        {
                int temp = v[i];
                v[i] = v[j];
                v[j] = temp;
        }

    public static void main(String args[])
    {
                // welcome message
        System.out.println("Java Quicksort");

                // get size of v
                Scanner reader = new Scanner(System.in);
                System.out.println("Enter Size of Array:");
                int N = reader.nextInt();

                // populate v
                int[] v = new int[N];
        for (int i = 0; i < N; i++)
                        {
                                System.out.println("Enter Value for A["+i+"]");
                                v[i] = reader.nextInt();
                        }

                // print v
        System.out.print("Input: [");
                for (int i = 0; i < v.length-1; i++)
                        System.out.print(v[i] + ", ");
                System.out.println(""+v[v.length-1]+"]");

                // sort v and print
                System.out.print("Output: [");
        quicksort(v, 0, v.length-1);
                for (int i = 0; i < v.length-1; i++)
                        System.out.print(v[i] + ", ");
        System.out.println(""+v[v.length-1]+"]");

        // prepare for exit
        reader.close();
    }
}

