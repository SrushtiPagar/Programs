import java.util.*;
class charCase
{
	public static void main (String args[])
	{
		Scanner sc=new Scanner(System.in);
		System.out.println("Enter a character");
		char ch=sc.next().charAt(0);

		if(ch>=65 && ch<=90)
		{
			System.out.println("char is in upper case");
		}
		else
		{
			System.out.println("char is in lower case");	
		}
	}
}