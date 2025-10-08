public class Number{

     static int printNumber( int n){
 
        if(n==0) return 0;
       // if(n==1) return 1;

      
        System.out.println(n);
         return printNumber(n-1);
     }
    public static void main(String[]args){
      int n= 10;
      printNumber(n);
    }
}