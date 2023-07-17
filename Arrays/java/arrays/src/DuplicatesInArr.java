import java.util.ArrayList;

public class DuplicatesInArr {

    // static void duplicate(int[] arr) {
    // for (int i = 0; i < arr.length; i++) {
    // boolean isDuplicate = false;
    // for (int j = i+1; j < arr.length; j++) {
    // if (arr[i] == arr[j]) {
    // isDuplicate = true;
    // break;
    // }
    // }
    // if (isDuplicate) {
    // System.out.println("Duplicate element = " + arr[i]);
    // }
    // }
    // }

    // static void duplicate(int[] arr) {
    // int n = arr.length;
    // for (int i = 0; i < n; i++) {
    // int index = arr[i]%n;
    // arr[index]+=n;
    // }

    // for (int i = 0; i < n; i++) {
    // if ((arr[i]/n) >= 2) {
    // System.out.println(arr[i]);
    // }
    // }
    // }

    static ArrayList<Integer> findDuplicates(int[] arr) {
        ArrayList<Integer> duplicates = new ArrayList<>();
        int n = arr.length;

        for (int i = 0; i < n; i++) {
            int index = arr[i] % n;
            arr[index] = arr[index] + n;
        }

        for (int i = 0; i < n; i++) {
            if ((arr[i] / n) >= 2) {
                duplicates.add(i);
            }
        }

        return duplicates;
    }

    public static void main(String[] args) {
        // int[] arr = { 2, 3, 1, 2, 3 };
        int[] arr = {1,5,3,3,5};
        ArrayList<Integer> duplicates = findDuplicates(arr);
        System.out.println("Duplicate elements: " + duplicates);

    }
}
