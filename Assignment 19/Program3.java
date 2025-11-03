class Logic 
{
    void checkDivisiable(int num)
    {
        if (num % 5 == 0 && num % 11 == 0) 
        {
            System.out.println("The Number : "+num+ " is Divisiable by 5 & 11 .");
        }
        else
        {
            System.out.println("Invalid Input");
        }
    }
    
}

class Program3 
{
    public static void main(String A[] ) 
    {
        Logic obj = new Logic();
        obj.checkDivisiable(55);    
    }
}
