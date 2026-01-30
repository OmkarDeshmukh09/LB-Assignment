import java.util.Scanner;
import java.io.File;

class FileIOX
{
    public void CountSize(String dirName)
    {
        int iCnt = 0 ;
        long DictTotalSize = 0 ;

        File fobj = new File(dirName);

        if (fobj.exists() && fobj.isDirectory()) 
        {
            File files[] =fobj.listFiles();

            System.out.println("Files in the Directory are: ");

            for(iCnt = 0;iCnt < files.length; iCnt++)
            {
                if (files[iCnt].isFile()) 
                {       
                    DictTotalSize = DictTotalSize + files[iCnt].length();
                }
            }
            System.out.println("The Total Directory Size is : "+DictTotalSize+" Bytes");
        }
        else
        {
            System.out.println("Invalid Directory name !");
        }
    }
}

public class program60_1 
{
    public static void main(String A [] ) 
    {
        Scanner sobj = new Scanner(System.in);

        System.out.print("Enter Directory name : ");

        String name = sobj.nextLine();

        FileIOX dobj = new FileIOX();

        dobj.CountSize(name);

        sobj.close();

    }    
}