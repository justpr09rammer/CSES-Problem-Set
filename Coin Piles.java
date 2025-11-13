//package Leetcode;
import java.util.*;
import java.util.*;
import java.io.*;
import java.util.*;

public class Main {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        StringBuilder out = new StringBuilder();
        int t = Integer.parseInt(br.readLine());
        while (t > 0) {
            String[] parts = br.readLine().split(" ");
            long a = Long.parseLong(parts[0]);
            long b = Long.parseLong(parts[1]);
            long maxx = Math.max(a, b);
            long minn = Math.min(a, b);
            if (minn * 2 < maxx) System.out.println("NO");
            else if ((a + b) % 3 == 0) System.out.println("YES");
            else System.out.println("NO");
            t --;
        }
        System.out.print(out);
    }
}
