//////////////////////////////////////////////////////////////////////////
//
//          Required Header Files
//
//////////////////////////////////////////////////////////////////////////
#include <stdio.h>

//////////////////////////////////////////////////////////////////////////////
//
//  Function Name:  Display
//  Description:    To display from that charcter to a if it is small in reverse order
//                  To display from chracter to Z if it is Capital                  
//  Input:          Character
//  Output:         void
//  Author:         Omkar Balasaheb Deshmukh
//  Date:           28/11/2025
//
///////////////////////////////////////////////////////////////////////////////

void Display(char ch)
{
    if (ch >= 'a' && ch <= 'z')
    {
        while (ch>='a')
        {
            printf("%c\t",ch);
            ch--;
        }
        
    }
    else if (ch >= 'A' && ch <= 'Z')
    {
        while (ch<='Z')
        {
           printf("%c\t", ch);
           ch++;
        }   
    }
    else
    {
        printf("%c", ch);
    }
}

///////////////////////////////////////////////////////////////////////////////
//
//          Entry point function of the application
//
///////////////////////////////////////////////////////////////////////////////
int main()
{

    char cValue = '\0';

    printf("Enter the Charcter  \n");
    scanf("%c", &cValue);

    Display(cValue);

    return 0;
}
/*

Case 1:

Enter the Charcter
a
A

Case 2:
Enter the Charcter
2
2

Case 3:
Enter the Charcter
Z
z


*/