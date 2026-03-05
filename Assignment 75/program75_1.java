import java.util.Scanner;

class program75_1 
{
    public static void main(String A[]) 
    {
        int TotalHours = 0;
        int Amount = 0 ;
        
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter total Parking hours : ");
        TotalHours = sobj.nextInt();

        if (TotalHours < 0) 
        {
            System.out.println("Invalid Input");    
            return;
        }

        if (TotalHours <= 2) 
        {
            Amount = 20 ;
        }
        else if (TotalHours <= 10) 
        {
            Amount = (20) + (TotalHours - 2) * 10 ;    
        }
        else
        {
            Amount =  (20) + (80) + ((TotalHours - 2 - 8) * 50) ;
        }

        System.out.println("Total Parking Duration : "+TotalHours);
        System.out.println("Total Parkinng Fee : "+Amount);

    }
}
