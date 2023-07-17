public class sortDutchFlag {
    static int[] sort(int[] arr, int n) {
        int low = 0;
        int mid = 0;
        int high = n - 1;

        while (mid <= high) {
            if (arr[mid] == 0) {
                swap(arr, low, mid);
                mid++;
                low++;
            }

            else if (arr[mid] == 1) {
                mid++;
            }

            else if (arr[mid] == 2) {
                swap(arr, mid, high);
                high--;
            }
        }
        return arr;
    }

    static void swap(int[] arr, int elem1, int elem2) {
        int temp = arr[elem1];
        arr[elem1] = arr[elem2];
        arr[elem2] = temp;
    }

    public static void main(String[] args) {
        int[] arr = { 1, 0, 2, 1, 2, 0 };
        int[] result = sort(arr, arr.length);
        for (int i = 0; i < result.length; i++) {
            System.out.print(result[i] + " ");
        }
    }
}