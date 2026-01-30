public class HeapSCP {
    public static void main(String[] args) {
        String s=new String("Pratap");
        s.concat("Software");
        s=s.concat("Solutions");
        System.out.println(s);

        String A1=new String ("Spring");
        A1.concat("fall");
        String A2 =A1.concat("Winter");
        A2.concat("Summer");
        System.out.println(A1);
        System.out.println(A2);
    }
}
