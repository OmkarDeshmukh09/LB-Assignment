
class Logic 
{
    int iDigit = 0 , iProduct = 1 ;

    void productofDigits(int num)
    {
        if (num < 0) 
        {
            num = - num ;    
        }    

        while (num != 0) 
        {
            iDigit = num % 10 ;
            iProduct = iProduct * iDigit ;
            num = num / 10 ;
        }

        System.out.println("The product of digits is : "+ iProduct);
    }
}

class Program1
{
    public static void main(String A [] ) 
    {
        Logic obj = new Logic();
        obj.productofDigits(234);    
    }
}