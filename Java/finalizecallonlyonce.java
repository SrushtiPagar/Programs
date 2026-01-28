class finalizecallonlyonce
{
	static finalizecallonlyonce s;
	public static void main(String [] args) throws InterruptedException
	{
	finalizecallonlyonce a =new finalizecallonlyonce();
	System.out.println(a.hashCode());
	a = null;
	System.gc();
	Thread.sleep(5000);

	System.out.println(s.hashCode());
	s=null;
	System.gc();
	Thread.sleep(10000);
	}
	public void finalize()
	{
	System.out.println("I am in finalize");
	s=this;
	}
}