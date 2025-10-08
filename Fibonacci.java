public class Fibonacci{
    static int fib(int n){
        if( n==0) return 0;
        if( n==1) return 1;
        return fib(n-1)+ fib(n-2);  // recursicee casseee
    }


     static void fibIteration(int n){     //iterartive casee
        int firstnum=0;
        int secondnum = 1;

      for(int i =0;i<n;i++){
       System.out.print(firstnum + " ");
        int next = firstnum + secondnum ;
        firstnum =  secondnum ;
        secondnum = next ;
      }
      System.out.println();
    }


      public static void main(String[]args){
        int n = 8;
        
        int res = fib(n);
        System.out.println("fibnoacci using recursive "+res);


        fibIteration(n);
      }
    
}