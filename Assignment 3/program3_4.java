import java.util.Scanner;

class Logic 
{
    char DisplayConvert(String str)
    {
        char ch = str.charAt(0);

        if (ch >= 'a' && ch <= 'z' ) 
        {
            ch = Character.toUpperCase(ch);    
            System.out.println("Converted is : "+ch);
        }
        else
        {
            System.out.println("It's not a Alphabet");
        }
        return ch;
    }
}

class program3_4
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