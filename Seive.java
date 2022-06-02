import java.util;
import java.util.Scanner;

public class Seive{
    
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        boolean[] primes = new boolean[n+1];
        sieve(n, primes);
    }

    public static void sieve(int n, boolean[] primes){
        for (int i = 2; i*i <= n; i++) {
            if(!primes[i]) {
                for (int j = i*2; j <= n; j+=i) {
                    primes[j] = true;
                }
            }
        }
        System.out.println("Prime number: ");
        for (int i = 2; i <= n; i++) {
            if(!primes[i]) {
                System.out.print(i + " ");
            }
        }
    }
} 