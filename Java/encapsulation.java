class finalizeMethod
{
	public static void main(String [] args)
	{
	finalizeMethod fm = new finalizeMethod();
	fm = null;
	System.gc();
	System.out.println("main method ends");
	}
	public void finalize()
	{
	System.out.println("I am in finalize");
	}
}