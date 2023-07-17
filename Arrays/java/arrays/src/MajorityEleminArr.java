public class MajorityEleminArr {

    // Approach 1 Brute Force only work for odd numbers of elements
    // public static int majority(int[] nums) {
    //     int n = nums.length;
    //     for (int i = 0; i < n; i++) {
    //         int count = 0;
    //         for (int j = 0; j < n; j++) {
    //             if (nums[i] == nums[j]) {
    //                 count++;
    //             }
    //         }
    //         if (count > n / 2) {
    //             return nums[i];
    //         }
    //     }
    //     return -1;
    // }

    // Approach 2 Moore's Voting Algorithm
    static int majority(int[] arr) {
        int n = arr.length;

        int el = 0;
        int count = 0;
        for (int i = 0; i < n; i++) {
            if (count == 0) {
                el = arr[i];
            }

            if (el == arr[i]) {
                count++;
            } else {
                count--;
            }
        }        

        count = 0;
        for (int i = 0; i < n; i++) {
            if (el == arr[i]) {
                count++;        
            }
        }

        if (count > n/2) {
            return el;
        } return -1;
    }

    public static void main(String[] args) {
        int[] arr = {1, 2, 1, 1, 1, 1, 3, 3, 2, 2};
        int result = majority(arr);
        // System.out.print("Majority Element using Brute Force Approach = " + result);
        if (result != -1) {
            System.out.println("The majority element is " + result);
        } else {
            System.out.println("No majority element found.");
        }
    }
}
