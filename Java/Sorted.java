import java.util.Comparator;
import java.util.TreeSet;

class Mycomparator implements Comparator
{
    public int compare (Object o1,Object o2){
        Integer obj1 =(Integer)o1;
        Integer obj2 =(Integer)o2;
        return obj2.compareTo(obj1);   //for natural sorting
        //return -obj2.compareTo(obj1);  //for reverse sorting
    }
}
    public class Sorted {
    public static void main(String[] args) {
        // TreeSet <Integer> s=new TreeSet<Integer>(new Mycomparator());
        // s.add(22);
        // s.add(17);
        // s.add(2);
        // s.add(7);
        // System.out.println(s);

        TreeSet <Integer> s=new TreeSet<Integer>(new Mycomparator());
        s.add(22);
        s.add(17);
        s.add(null);
        System.out.println(s);
    }
        
    }
