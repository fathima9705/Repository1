public class PalindromeNumber {
    public static boolean isPalindrome(int num) {
        int originalNum = num;
        int reverse = 0;
        
        // Negative numbers are generally not considered palindromes
        if (num < 0) {
            return false;
        }

        while (num != 0) {
            int lastDigit = num % 10; // Extract the last digit
            reverse = reverse * 10 + lastDigit; // Build the reverse number
            num /= 10; // Remove the last digit from the original number
        }

        return originalNum == reverse; // Compare original and reversed numbers
    }

    public static void main(String[] args) {
        int number1 = 121;
        int number2 = 12345;

        System.out.println(number1 + " is a palindrome number: " + isPalindrome(number1));
        System.out.println(number2 + " is a palindrome number: " + isPalindrome(number2));
    }
}

