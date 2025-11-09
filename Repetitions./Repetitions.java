//package Leetcode;
import java.util.*;
import java.util.*;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        String s = scanner.nextLine();
        char previous = s.charAt(0);
        int count = 1;
        int maxx = 1;
        for (int i = 1; i < s.length(); i ++){
            char current = s.charAt(i);
            if (current == previous){
                count ++;
                maxx = Math.max(count, maxx);
            }
            else count = 1;
            previous = current;
        }
        System.out.println(maxx);
    }
}
