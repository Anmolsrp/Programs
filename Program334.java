// Display name and length of each words in the string

import java.io.*;
import java.util.*;
import java.nio.charset.StandardCharsets;  

class Program334
{
    public static void main(String a[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the string : ");

        String str = sobj.nextLine();

        String Arr[] = str.split(" ");     // Arr[] is array of string

        String name;
        int Max = 0;
        int MaxIndex = 0;
        System.out.println("Number of words are : "+Arr.length);
        
        System.out.println("Words from the string are : ");
        for(int i = 0;i < Arr.length;i++)
        {
            if(Arr[i].length() > Max)
            {
                Max = Arr[i].length();
                MaxIndex = i;
                name = Arr[i];
            }   
        }
        System.out.println("The largest word in the string is of length "+Max+" and it is at index position "+MaxIndex);
    }
}