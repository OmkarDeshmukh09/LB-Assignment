import java.util.Scanner;
import java.io.File;

class DirectoryDisplay
{
    public void DisplayFile(String dirName)
    {
        int iCnt = 0 ;

        File fobj = new File(dirName);

        if (fobj.exists() && fobj.isDirectory()) 
        {
            File files[] =fobj.listFiles();

            System.out.println("Files in the Directory are: ");

            for(iCnt = 0;iCnt < files.length; iCnt++)
            {
                if (files[iCnt].isFile()) 
                {       
                    System.out.println(files[iCnt].getName());
                }
            }
        }
        else
        {
            System.out.println("Invalid Directory name !");
        }
    }
}

public class program59_1 
{
    public static void main(String A [] ) 
    {
        Scanner sobj = new Scanner(System.in);

        System.out.print("Enter Directory name : ");

        String name = sobj.nextLine();

        DirectoryDisplay dobj = new DirectoryDisplay();

        dobj.DisplayFile(name);

        sobj.close();

    }    
}