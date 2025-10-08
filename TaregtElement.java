public class TaregtElement{
  static int target(int a[]){
    int target = 2;
    int left =0;
    int right = a.length-1;


while (left<=right){
  int mid = (left+right)/2;

  if(a[mid] == target){ return mid; }
  if(a[mid] < target){ left = mid+1; }
  if(a[mid] > target){ right = mid-1; }
}
return -1;
  }
public static void main(String[]args){
  int a[]= {1,1,1,2,2,3,4,5,6 };
  System.out.println(target(a));
}
  
}



