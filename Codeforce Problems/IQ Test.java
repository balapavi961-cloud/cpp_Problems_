import java.util.*;
public class Main{
    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int[] arr = new int[n];
        for(int i=0;i<n;arr[i++]=sc.nextInt());
        int even = 0;
        int odd = 0;
        for(int i=0;i<n;i++){
            if(arr[i]%2 == 0) even++;
            else odd++;
        }
        if(even == 1){
            for(int i=0;i<n;i++){
                if(arr[i] % 2 == 0){
                    System.out.println(i+1);
                }
            }
        }else if(odd == 1){
            for(int i=0;i<n;i++){
                if(arr[i] % 2 == 1){
                    System.out.println(i+1);
                }
            }
        }
    }
}