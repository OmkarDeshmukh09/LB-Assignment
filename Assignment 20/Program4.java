class Logic 
{
    void findLargestDigit(int num)
    {
        int iDigit = 0;
        int iMax = 0;

        if (num < 0)
        {
            num = -num;  // Updator
        }

        while (num != 0)
        {
            iDigit = num % 10;     // extract last digit
            if (iDigit > iMax)     // compare with current max
            {
                iMax = iDigit;
            }
            num = num / 10;        // remove last digit
        }

        System.out.println("The largest digit is: " + iMax);
    }
}

class Program4 
{
    public static void main(String A[])
    {
        Logic obj = new Logic();
        obj.findLargestDigit(59327);   // example number
    }
}
