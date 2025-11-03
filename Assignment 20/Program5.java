class Logic 
{
    void findSmallestDigit(int num)
    {
        int iDigit = 0;
        int iMin = 9;

        if (num < 0)
        {
            num = -num;  // Updator
        }

        while (num != 0)
        {
            iDigit = num % 10;     // extract last digit
            if (iDigit < iMin)     // compare with current max
            {
                iMin = iDigit;
            }
            num = num / 10;        // remove last digit
        }

        System.out.println("The largest digit is: " + iMin);
    }
}

class Program5 
{
    public static void main(String A[])
    {
        Logic obj = new Logic();
        obj.findSmallestDigit(59327);   // example number
    }
}
