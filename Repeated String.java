import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class Solution {

    static long repeatedString(String s, long n) 
    {
        
        long count=0;
        long l=s.length();
        long a=n/l;
        long b=n%l;
        long c=0,ans;
        for(int i=0;i<l;i++)
        {
            if(s.charAt(i)=='a')
            {
                count++;
            }
            if(i+1==b)
            {
                c=count;
            }
        }
        ans=(a*count)+c;
        return ans;
    }

    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        String s = in.next();
        long n = in.nextLong();
        long result = repeatedString(s, n);
        System.out.println(result);
        in.close();
    }
}
