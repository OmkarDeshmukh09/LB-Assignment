
class Logic 
{
    int iCnt = 0 ;
    void PrintOddNumbers(int iNum)
    {
        if (iNum < 0 ) 
        {
            iNum = -iNum;    
        }
        for (int iCnt = 0; iCnt <= iNum; iCnt++) 
        {
            if (iCnt % 2 != 0) 
            {
                System.out.print(iCnt+"    ");    
            }    
        }
    }
    
} 

class Program3 
{
    public static void main(String A [] ) 
    {
        Logic obj = new Logic();
        obj.PrintOddNumbers(20);
    }    
}
