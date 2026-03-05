import java.util.Scanner;

class program75_2
{
    public static void main(String A[]) 
    {
        String Helmet = null;
        String License = null;
        String OverSpeeding = null;

        int Fine = 0;

        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter Helmet Worn (Yes/No) : ");
        Helmet = sobj.next();
        
        System.out.println("Enter License Availiabe (Yes/No) : ");
        License = sobj.next();

        System.out.println("Enter OverSpeading (Yes/No) : ");
        OverSpeeding = sobj.next();

//      Validation

        if ( Helmet.equalsIgnoreCase("No"))
        {
            Fine = Fine + 500;
        }
        else
        
     if ( License.equalsIgnoreCase("No"))
        {
            Fine = Fine + 1000;
        }
        
        if ( OverSpeeding.equalsIgnoreCase("Yes"))
        {
            Fine = Fine + 1500;
        }
    
        System.out.println("Total Fine Amount : "+Fine);

        sobj.close();
    
    }
}
