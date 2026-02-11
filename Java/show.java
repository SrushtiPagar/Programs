class x
{
	int n =10;
}
class y extends x
{
	int n = 20;
	void display()
	{
	System.out.println(n);
	System.out.println(n);
	}
}
class show 
{
	public static void main(String []args)
	{
	y obj=new y();
	obj.display();
	}
}