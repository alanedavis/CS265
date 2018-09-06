public class zeta {
	public static void main(String[] args) {
		double x = Integer.parseInt(args[0]);
		double n = Integer.parseInt(args[1]);
		double total = 0;

		for(double i=0; i<n; i=i+1d){
			total = total + Math.pow((1d/(i+1d)),x);
		}
		
		System.out.printf("z(%d) = %.16f when approximated at n=%d\n", (int)(Math.round(x)), total,(int)(Math.round(n)));
	}
}
