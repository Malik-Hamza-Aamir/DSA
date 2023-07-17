public class Arry {
    public static void main(String[] args) throws Exception {
        // int [] marks = new int[5]; //declared an array 
        int [] marks = {100, 70, 20}; //another way to declare array
        System.out.println(marks[2]);
        // length of array
        System.out.println("Length marks = " + marks.length);

        // for float use f 
        // for double use d
        float [] numbers = {22.5f, 65f, 22.8f};
        System.out.println(numbers[1]);
        System.out.println("Length numbers = " + numbers.length);
    
        // array of strings
        String [] name = {"Hamza", "Aliza", "Ali", "ETC"};
        System.out.println(name[0]);
        System.out.println("Length Name = " + name.length);

        // Printing arrays using for loop
        for (int i = 0; i < marks.length; i++) {
            System.out.println("For Loops = " + marks[i]);            
        }


        for (int i = marks.length-1; i>=0; i--) {
            System.out.println("Reverse Marks Array = " + marks[i]);
        }

        // multi-dimensional arrays
        // array within an array
        // [0 , 1 , 2]
        // [0] = [1,2,3,4]
        // [1] = [2,3,4]
        // [2] = [2,7,5]

        int [][] flats;
        flats = new int [2][3];
        flats[0][0] = 101;
        flats[0][1] = 102;
        flats[0][2] = 103;
        flats[1][0] = 201;
        flats[1][1] = 202;
        flats[1][2] = 203;

        // output using loop
        for (int i = 0; i < flats.length; i++) {
            for (int j = 0; j < flats[i].length; j++) {
                System.out.print(flats[i][j]);
                System.out.print(" ");
            }            
            
            System.out.println("");
        }
    }
}
