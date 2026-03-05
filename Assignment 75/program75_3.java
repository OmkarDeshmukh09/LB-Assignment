import java.util.Scanner;

class program75_2
{
    public static void main(String A[]) 
    {
        int CurStock = 0 ;
        int RequestedStock = 0 ;
        int RemStock = 0 ;
        
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter Current Stock of warehouse : ");
        CurStock = sobj.nextInt();

        RemStock = CurStock;
        
        System.out.println("Enter number of quantity requested : ");
        RequestedStock = sobj.nextInt();

//      Validation

        if ( CurStock < 0 || RequestedStock < 0 )
        {
            System.out.println("Invalid Input");    
            return;
        }

//      Conditions
        if (RequestedStock > RemStock ) 
        {
            System.out.println("Order Failed: Insufficent Stock");
            return;
        }
        else
        {
            RemStock = CurStock - RequestedStock;
            System.out.println("Order Processed Successfully.");
            System.out.println("Remaining Stock : "+RemStock);
        }
        
        
        if (RemStock <= 5 )
        {
            System.out.println("Low Stock Alert !");
        }

        sobj.close();
    }
}
