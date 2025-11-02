
class Logic
{
    int iCnt  = 0 ;
    int iEven = 0 ;

    void PrintEvenNumbers(int iNum)
    {
        if (iNum < 0) 
        {
            iNum = -iNum;    
        }
        for(iCnt = 0 ; iNum >= iCnt; iCnt++)
        {
            if (iCnt % 2 == 0) 
            {
                System.out.print(iCnt+"  ");    
            }
        }
    }
}

class Program2 
{
    public static void main(String A[] ) 
    {
        Logic obj = new Logic();
        obj.PrintEvenNumbers(20);    
    }
}
