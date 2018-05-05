import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class Solution {

    static int beautifulTriplets(int d, int[] a,int n) 
    {
        int count=0;
        for(int i=0;i<n-2;i++)
        {
            for(int j=i+1;j<n-1;j++)
            {
                if(a[j]-a[i]==d)
                {
                    for(int k=j+1;k<n;k++)
                    {
                        if(a[k]-a[j]==d)
                        {
                            count++;
                        }   
                    }
                }   
            }
        }
    return count;
    }

    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int n = in.nextInt();
        int d = in.nextInt();
        int[] arr = new int[n];
        for(int arr_i = 0; arr_i < n; arr_i++){
            arr[arr_i] = in.nextInt();
        }
        int result = beautifulTriplets(d, arr,n);
        System.out.println(result);
        in.close();
    }
}
