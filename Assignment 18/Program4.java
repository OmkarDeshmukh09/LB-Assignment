
class Logic 
{
    int iCnt = 0 , iEvenSum = 0 , iOddSum = 0;
    void SumEvenOddNumbers(int iNum)
    {
        if (iNum < 0 ) 
        {
            iNum = -iNum;    
        }

        for(iCnt = 0 ; iNum >= iCnt; iCnt++)        // Even Numbers
        {
            if (iCnt % 2 == 0) 
            {
                iEvenSum = iEvenSum + iCnt ;
            }
        }

        for (int iCnt = 0; iCnt <= iNum; iCnt++) 
        {
            if (iCnt % 2 != 0)                      // Odd Numbers
            {
                iOddSum = iOddSum + iCnt ;    
            }    
        }
        System.out.println("The Sum of Even Number is :"+iEvenSum);
        System.out.println("The Sum of Odd Number is :"+iOddSum);
    }
    
} 

class Program4 
{
    public static void main(String A [] ) 
    {
        Logic obj = new Logic();
        obj.SumEvenOddNumbers(20);
    }    
}
