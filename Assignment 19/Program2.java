
class Logic 
{
    void displayGrades(int marks)
    {
        if (marks < 20 ) 
        {
            System.out.println("This Student is Fail");    
        }
        else if (marks < 40 ) 
        {
            System.out.println("This Student has D Grade");    
        }
        else if (marks < 60 ) 
        {
            System.out.println("This Student has C Grade");    
        }
        else if (marks < 80 ) 
        {
            System.out.println("This Student has B Grade");    
        }
        else if (marks < 100 ) 
        {
            System.out.println("This Student has A Grade");    
        }
        else 
        {
            System.out.println("Invalid Input");    
        }
    }
    
}

class Program2 
{
    public static void main(String A [] ) 
    {
        Logic obj = new Logic();
        obj.displayGrades(82);    
    }    
}
