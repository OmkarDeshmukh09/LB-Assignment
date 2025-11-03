class Logic 
{
    void checkPerfectNumber(int num)
    {
        int icnt = 0, isum = 0 , temp = num ;
        
        for(icnt = 1 ; icnt <= num / 2 ; icnt++ )
        {
            if (num % icnt == 0) 
            {
                isum = isum + icnt ;
            }
        }
        if (isum == temp) 
        {
            System.out.println(+temp +" is a Perfect Number");    
        }
        else
        {
            System.out.println(+temp +" is a not Perfect Number");
        }
    }
}

public class Program3 
{
    public static void main(String S[] ) 
    {
        Logic obj = new Logic();
        obj.checkPerfectNumber(6);    
    }
}
