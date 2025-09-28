import java.util.Scanner; // Import the Scanner class to read user input

public class OddEvenChecker {
    public static void main(String[] args) {
        // Create a Scanner object to get input from the console
        Scanner inputReader = new Scanner(System.in);

        // Prompt the user to enter a number
        System.out.print("Enter an integer: ");

        // Read the integer entered by the user
        int number = inputReader.nextInt();

        // Check if the number is even or odd using the modulo operator
        if (number % 2 == 0) {
            System.out.println(number + " is an even number.");
        } else {
            System.out.println(number + " is an odd number.");
        }

        // Close the scanner to prevent resource leaks
        inputReader.close();
    }
}
