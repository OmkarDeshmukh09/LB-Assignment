import java.util.Scanner;

class program75_2
{
    public static void main(String A[]) 
    {
        double AIncome = 0.0 ;

        double Tax = 0.0 ;

        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter Annual Income : ");
        AIncome = sobj.nextDouble();

//      Validation

        if (AIncome < 0) 
        {
            System.out.println("Invalid Input");
            sobj.close();    
            return;
        }

        if (AIncome <= 250000 ) 
        {
            Tax = 0;
        }
        else if (AIncome <= 500000) 
        {
            Tax = (AIncome - 250000) * 0.05;
        }
        else if (AIncome <= 1000000) 
        {
            Tax = (250000 * 0.05 ) + (AIncome - 500000) * 0.20 ;
        }
        else
        {
            Tax = (250000 * 0.05 ) + 
                  (AIncome - 500000) + 
                  (AIncome - 1000000) * 0.30;
        }

        System.out.printf("Annual Income : %.2f\n", AIncome);
        System.out.printf("Total Tax Payable : %.2f\n", Tax);
        

        sobj.close();
    
    }
}
