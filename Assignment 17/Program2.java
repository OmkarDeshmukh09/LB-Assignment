
class Logic
{
    void checkPalindrome(int num)
    {
        int temp = num ;              //to Store orignal number so we dont loose it
        int iRev = 0 ;
        int iDigit ;

        while(num != 0)
        {
            iDigit = num % 10 ;     //get last digit
            iRev = (iRev * 10) + iDigit;
            num = num / 10 ;
        }

        if(iRev == temp)
        {
            System.out.println("The Number " + temp +" is a Palidrome Number .");
        }
        else
        {
            System.out.println("The Number " + temp +" is not a Palidrome Number .");
        }
    } 
}

class Program2 
{
    public static void main (String A [])
    {
        Logic obj = new Logic();
        obj.checkPalindrome(121);
    }    
}
