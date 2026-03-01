import java.util.*;
public class AmbitousKid{
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int[] arr = new int[n];
        for(int i=0;i<n;arr[i++]=sc.nextInt());
        int min = Integer.MAX_VALUE;
        for(int i=0;i<n;i++){
            min = Math.min(min , Math.abs(arr[i]));
        }
        System.out.println(min);
    }
}