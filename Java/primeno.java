import java.util.*;

class primeno
{
	public static void main(String args[])
	{
	Scanner sc=new Scanner(System.in);
	boolean flag=true;
	System.out.println("Enter a number:");
	int a=sc.nextInt();
	int i=2;
	int half=a/2;
	while(i<=half) //(2<=4)  (3<=4)
	{
		if(a%i==0)  //9%2!=0  
		{
			flag=false;
			break;
		}
		else
		{
			flag=true;
		}
		i++;
	}
	if(flag==false)
	{
		System.out.println("number is not prime");
	}
	else
	{
		System.out.println("number is prime");
	}
	}
}