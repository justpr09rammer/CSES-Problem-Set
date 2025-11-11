//package Leetcode;
import java.util.*;
import java.util.*;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        long n = scanner.nextLong();
        long count = 0;
        long previous = scanner.nextLong();
        for (int i = 0; i < n - 1; i ++){
            long current = scanner.nextLong();
            if (previous > current){
                count += (previous - current);
            }
            else if(current > previous){
                previous = current;
            }
        }
        System.out.println(count);
    }
}
