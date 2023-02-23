// Display name and length of each words in the string

import java.io.*;
import java.util.*;
import java.nio.charset.StandardCharsets;  

class Program333
{
    public static void main(String a[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the string : ");

        String str = sobj.nextLine();

        String Arr[] = str.split(" ");     // Arr[] is array of string

        System.out.println("Number of words are : "+Arr.length);
        
        System.out.println("Words from the string are : ");
        for(int i = 0;i < Arr.length;i++)
        {
            System.out.print(Arr[i] +" : " );
            System.out.println(Arr[i].length()+" words");
        }
    }
}