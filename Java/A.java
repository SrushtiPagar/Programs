class A
{
	void evaluation(String s1,String s2,boolean flag)
	{
	if(s1.length() != s2.length())
	{
	System.out.println("String is not an anagram--------");
	}
	else
	{
	for(int i=0;i<s1.length();i++)
	{
		for(int j=0;j<s2.length();j++)
		{
		if(s1.charAt(i)==s2.charAt(j))
		{
		flag = true;
		}	
		else
		{
		flag=false;
		}
		}
	}
	}
	}
		void display(boolean flag)
		{
		if(flag== true)
		{
		System.out.println("String is anagram");
		}
		else
		{
		System.out.println("String is not anagram");
		}
		}	
		
	public static void main(String [] args)
	{
	String s1 = "srushti";
	String s2 = "ustishr";
	boolean flag = true;
	
	A e=new A();
	e.evaluation(s1, s2, flag);
	e.display(flag);
	}
}