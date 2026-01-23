class MyThread2 extends Thread
{
    public void run()
    {
        String s = Thread.currentThread().getName();
        System.out.println(s);
    }
}
public class currentThread1
{
    public static void main(String[] args)
    {
        MyThread2 m1 = new MyThread2();
        MyThread2 m2 = new MyThread2();
        MyThread2 m3 = new MyThread2();

        m1.setName("Thread1");
        m2.setName("Thread2");
        m3.setName("Thread3");

        m1.start();
        m2.start();
        m3.start();
    }
}