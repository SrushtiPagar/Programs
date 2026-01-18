import java.util.Scanner;

class employee
{
	public static void main(String args[])
	{
		String name;
		int salary;
		Scanner sc = new Scanner(System.in);
		System.out.println("ENTER data of 3 Employee:");
		for(int i=0 ;i<3 ; i++)
		{
			System.out.println("ENTER name of Employee:");
			name = sc.next(i);
			System.out.println("ENTER salary of Employee:");
			salary = sc.nextInt(i);
		}
		for(int i=0 ;i<3 ; i++)
		{
			System.out.println(" Employee name:"+i.name);
			System.out.println("salary of Employee is:"+i.salary);
		}
	}
}