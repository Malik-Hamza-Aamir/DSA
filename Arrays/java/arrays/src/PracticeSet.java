// import java.util.*;
public class PracticeSet {
    // static void findNo(int[] arr, int a) {
    //     for (int i = 0; i < arr.length; i++) {
    //         if (a == arr[i]) {
    //             System.out.print("The number you given is found on index = ");
    //             System.out.println(i + 1);
    //             break;
    //         }
    //     }
    // }

    static int[] reverseArr(int[] arr, int start, int end){
        while (start < end) {
            int temp = arr[start];
            arr[start] = arr[end];
            arr[end] = temp;
            start++;
            end--;
        }

        return arr;
    }

    public static void main(String[] args) {
        // array of 5 floats and their sum

        // float [] no = {1.2f, 2.5f, 3.4f, 4.6f, 5.2f};
        // int sizeArr = no.length;
        // float sum = 0.00f;
        // for (int i = 0; i < sizeArr; i++) {
        // sum = sum + no[i];
        // }
        // System.out.println("Sum of 5 Numbers = " + sum);

        // find if the given no is present in arr or not

        // int [] arr = {10,20,30,40,50};
        // Scanner sc= new Scanner(System.in);
        // System.out.print("Enter the number you want to find = ");
        // int a = sc.nextInt();
        // findNo( arr, a);

        // add 2 2x3 matrices
        // int[][] m1 = {
        //         { 1, 2, 3 },
        //         { 1, 2, 3 }
        // };

        // int[][] m2 = {
        //         { 1, 2, 3 },
        //         { 1, 2, 3 }
        // };

        // int[][] result = {
        //         { 0, 0, 0 },
        //         { 0, 0, 0 }
        // };

        // for (int i = 0; i < m1.length; i++) {
        //     for (int j = 0; j < m1[i].length; j++) {
        //         result[i][j] = m1[i][j] + m2[i][j];
        //         System.out.print(result[i][j] + " ");
        //     }
        //     System.out.println("");
        // }


        // reverse an array
        int [] arry = {1,2,3};
        // for (int i = (arry.length-1) ; i >= 0; i--) {
        //     System.out.print(arry[i] + " ");
        // }
        // int end = arry.length-1;
        // System.out.println(end);
        // int[] result = reverseArr(arry, 0 , end);
        // for (int i = 0; i < result.length; i++) {
        //     System.out.print(result[i] + " ");
        // }

        // Find maximum number in an array
        // for (int i = 1; i < arry.length; i++) {
            // if (arry[0] < arry[i]) {
                // if (arry[0] > arry[i]) { for minimum
                // arry[0] = arry[i];
            // }
        // }

        // System.out.println("Maximum Number = " + arry[0]);


        // Check if arry is sorted or not
        boolean sorted = true;
        for (int i = 0; i < arry.length-1; i++) {
            if (arry[i] > arry[i+1]) {
                sorted = false;
                break;
            }
        }

        if (sorted) {
            System.out.println("Array is Sorted");
        }

        else {
            System.out.println("Not Sorted");
        }
        
    }

}