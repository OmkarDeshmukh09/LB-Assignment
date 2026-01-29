import java.util.Scanner;
import java.io.File;

class DirectoryDisplay
{
    public void DisplayPathAndFileName(String dirName)
    {
        File fobj = new File(dirName);

        if (fobj.exists() && fobj.isDirectory()) 
        {
            File files[] = fobj.listFiles();

            System.out.println("Regular Files in the Directory are: ");

            for(File f : files)
            {
                if (f.isFile()) 
                {
                    System.out.println(f.getName()+"||Absoulute Path:->" +f.getAbsolutePath());    
                }
            }
        }
        else
        {
            System.out.println("Invalid Directory name !");
        }
    }
}

public class program59_5
{
    public static void main(String A [] ) 
    {
        Scanner sobj = new Scanner(System.in);

        System.out.print("Enter Directory name : ");

        String name = sobj.nextLine();

        DirectoryDisplay dobj = new DirectoryDisplay();

        dobj.DisplayPathAndFileName(name);

        sobj.close();

    }    
}