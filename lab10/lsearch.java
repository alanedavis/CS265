public class lsearch
{
   public static void main(String[] args)
   {
      if(args.length!=1)
      {
         System.out.println("Usage: java lsearch array_size");
         return;
      }
      int size = Integer.parseInt(args[0]);
      System.out.print("Testing linear_search with Array of size ");
      System.out.print(size);
      System.out.println();
      search.test_search(size,search::linear_search);
   }
}
