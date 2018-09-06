class search
{
   public static int[] make_array(int size)
   {
      int[] A = new int[size];
      for(int i=0; i < size; i++)
      {
         A[i] = i;
      }
      return A;
   }

   public static boolean binary_search(int target, int A[], int start, int stop)
   {
      if(start > stop)
      {
         return false;
      }
      int middle = start+(stop-start)/2;
      if(A[middle]==target)
      {
         return true;
      }
      if(A[middle] > target)
      {
         return binary_search(target,A,start,middle-1);
      }
      return binary_search(target,A,middle+1,stop);
   }
   public static boolean linear_search(int target, int[] A, int start, int stop)
   {
      for(int i=start; i <= stop; i++)
      {
         if(A[i]==target)
         {
            return true;
         }
         if(target < A[i])
         {
            return false;
         }
      }
      return false;
   }

   @FunctionalInterface
   interface SearchInterface{
      public boolean apply(int a, int[] b, int c, int d);
   }


   public static void test_search(int size, SearchInterface search)
   {
      int[] array = make_array(size);
      int found=0;
      int failed=0;
      int planned=size/10;
      for(int i=-1*planned; i < planned+size; i++)
      {
         if(search.apply(i,array,0,size-1))
         {
            found++;
         }else
         {
            failed++;
         }
      }
      int tests = found+failed;
      System.out.println("Ran "+tests+" tests.");
      System.out.println("Found " + found + " out of " +size+" targets.");
      System.out.println("Missing "+failed+" out of "+2*planned+" targets.");
      System.out.println("Found Succes Rate: " + ((double)(found)/(double)(size)*100)+"%");
      System.out.println("Missing Succes Rate: " + ((double)(failed)/(double)(2*planned)*100)+"%");
   }
}
