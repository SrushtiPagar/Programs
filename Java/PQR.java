interface ABC
{
	default void m1()
	{
	System.out.println("I am in ABC");
	}
}
interface XYZ 
{
	default void m1()
	{
	System.out.println("I am in XYZ");
	}
}
public class PQR implements ABC,XYZ
{
	public static void main(String[] args)
	{
	 PQR p=new PQR();
	p.m1();
	}
	public void m1()
	{
	XYZ.super.m1();
	}
}






