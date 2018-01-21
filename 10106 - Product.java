package uva.solution.with.java;

/**
 *
 * @author Samsil Arefin
 */
import java.math.BigInteger;
import java.util.Scanner;

class UvaSolutionWithJava{
	public static void main(String[] args) {
		Scanner s=new Scanner(System.in);
		while(s.hasNext())
		{
			BigInteger a=s.nextBigInteger();
			BigInteger x=s.nextBigInteger();
			System.out.println(a.multiply(x));
		}
	}
}