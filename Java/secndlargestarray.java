import java.util.Scanner;

public class secndlargestarray {

    public void logic()
    {
        Scanner sc = new Scanner(System.in);
        int size; 
        System.out.println("Enter size of Array");
        size = sc.nextInt();
        
        int[] no = new int[size];
        for(int i=0;i<size;i++)
        {
            System.out.println("Enter "+i +"th Element");
        }
        for (int i = 0; i < size - 1; i++) 
	{
        for (int j = 0; j < size - i - 1; j++) 
		{
            if (no[j] > no[j + 1])
			{
                int temp = no[j];
                no[j] = no[j + 1];
                no[j + 1] = temp;
            }
        }
    }
        System.out.println("2nd largest Element is :"+no[size-2]);
    
    

    }
    public static void main(String[] args) {
        secndlargestarray sl = new secndlargestarray();
        sl.logic();
        
    }
}