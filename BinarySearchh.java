 public class BinarySearch{
  static boolean binarySearch(int[] arr, int target) {
        int left = 0;
        int right = arr.length - 1;

        while (left <= right) {
            int mid = left + (right - left) / 2;  // avoid overflow

            if (arr[mid] == target) {
                return true;  // found
            }
            if (arr[mid] < target) {
                left = mid + 1;
                // search in right half
            } else {
                right = mid - 1;
                 // search in left half
            }
        }
        return false; // not found
 }
 public static void main(String[]args){
     int arr[]={ 1,2,3,4,5,6,7,8,9};
     System.out.println(binarySearch(arr,15));
 }
 }