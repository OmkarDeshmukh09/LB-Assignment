class Logic 
{
    void sumEvenNumber(int n)
    {
        int isum = 0;

        if (n <  0) 
        {
            n = - n;
        }
        for (int i = 0; i <= n; i++) 
        {
            if (i % 2 == 0) 
            {
                isum = isum + i ;   
            }    
        }
        System.out.println("Sum of even number up to "+ n + " is : "+isum);
    }
}

class Program1 
{
  public static void main(String[] A) 
  {
    Logic obj = new Logic();
    obj.sumEvenNumber(10);  
  }  
}
