class Surya{
    static int[] AddElemntatIndex(int a[],int index,int elemnt){
        int n= a.length;
       int i=n;
        int newArry[] = new int[i+1];    //create new arry
        
        for( i=0;i<index;i++){     // copy of arry elemnt
            newArry[i] = a[i];
        }
        newArry[index]= elemnt;
        for(i=index;i<n;i++){
            newArry[i+1]= a[i];
        }
        return newArry;
    }
}
public class InsertElement{
    public static void main(String[]args){
        int a[]={ 3,4,5,7,8,9 };
        int[] newArry = Surya.AddElemntatIndex(a,3,45);
       // System.out.println(newArry);
        for(int i=0;i<newArry.length;i++){
            System.out.println(newArry[i]);
        }
        
    }
}