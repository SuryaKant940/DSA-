public class Factorial{
     static int fac(int n){   //recursive
      if(n==0||n==1) return 1; //base case condition
      return n*fac(n-1);
    }
         static long factorialIterative(int n) {   // iterative caseee
        long fact = 1;
        for (int i = 1; i <= n; i++) {
            fact = fact * i;
        }
        return fact;
         }
    public static void main (String[]args){
        int n =8;
        int res = fac(n);
        long res1 = factorialIterative(n);
        System.out.println(res);
        System.out.println(res1);

        
    }
}