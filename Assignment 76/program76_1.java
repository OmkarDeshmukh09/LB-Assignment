import java.util.Scanner;

class program76_1 
{
    public static void main(String A[]) 
    {
        int Distance = 0;
        String PHour = null;
        int Amount = 0 ;
        
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter Distance : ");
        Distance = sobj.nextInt();

        System.out.println("Enter Peak Hour (Yes/No) : ");
        PHour = sobj.next();

        if (Distance < 0 ) 
        {
            System.out.println("Invalid Input");    
            return;
        }

        Distance = 50;

        if (Distance <= 10) 
        {
            Amount = Distance * 12 ;
        }
        else        // Beyond 10 km -> 15
        {
            Amount =  (120) + ((Distance - 10 ) * 15) ;
        }

        if (PHour.equalsIgnoreCase("Yes")) 
        {
            Amount = (Amount * 20) ;    
        }

        System.out.println("Total Distance : "+Distance+" km");
        System.out.println("Total Peak Hour : "+PHour);
        System.out.println("Total Fair : "+Amount);

    }
}
