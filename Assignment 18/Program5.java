class Logic 
{
    void CheckSign(int iNum)
    {
        if (iNum == 0 ) 
        {
            System.out.println("The Number is Zero");
        }
        else if (iNum < 0) 
        {
            System.out.println("The Number is Negitive");
        }
        else
        {
            System.out.println("The Number is Postive");
        }
    }
}

public class Program5 
{
    public static void main(String A [] ) 
    {
        Logic obj = new Logic();
        obj.CheckSign(-8);    

    }
}
