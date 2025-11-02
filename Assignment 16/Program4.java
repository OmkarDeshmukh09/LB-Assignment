class Logic
{
    void reverseNumber(int num)
    {
        int iCnt = 0 , iRev = 0 ;
        while( num != 0 )
        {
            iCnt = num % 10 ;
            iRev = (iRev * 10 ) + iCnt ;
            num = num / 10 ;
            
            System.err.println(+iRev);
        }
    }
}

public class Program4 
{
    public static void main(String A[] ) 
    {
        Logic obj = new Logic();
        obj.reverseNumber(1234);        
    }    
}
