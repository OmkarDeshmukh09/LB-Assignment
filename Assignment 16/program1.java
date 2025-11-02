

class Logic
{
    int iCnt = 0 ;
    int iSum = 0 ;
    void calculateSum(int n)
    {
        for (iCnt = 0; iCnt <= n; iCnt++) 
        {
            iSum = iSum + iCnt ;
        }
        System.out.println("Sum of First " + n + "numbers is: " + iSum);
    }
}


class program1
{
    public static void main (String [] A)
    {
        Logic obj = new Logic();
        obj.calculateSum(10);
    }
}

