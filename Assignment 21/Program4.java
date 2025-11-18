class Logic {

    int iCnt = 0;
    int iCountOfFactors = 0;

    void DisplayFactors(int n) {

        for (iCnt = 1; iCnt <= n / 2; iCnt++) {
            if (n % iCnt == 0) {
                iCountOfFactors++;
            }
        }
        System.out.println("Total number of factors is  " + iCountOfFactors);
        System.out
                .println("Note : Here We Not include a Number iself as Factor");
    }
}

class Program4 {
    public static void main(String[] args) {
        Logic lobj = new Logic();
        lobj.DisplayFactors(20);
    }
}