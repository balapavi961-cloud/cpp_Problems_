import java.util.*;

public class Languages {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int n = sc.nextInt(); 
        int m = sc.nextInt();  

        HashMap<String, String> map = new HashMap<>();

        for (int i = 0; i < m; i++) {
            String firstLang = sc.next();
            String secondLang = sc.next();
            map.put(firstLang, secondLang);
        }

        for (int i = 0; i < n; i++) {
            String word = sc.next();
            String translated = map.get(word);

            if (translated.length() < word.length()) {
                System.out.print(translated + " ");
            } else {
                System.out.print(word + " ");
            }
        }

        sc.close();
    }
}