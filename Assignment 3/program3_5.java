import java.util.Scanner;

class Logic 
{
    void DisplayConvert(String str)
    {
        char ch = str.charAt(0);

        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') 
        {    
            System.out.println("Character is a vovel");
        }
        else
        {
            System.out.println("It's not a vowel");
        }
    }
}

class program3_5
{
    public static void main(String A[] ) 
    {
        String iValue1 = "A" ;

        Scanner sobj = new Scanner(System.in);

        System.out.print("Enter String : ");
        iValue1 = sobj.nextLine();

        Logic lobj = new Logic();
        lobj.DisplayConvert(iValue1);
    }
    
}