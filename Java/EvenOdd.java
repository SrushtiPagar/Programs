import java.util.*;
class EvenOdd
{
	public static void main (String args[])
	{
		Scanner sc=new Scanner(System.in);
		System.out.println("Enter a number");
		int no=sc.nextInt();

		if(no%2==0)
		{
			System.out.println("number "+no+" is even");
		}
		else
		{
			System.out.println("number "+no+" is odd");	
		}
	}
}