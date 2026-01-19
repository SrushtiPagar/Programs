class lowerupper
{
	void check(String s)
	{
	int countupper=0;
	int countlower=0;
	for(int i=0;i<s.length;i++)
	{
		String ans=s.charAt(i);
	if(ans>=65 && ans<=90)
	{
	countupper++;
	}
	else if(ans>=97 && ans<=122)
	{
	countlower++;
	}
	else
	{
	System.out.println("Character is nither lower case nor upper case");
	}
	}
	}
	public static void main(String [] args)
	{
	String s ="Hello World";
	lowerupper lu = new lowerupper(s);
	lu.check();
	System.out.println("uppercase characters are " +countupper);
	System.out.println("uppercase characters are " +countlower);
	}
}