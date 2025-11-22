import java.util.Scanner;

class Pattern
{
    void Print(int iRow , int iCol)
    {
        int i = 0, j = 0;

        for ( i = 1 ; i <= iRow; i++)
        {
            for ( j = 1 ; j <= iCol; j++)
            {
                if (i >= j )
                {
                    System.out.print(" *\t");
                }
                else
                {
                    System.out.print("\t");
                } 
            }
        System.out.println(); 
        }    
    }
}

class program30_1
{
    public static void main(String A [] ) 
    {
        int iValue1 = 0 , iValue2 = 0;

        Scanner sobj = new Scanner(System.in);

        System.out.print("Enter number of  Columns : ");
        iValue1 = sobj.nextInt();

        System.out.print("Enter number of  Columns : ");
        iValue2 = sobj.nextInt();

        Pattern pobj = new Pattern();
        pobj.Print(iValue1,iValue2);
        
        sobj.close();
    }
}