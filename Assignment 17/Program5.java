
class Logic
{
    int iCnt = 0 ;
    int iMult = 0 ;

    void printTable(int num)
    {
        for(iCnt = 1 ; iCnt <= 10 ; iCnt ++)
        {
            iMult = iCnt * num;
            System.out.println(+iMult);
        }
    }
}

public class Program5 
{
    public static void main(String A [] ) 
    {
        Logic lobj = new Logic();
        lobj.printTable(5);    
    }
    
}
