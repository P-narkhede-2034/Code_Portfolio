public class program03 {
    public static void main(String[] args) throws Exception {
        int x = 10;
        int y = 0;
        int result = divide(x, y);
        System.out.println("Result: " + result);
    }

    static int divide(int a, int b) throws Exception {
        if (b == 0) {
            throw new Exception("Division by zero is not allowed.");
        }
        return a / b;
    }
}
