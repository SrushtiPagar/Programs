class Employee 
{
	int id;
	String name;
	static String companyname = "Zensor";
Employee (int id,String name)
{
	this.id=id;
	this.name=name;
}
	public void display()
	{
	System.out.println(id+" "+name+" "+companyname);
	}
}
class Mainclass
{
	public static void main(String[] args)
	{
	Employee e=new Employee(1,"Srushti");
	e.display();
	}
}