class Logic 
{
    void printReverse(int num)
    {
        while (num != 0) 
        {
            System.out.println(+num);
            num = num / 10 ;
                
        }
    }
}

class Program2 
{
    public static void main(String[] args) 
    {
        Logic obj = new Logic();
        obj.printReverse(10);    
    }
}
