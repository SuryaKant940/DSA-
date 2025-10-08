
public class Main{

    public static void deleteElemnt(int a[]){
        int n= a.length;
        int index = -1;
        int deleteElemnt = 70;
        for( int i = 0;i<n;i++){
            if(a[i]== deleteElemnt){
                index = i;
                break;
            }
        } 
        if(index== -1){
            System.out.println("element not found");
        }else{
        for(  int i= index;i<n-1;i++){
            a[i]=a[i+1];
            //System.out.println(a[i]);
        }
    }
     for(int i =0;i<n-1;i++){
        System.out.println(a[i]);
     }
 } 
    public static void main(String[]args){
        int a[] = { 20,30,40,50,60,70};
         deleteElemnt(a);
        
    }
}