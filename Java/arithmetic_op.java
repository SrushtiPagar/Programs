class arithmetic_op
{
  public static void main(String args[])
  {
	int a=10,b=5;                          //output
	System.out.println("add. is:"+(a+=b)); //a=15
	System.out.println("add. is:"+(b+=a)); //[a="15" b=5]  b=20
	System.out.println("sub. is:"+(a-=b)); //[a=15 b="20"] a=-5 
	System.out.println("sub. is:"+(b-=a)); //[a="-5" b=20] b=25
  }
}