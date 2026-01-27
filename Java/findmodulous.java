interface call {
    public abstract int reminder(int a,int b);
   
    }
public class findmodulous
{
    public static void main(String[] args)
    {
        call c = ( a, b)->a%b;
        System.out.println("Reminder is "+c.reminder(10,3));
        
        
    }
}


