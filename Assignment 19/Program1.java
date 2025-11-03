
class Logic 
{
    void checkLeapYear(int year)
    {
        if (year % 4 == 0) 
        {
            System.out.println("Its a Leap Year");    
        }
        else if (year % 100 == 0) 
        {
        System.out.println("its not a Leap Year");    
        }
        else if (year % 4 == 0) 
        {
            System.out.println("Its a Leap Year");
        }
        else
        {
            System.out.println("Its not a Leap Year");
        }
    }
    
}

class Program1 
{
    public static void main(String A [] ) 
    {
        Logic obj = new Logic();
        obj.checkLeapYear(2024);    
    }
}