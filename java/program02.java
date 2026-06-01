import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

public class program02 {
    public static void main(String[] args) throws IOException {
        BufferedReader reader = new BufferedReader(new InputStreamReader(System.in));
        System.out.print("Enter a line: ");
        String line = reader.readLine();
        System.out.println("You entered: " + line);
    }
}
