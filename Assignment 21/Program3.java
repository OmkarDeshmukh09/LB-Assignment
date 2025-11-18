class Logic {

    int iCnt = 0;

    void DisplayFactors(int n) {

        for (iCnt = 1; iCnt <= n / 2; iCnt++) {
            if (n % iCnt == 0) {
                System.out.println(iCnt);
            }
        }

        System.out
                .println("Note : Here We Not include a Number iself as Factor");
    }
}

class Program3 
{
    public static void main(String[] args) {
        Logic lobj = new Logic();
        lobj.DisplayFactors(11);
    }
}