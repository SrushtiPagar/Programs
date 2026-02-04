public class myrunnable{
    public static void main(String[] args) {
        Runnable e =()->{
            for(int i=1;i<=10;i++){
            System.out.println(i*5);
            try{
                Thread.sleep(1000);
            }
            catch(InterruptedException e1)
            {
                e1.printStackTrace();
            }
        }
    };    
    Thread t=new Thread(e);
    t.start();
    
}
}
