import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;
import java.math.BigInteger;

public class Solution {

    static void extraLongFactorials(int n) 
    {
        BigInteger B=BigInteger.valueOf(1);
        for(int i=2;i<=n;i++)
        {
            B=B.multiply(BigInteger.valueOf(i));
        }
        System.out.println(B);
    }

    public static void main(String[] args) 
    {
        Scanner in = new Scanner(System.in);
        int n = in.nextInt();
        extraLongFactorials(n);
        in.close();
    }
}
