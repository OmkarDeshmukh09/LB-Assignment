import java.util.Scanner;

class program75_2
{
    public static void main(String A[]) 
    {
        int Age = 0;
        int MontlyInc = 0 ;
        int CriditScore = 0 ;
        String UnpaidLoan = null;
        boolean PersonalLoan = false;
        
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter Age of the customer : ");
        Age = sobj.nextInt();
        
        System.out.println("Enter Monthly Income of the customer : ");
        MontlyInc = sobj.nextInt();
        
        System.out.println("Enter Cridit Score of the customer : ");
        CriditScore = sobj.nextInt();
        
        System.out.println("Enter Existing Loan of the customer (Yes/No) : ");
        UnpaidLoan = sobj.next();

//      Validation

        if ( Age < 0 || MontlyInc < 0 || CriditScore < 0 )
        {
            System.out.println("Invalid Input");    
            return;
        }

//      Conditions

        if (Age < 20 && Age > 60 )                  // Age
        {
            System.out.println("Loan Rejected : Age must be inslusive of 20 to 60 years");
        }
        else if (MontlyInc < 25000)                 // monthly income
        {
            System.out.println("Loan Rejected : Monthly Income must be more than Rs.25000");
        }
        else if (CriditScore < 700)                     // Cridit Score
        {
            System.out.println("Loan Rejected : Cridit Score must be more than 700");
        }
        else if (UnpaidLoan.equals("Yes"))   // Existing unpaid loan
        {
            System.out.println("Loan Rejected : Has an Unpaid Loan");
        }
        else
        {
            System.out.println("Loan Approved");
        }
        
        sobj.close();
    }
}
