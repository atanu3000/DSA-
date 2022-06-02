import java.util;
import java.util.Scanner;

public class arraySort {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter array size: ");
        int n = sc.nextInt();
        int[] array = new int[n];

        System.out.println("Enter the elements: ");
        for (int i = 0; i < array.length; i++) {
            array[i] = sc.nextInt();

        }
        
        sort(n, array);

        for (int i = 0; i < array.length; i++) {
            System.out.print(array[i]+ " ");
        }
    }

    public static void sort(int n, int[] array) {
        /**for (int i = 0; i < array.length; i++) {     //selection sort
            for (int j = i+1; j < array.length; j++) {
                if(array[i]>array[j]) {
                    int temp = array[i];
                    array[i] = array[j];
                    array[j] = temp;
                }
            }
        }  */

        int c = 1;      //buble sort
        while(c<=n){
            for (int i = 0; i <n-c; i++) {
                if(array[i]>array[i+1]) {
                    int temp = array[i];
                    array[i] = array[i+1];
                    array[i+1] = temp;
                }
            }
            c++;
        } 
     
        
        
    }
}