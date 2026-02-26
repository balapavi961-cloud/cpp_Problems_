import java.util.*;
 
public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        
        while(t-- > 0) {
            int n = sc.nextInt();
            String s = sc.next();
            
            int balance = 0;
            int moves = 0;
            
            for(char ch : s.toCharArray()) {
                if(ch == '(') {
                    balance++;
                } else {
                    balance--;
                }
                
                if(balance < 0) {
                    moves++;
                    balance = 0;
                }
            }
            
            System.out.println(moves);
        }
    }
}