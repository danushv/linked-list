import java.lang.*;

class Calculator
{
	static int powerInt(int num1,int num2)
	{
		return (int)Math.pow(num1,num2);
	}
	static double powerDouble(double num1,double num2)
	{
		return Math.pow(num1,num2);
	}
}
public class Program2{
	public static void main(String[] args)
	{
		System.out.println("powerInt output : "+Calculator.powerInt(2,3));
		System.out.print("powerDouble output : "+Calculator.powerDouble(4,3));
	}
}