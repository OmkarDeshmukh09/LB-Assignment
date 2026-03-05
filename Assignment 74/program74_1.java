import java.util.Scanner;

class program74_1 
{
    public static void main(String A []) 
    {
        int daysKept = 0 ;
        int fineAmount = 0 ;

        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter numbers of days Book kept :");
        daysKept = sobj.nextInt();


//      Validations

        if (daysKept < 0) 
        {
            System.out.println("Error : Invalid Input"); 
            return;   
        }

        if (daysKept <= 7) 
        {
            System.out.println("Returned on time. No fine applicable");
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
