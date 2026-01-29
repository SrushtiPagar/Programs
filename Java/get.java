abstract class car
{
	public abstract void fueltype();
	void color()
	{
		System.out.println("Grey Color");	
	}
}
class Tata extends car
{
	public void fueltype()
	{
		System.out.println("Petrol");
	}
}
class get
{
	public static void main(String []args)
	{
		Tata t=new Tata();
		t.fueltype();
		t.color();
	}
}