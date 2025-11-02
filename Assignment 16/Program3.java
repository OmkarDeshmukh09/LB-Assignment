
class Logic
{
    int iCnt = 0 ;
    void findFactor(int num)
    {
        if (num < 0) 
        {
            num = -num;
        }

        for (iCnt = 1; iCnt <= num ; iCnt++) 
        {
            if (num % iCnt == 0) 
            {
                System.out.println(+iCnt+ " ");
            }
        }
    }
}

public class Program3 
{
    public static void main(String A[] ) 
    {
        Logic lobj = new Logic();
        lobj.findFactor(5);
    }    
}
