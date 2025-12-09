import java.util.Scanner;

class Logic 
{
    void Display(int iNo)
    {
        int iCnt = 0;
        
        for ( iCnt = 1; iCnt <= (iNo*2); iCnt++) 
        {
            if ((iCnt % 2) == 0 ) 
            {
                System.out.print(" "+iCnt+"\t");    
            }    
        }
    }
}

class program3_1
{
    public static void main(String A[] ) 
    {
        int iValue1 = 0 ;

        Scanner sobj = new Scanner(System.in);

        System.out.print("Enter number : ");
        iValue1 = sobj.nextInt();

        Logic lobj = new Logic();
        lobj.Display(iValue1);
    }
    
}