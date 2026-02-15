interface client
{
	void input();
	void output();
}
class pratap implements client
{
	String name;
	Double salary;
	void input()
	{
	Scanner sc=new Scanner(System.in);
	System.out.println("Enter name");
	name=sc.nextline();
	System.out.println("Enter salary");
	salary=sc.nextDouble();
	}
	void output()
	{
	System.out.println(name+" "+salary);
	}
	public static void main(String []args)
	{
		client c =new pratap();
		c.input();
		c.output();
	}
}