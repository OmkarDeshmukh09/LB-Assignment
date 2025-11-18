class Logic {

    int iCnt = 0;

    void PrintDivisibleBy2and3(int n) {
        System.out.println("The Numbers Divisible by 2 and 3 are :");

        for (iCnt = 1; iCnt <= n; iCnt++) {

            if (iCnt % 2 == 0 && iCnt % 3 == 0) {
                System.out.println(iCnt);
            }
        }

    }
}

class Program5 
{
    public static void main(String[] args) {
        Logic lobj = new Logic();
        lobj.PrintDivisibleBy2and3(20);
    }
}