public class MaxMinElement{
    public static void main(String[]args){
        int a[] = { 20,34,56,78,91,18,202};
        int n=a.length;

        int max = a[0];
        int min = a[0];

         for( int i =0;i<n;i++){
            if(a[i]>max){
                max = a[i];
            }
           
            if(a[i]<min){
                min = a[i];
            }
         }
         System.out.println("max element is "+ max);
          System.out.println("min element is "+ min);
    }
}