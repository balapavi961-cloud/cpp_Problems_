import java.util.*;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();

        while (t-- > 0) {
            char[][] grid = new char[3][3];

            for (int i = 0; i < 3; i++) {
                String s = sc.next();
                for (int j = 0; j < 3; j++) {
                    grid[i][j] = s.charAt(j);
                }
            }

            for (int i = 0; i < 3; i++) {
                boolean hasA = false, hasB = false, hasC = false;

                for (int j = 0; j < 3; j++) {
                    if (grid[i][j] == 'A') hasA = true;
                    else if (grid[i][j] == 'B') hasB = true;
                    else if (grid[i][j] == 'C') hasC = true;
                }
                if (!(hasA && hasB && hasC)) {
                    if (!hasA) System.out.println("A");
                    else if (!hasB) System.out.println("B");
                    else System.out.println("C");
                }
            }
        }
    }
}