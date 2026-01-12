public class Stringmethods 
{
    public static void main(String[] args)
     {
        //Concatmethod
        String s1="Srushti";
    String s =s1.concat("Software");
    System.out.println(s);    
    System.out.println(s1); 
    
    //charAtMethod
        String s2="hello";
        System.out.println(s2.charAt(3));

    //BooleanIsEmpty
    String s3="   ";
    System.out.println(s3.isEmpty());
    String s4="Srushti";
    System.out.println(s4.isEmpty());

    //lenght

    String s5="Durva";
    System.out.println(s5.length());

    //replace
    String s6 = "ababababbb";
    System.out.println(s6.replace('a', 'b'));
    System.out.println(s6.replace('b', 'a'));
    System.out.println(s6.replace('a', 's'));

    //Substring
    System.out.println(s6.substring(3));

    //Substring with begin and end
    System.out.println(s6.substring(2, 5));

    //Indexof

    String a="  srus hti   ";
    System.out.println(a.indexOf('i'));

        //TRim
        System.out.println(a.trim());
        System.out.println(a);


    }
    
}
