import java.util.Scanner;
import java.io.File;

class DirectoryDisplay
{
    public void CountFileOrDirecotry(String dirName)
    {
        int iCnt = 0 ;
        int TotalFiles = 0 ;
        int TotalDir = 0 ;

        File fobj = new File(dirName);

        if (fobj.exists() && fobj.isDirectory()) 
        {
            File files[] =fobj.listFiles();

            System.out.println("Regular Files in the Directory are: ");

            for(iCnt = 0;iCnt < files.length; iCnt++)
            {
                if (files[iCnt].isDirectory()) 
                {       
                    TotalDir++;
                }
                if (files[iCnt].isFile()) 
                {
                    TotalFiles++;
                }
            }
            System.out.println("Total Files in Directory is : "+ TotalFiles);
            System.out.println("Total Sub-Directory in Directory is : "+ TotalDir);
        }
        else
        {
            System.out.println("Invalid Directory name !");
        }
    }
}

public class program59_3
{
    public static void main(String A [] ) 
    {
        Scanner sobj = new Scanner(System.in);

        System.out.print("Enter Directory name : ");

        String name = sobj.nextLine();

        DirectoryDisplay dobj = new DirectoryDisplay();

        dobj.CountFileOrDirecotry(name);

        sobj.close();

    }    
}