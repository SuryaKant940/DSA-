public class TargetElement1 {

    
    static int firstOccurrence(int[] a, int target) {
        int left = 0, right = a.length - 1;
        int result = -1;
        while (left <= right) {
            int mid = (left + right) / 2;

            if (a[mid] == target) {
                result = mid;   // store index
                right = mid - 1; // keep searching left
            } else if (a[mid] < target) {
                left = mid + 1;
            } else {
                right = mid - 1;
            }
        }
        return result;
    }

   
    static int lastOccurrence(int[] a, int target) {
        int left = 0, right = a.length - 1;
        int result = -1;
        while (left <= right) {
            int mid = (left + right) / 2;

            if (a[mid] == target) {
                result = mid;   // store index
                left = mid + 1; // keep searching right
            } else if (a[mid] < target) {
                left = mid + 1;
            } else {
                right = mid - 1;
            }
        }
        return result;
    }

    public static void main(String[] args) {
        int a[] = {1, 1, 1, 2, 2, 3, 4, 5, 6};
        int target = 2;

        int first = firstOccurrence(a, target);
        int last = lastOccurrence(a, target);

        System.out.println("First occurrence of " + target + ": " + first);
        System.out.println("Last occurrence of " + target + ": " + last);
    }
}
