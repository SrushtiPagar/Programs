public class P
{
	public static void m1()
	{
	System.out.println("parent");
	}
}
class C extends P
{
	public static void m1()
	{
	System.out.println("child");
	}
}
class check
{
	public static void main(String [] args)
	{
	P p=new P();
	p.m1();
	}
}