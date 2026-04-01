import java.util.*;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();

        while (t-- > 0) {
            String s = sc.next();
            
            // Check if all characters are same
            boolean allSame = true;
            for (int i = 1; i < s.length(); i++) {
                if (s.charAt(i) != s.charAt(0)) {
                    allSame = false;
                    break;
                }
            }

            if (allSame) {
                System.out.println("NO");
            } else {
                char[] arr = s.toCharArray();
                Arrays.sort(arr);
                String sorted = new String(arr);

                // If same as original → reverse
                if (sorted.equals(s)) {
                    sorted = new StringBuilder(sorted).reverse().toString();
                }

                System.out.println("YES");
                System.out.println(sorted);
            }
        }

        sc.close();
    }
}