import java.util.Scanner;
import java.io.File;

class FileIOX
{
    public void CheckFileType(String dirName)
    {
        int iCnt = 0 ;
        long SmallestSize = Long.MAX_VALUE;

        File fobj = new File(dirName);

        if (fobj.exists() && fobj.isDirectory()) 
        {
            File files[] =fobj.listFiles();

            for(iCnt = 0;iCnt < files.length; iCnt++)
            {
                if (files[iCnt].isFile()) 
                {   
                    if(files[iCnt].getName() != SmallestSize)
                        {
                            SmallestSize = files[iCnt].length();
                        }    
                }
            }
            System.out.println("The Smallest Size is : "+SmallestSize+" Bytes");
        }
        else
        {
            System.out.println("Invalid Directory name !");
        }
    }
}

public class program60_4incomplete
{
    public static void main(String A [] ) 
    {
        Scanner sobj = new Scanner(System.in);

        System.out.print("Enter Directory name : ");

        String name = sobj.nextLine();

        FileIOX dobj = new FileIOX();

        dobj.CheckFileType(name);

        sobj.close();

    }    
}