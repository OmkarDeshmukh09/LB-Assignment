
class Logic
{
    void printDigits(int num)
    {     
    int rev = 0 ;

        while (num != 0) 
        {
            rev = rev * 10 + num % 10 ;
            num = num / 10 ;
             
        }
        while (rev != 0) 
        {
            System.out.println(rev % 10);
            rev = rev / 10 ;    
        }
    }
}

class Program4 
{
    public static void main(String A [] ) 
    {
        Logic obj = new Logic();
        obj.printDigits(9876);    
    }
    
}
