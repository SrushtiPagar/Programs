
 interface call {
    public abstract int sum(int a,int b);
    default void m2()
    {
        System.out.println("Hello");
    }
        
    }
public class Lambdaexp
{
    public static void main(String[] args)
    {
        call c = ( a, b)->a+b;
        System.out.println("Addition is "+c.sum(10,20));
        c.m2();
    }
}


    // public int getstringlength(String str)
    // {
    //     return str.length();
    // }    
    // public static void main(String[] args) {
        
    //     Lambdaexp le = new Lambdaexp ();
        
    //     System.out.println("Length of String is:"+le.getstringlength("Srushti"));

    //     //now converting 
    //     ()-> System.out.println("Hello");
    // }

