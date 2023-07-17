public class twodArr {
    
    static int[][] swap(int[][] a) {
        int row = a.length;
        int col = a[0].length;

        for (int i = 0; i < row; i++) {
            for (int j = 0; j < col; j++) {
                int[][] temp = a[i][j];
            }
            System.out.println("");
        }

    }
    
    public static void main(String[] args) {
        int[][] a = {
            { 1, 2, 3 },
            { 4, 5, 6 },
            { 7, 8, 9 }
        };

        int row = a.length;
        System.out.println("Rows    = " + row);
        int col = a[0].length;
        System.out.println("Column  = " + col);

        // Printing patterns using loops
        // for (int i = 0; i < row; i++) {
        //     for (int j = 0; j < col; j++) {
        //         System.out.print(a[i][j] + " ");
        //     }
        //     System.out.println("");
        // }

        // left angle triangle |__\
    
        
        
    }
}
