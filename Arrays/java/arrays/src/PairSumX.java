// Find all the pairs in an sorted array that sum to number K
// n = 7
// if no pair output -1
// array = {1,2,3,4,5,6,7}
// K = 8
// time complexity O(n) means only 1 loop use

// Approach
// from array 
// 1+7 = 8
// 2+6 = 8
// 3+5 = 8
// pairs = 3
// use 2 pointer or map approach for sorted arrays 90% problems will be solved in array
// one pointer will be at start and 1 will be at end bcz on end their are big numbers



public class PairSumX {

    static int pairSum(int[] arr, int n, int k ) {
        // Pointers Declaration
        int i=0;
        int j=n-1;
        // Comparison Variable Declaration
        int ans = 0;
        int sum = 0;

        while (i<j) {
            sum = arr[i] + arr[j];

            if (sum == k) {
                ans++;
                i++;
                j--;
            }

            else if (sum < k) {
                i++;
            }

            else if (sum > k) {
                j--;
            }
        }

        if (ans == 0) {
            return -1;
        } else {
            return ans;
        }
    }

    public static void main(String[] args) {
        // int[] a = {1,2,3,4,5,6,7};
        int[] a = {1, 5, 7, 10, 11, 16};
        int n = a.length;

        int pairs = pairSum(a , n , 17);
        System.out.println("Pairs = " + pairs);
    }
}
