// Display name and length of each words in the string

import java.io.*;
import java.util.*;
import java.nio.charset.StandardCharsets;  

class Program335
{
    public static void main(String a[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the string : ");

        String str = sobj.nextLine();

        String Arr[] = str.split(" ");     // Arr[] is array of string

        int iCount = 0;
        
        System.out.println("Words from the string are : ");
        for(int i = 0;i < Arr.length;i++)
        {
            if(Arr[i].equals("Demo"))
            {
                iCount++;
            }   
        }
        System.out.println("Frequency of Demo word is : "+iCount);
    }
}