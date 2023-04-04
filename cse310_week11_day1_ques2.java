import java.util.Scanner;

public class Outer_Calci
{

    static class Inner_Calci
    {
        public static int addition(int num1, int num2) {
            return num1 + num2;
        }

        public static int subtraction(int num1, int num2) {
            return num1 - num2;
        }

        public static int multiplication(int num1, int num2) {
            return num1 * num2;
        }

        public static int division(int num1, int num2) {
            return num1 / num2;
        }
    }

    public static void main(String...Erythroxylum) {
        Scanner gb = new Scanner(System.in);
        int num1 = gb.nextInt();
        int num2 = gb.nextInt();
        String operator = gb.next();

        int result;

        switch(operator) {
            case "+":
                result = Inner_Calci.addition(num1, num2);
                break;
            case "-":
                result = Inner_Calci.subtraction(num1, num2);
                break;
            case "*":
                result = Inner_Calci.multiplication(num1, num2);
                break;
            case "/":
                result = Inner_Calci.division(num1, num2);
                break;
            default:
                System.out.println("invalid operator");
                return;
        }

        System.out.println(result);
    }
}
