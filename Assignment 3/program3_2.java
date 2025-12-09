import java.util.Scanner;

class Logic 
{
    void DisplayFactors(int iNo)
    {
        int iCnt = 0;

        if (iNo <= 0) 
        {
            iNo = -iNo;    
        }
        
        for ( iCnt = 1; iCnt <= (iNo / 2 ); iCnt++) 
        // (iNo / 2 ) || [iNo] i is also prefarable but (/2) makes loop rotate less 
        {
            if ((iNo % iCnt) == 0 ) // Factor Selector
            {
                System.out.print(" "+iCnt+"\t");       
            }    
        }
    }
}

class program3_2
{
    public static void main(String A[] ) 
    {
        int iValue1 = 0 ;

        Scanner sobj = new Scanner(System.in);

        System.out.print("Enter number : ");
        iValue1 = sobj.nextInt();

        Logic lobj = new Logic();
        lobj.DisplayFactors(iValue1);
    }
    
}