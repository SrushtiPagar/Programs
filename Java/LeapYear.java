import java.util.*;
class LeapYear
{
	public static void main (String args[])
	{
		Scanner sc=new Scanner(System.in);
		System.out.println("Enter year");
		int yr=sc.nextInt();

		if(yr%4==0)
		{
			System.out.println("year "+yr+" is a leap year");
		}
		else
		{
			System.out.println("year "+yr+" is not a leap year");	
		}
	}
}