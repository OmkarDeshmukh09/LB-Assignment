
class Logic
{
    void checkPrime(int num)
    {
        int iCnt = 0 , iDiv = 0 ;

        if (num < 0) 
        {
            num = - num;    
        }

        for(iCnt = 1 ; iCnt <= num ; iCnt++ ) 
        {
            if (num % iCnt == 0) 
            {
                iDiv ++ ;    
            }
        }
        if (iDiv == 2) 
        {
            System.out.println("Its a Prime Number");
        }
        else
        {
            System.out.println("Its not a Prime Number");
        }
    }
}

class Program1 
{
    public static void main(String A []) 
    {
        Logic obj = new Logic();
        obj.checkPrime(11);    
    }
    
}
