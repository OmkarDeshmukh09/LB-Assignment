
class Logic
{
    void calculatePower(int base, int exp)
    {
        int result = 1;   // start with 1 (neutral element for multiplication)

        for (int i = 1; i <= exp; i++)
        {
            result = result * base;   // multiply base each time
        }

        System.out.println(base + " raised to the power " + exp + " is: " + result);
    }
}

class Program5 
{
    public static void main(String[] args) 
    {
        Logic obj = new Logic();
        obj.calculatePower(2, 5);    
    }
    
}