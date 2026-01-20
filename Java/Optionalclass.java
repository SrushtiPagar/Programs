import java.util.Optional;

public class Optionalclass {
    public static void main(String[] args) {
        String s="";
        if (s==null)
        {
            System.out.println("Given String is null");
        }
        else
        {
            System.out.println(s.length());
        }

        Optional<String> optionallen  = Optional.ofNullable(s);
        System.out.println(optionallen.isPresent());
        System.out.println(optionallen.isEmpty());
        System.out.println(optionallen.orElse("Null Value"));
    }
}
