/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package main;
import java.math.BigInteger;
import java.util.*;

/**
 *
 * @author arefin
 */
public class Main {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
         Scanner sc=new Scanner(System.in);
          BigInteger fib[] = new BigInteger[5001];
        BigInteger a = fib[0] = BigInteger.valueOf(0);
        BigInteger b = fib[1] = BigInteger.valueOf(1);
 
        int n = 2;
        while(n <= 5000) {
            fib[n] = a.add(b);
            a = b;
            b = fib[n];
 
            n++;
        }
 
        while(sc .hasNext()) {
            n = sc .nextInt();
            System.out.printf("The Fibonacci number for %d is %s\n", n, fib[n].toString());
        }
    }
    
}
