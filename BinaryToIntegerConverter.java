import java.util.Scanner;

public class BinaryToIntegerConverter {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        // Input binary number as a string
        String binaryString = scanner.next();

        // Convert binary string to decimal
        int decimal = 0;
        int power = 0;
        for (int i = binaryString.length() - 1; i >= 0; i--) {
            int bit = binaryString.charAt(i) - '0';
            decimal += bit * Math.pow(2, power);
            power++;
        }

        // Output the decimal equivalent
        System.out.println(decimal);

        scanner.close();
    }
}
