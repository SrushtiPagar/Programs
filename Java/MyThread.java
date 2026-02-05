 class B extends Thread
{
    public void run()
    {
    for(int i=0;i<5;i++)
    {
        System.out.println("Srushti");
    }
    int c=10+5;
    System.out.println("Addition is :"+c);

    int d=10-5;
    System.out.println("Subtraction is :"+d);

    for(int j=1;j<=10;j++)
    {
        System.out.println(5*j);
    }
}
}
public class MyThread
{
    public static void main(String[] args)
    {
        B b = new B();
        //b.start();     //start se hi call karna he

        Thread t =new Thread(b);
        t.start();
        for(int i=0;i<5;i++)
    {
        System.out.println("main Thread");
    }

    }
}
// Thread sheduler manage the thread coming time basrd on their priority
