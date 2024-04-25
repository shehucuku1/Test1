import java.util.Scanner;
public class KarakterKodiASCII {
  public static void main (String[] args{
    Scanner input = new Scanner(System.in);
System.out.print("Shkruani nje numer ASCII (0-127): ");
   int asciiCode = input.nextInt();
    if(asciiCode >= 0&& asciiCode <= 127) {
 char character = (char) asciiCode;
 System.out.println("Karakteri korrespondent eshte :" +character);
}else{
System.out.println("Numri ASCII duhet te jete ne mes 0 dhe 127.")
}
input.close();
}
}
