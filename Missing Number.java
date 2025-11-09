import java.lang.reflect.Array;
import java.util.Arrays;
import java.util.Collections;
import java.util.Scanner;
 
public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int n = scanner.nextInt();
        long sum = 0;
 
        for (int i = 0; i < n - 1; i ++){
            int x = scanner.nextInt();
            sum += (long) x;
        }
        long sumOfN = (long) n * (n + 1) / 2;
        System.out.println(sumOfN - sum);
 
    }
}
