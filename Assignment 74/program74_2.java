import java.util.Scanner;

class program74_1 
{
    public static void main(String A []) 
    {
        int Balance = 0 ;
        int withdrawAmount = 0 ;

        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the current balance :");
        Balance = sobj.nextInt();


//      Validations

        if (Balance < 0 || withdrawAmount <= 0) 
        {
            System.out.println("Error : Invalid Input"); 
            return;   
        }

        if (withdrawAmount % 100 != 0) 
        {
            System.out.println("Withdraw amount should be multiple of Rs:100");
            return;
        }
        else if (daysKept <= 12 ) 
        {
            fineAmount = (daysKept - 7) * 5 ;
            
        }
        else
        {
            fineAmount = (25) + (daysKept - 7 - 5) * 10;
        }

        System.out.println("Total fine to be paid : "+fineAmount);

        
    }    
}
