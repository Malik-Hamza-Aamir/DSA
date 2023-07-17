public class MakeZero2dArr {
    
    private static int[][] makeZero(int[][] a) {
        int r = a.length;
        int c = a[0].length;
        int[][] temp = a;

        for (int i = 0; i < r; i++) {
            for (int j = 0; j < c; j++) {
                if (a[i][j] == 0) {
                    if ((i+1) < r) {
                        a[i][j] = a[i][j] + temp[i+1][j];
                    }

                    if ((i-1) >= 0) {
                        
                    }

                    if ((j+1) < c) {
                        
                    }

                    if ((j-1) >= 0) {
                        
                    }
                }
            }
        }
    }

    public static void main(String[] args) {
        int[][] a = {
                { 1, 2, 3, 4 },
                { 5, 6, 0, 7 },
                { 8, 9, 4, 6 },
                { 8, 4, 5, 2 }
        };

        int[][] res = makeZero(a);
        for (int i = 0; i < res.length; i++) {
            for (int j = 0; j < res[i].length; j++) {
                System.out.print(res[i][j] + "  ");
            }
            System.out.println("");
        }
    }

}
