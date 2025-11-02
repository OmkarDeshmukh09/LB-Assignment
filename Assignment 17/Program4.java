
class Logic 
{
    void findMin(int iNo1, int iNo2 ,int iNo3)
    {
        if (iNo1 < iNo2 && iNo1 < iNo3)  
        {
            System.out.println("The Minium Number is : "+iNo1);    
        }
        else if(iNo2 < iNo1 && iNo2 < iNo3)
        {
            System.out.println("The Minium Number is : "+iNo2);    
        }
        else if(iNo3 < iNo1 && iNo3 < iNo2)
        {
            System.out.println("The Minium Number is : "+iNo3);    
        }
        else
        {

        }
    }
}

class Program4 
{
    public static void main(String A[]) 
    {
        Logic obj = new Logic();
        obj.findMin(3, 7, 2);
            
    }    
}
