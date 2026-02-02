interface call {
    public abstract int length(String s);
   
    }
public class lenghtofstring
{
    public static void main(String[] args)
    {
        call c = (s)->{return s.length();
        };
        System.out.println(c.length("Srushti"));
        
    }
}


