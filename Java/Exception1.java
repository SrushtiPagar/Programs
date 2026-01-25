
public class Exception1
{
    public static void main(String[] args)
    {
        //PrintWriter pw=new PrintWriter("abc.txt");
        int a=10;
        int b=0;
        try 
        {
        int c=a/b;
        System.out.println(c);
        }
       
        catch(ArithmeticException e)
        {
            System.out.println("Arithmetic exception occured");
        }
        
        finally
        {
            System.out.println("I am in finally");
        }
    }
}