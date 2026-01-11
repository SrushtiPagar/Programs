public class String1 
{
    public static void main (String[] args)
    {
        StringBuffer s1 =new StringBuffer("Srushti");
        StringBuffer s2 =new StringBuffer("Srushti");
        //s.concat("Pagar");
        System.out.println(s1==s2); //== checks the reference
        System.out.println(s1.equals(s2));   //it will act as a object reference but it is not present in string buffer 
    }
}
