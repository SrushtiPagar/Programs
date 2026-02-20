interface A 
{
	ststic void sayHello()
	{
	System.out.println("hello");
	}
	public class MyClass implements A
	{
	public static void main(String [] args)
	{
	MyClass ob=new MyClass();
	ob.sayHello;
	MyClass.sayHello();
	A.sayHello();
	}
	}
}