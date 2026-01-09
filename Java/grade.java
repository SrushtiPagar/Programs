import java.util.*;

class grade
{
	public static void main(String args[])
	{
	Scanner sc=new Scanner(System.in);
	System.out.println("Enter percentage:");
	Float per=sc.nextFloat();
	
	if(per>=75 && per<=100)
		System.out.println("Distingtion");
	else if(per>=60 && per<75)
		System.out.println("First class");
	else if(per>=35 && per<60)
		System.out.println("Second class");
	else if(per<35)
		System.out.println("Fail...");
	else 
		System.out.println("Wrong Input");
	}
}
	
	
	