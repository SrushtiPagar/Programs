import java.util.*;
class max
{
	public static void main (String args[])
	{
		Scanner sc=new Scanner(System.in);
		System.out.println("Enter no1 and no2 number");
		int no1=sc.nextInt();
		int no2=sc.nextInt();

		if(no1>no2)
		{
			System.out.println("number "+no1+" is greater");
		}
		else
		{
			System.out.println("number "+no1+" is smaller");	
		}
	}
}