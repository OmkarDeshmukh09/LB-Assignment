
class Logic  
{
    void CheckEvenOdd(int num)
    {
        if (num < 0 ) 
        {
            num = -num;
        }
        if (num % 2 == 0) 
        {
            System.out.println("The Number Given" + num + " is Even");
        }
        else
        {
            System.out.println("The Number Given "+ num + " is Odd");
        }
    }
    
}

public class Program2 
{
    public static void main(String A [] ) 
    {
        Logic lobj = new Logic();
        lobj.CheckEvenOdd(7);
    }    
}
