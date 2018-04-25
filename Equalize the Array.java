import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class Solution {

    static int equalizeArray(int[] arr,int n) 
    {
        Arrays.sort(arr);
        int count=1;
        int max=1;
        for(int i=0;i<n-1;i++)
        {
            if(arr[i+1]==arr[i])
            {
                count++;
                if(count>max)
                {
                    max=count;   
                }
            }
            else
            {   
                count=1;
            }
                
        }
        return n-max;
        
    }

    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int n = in.nextInt();
        int[] arr = new int[n];
        for(int arr_i = 0; arr_i < n; arr_i++){
            arr[arr_i] = in.nextInt();
        }
        int result = equalizeArray(arr,n);
        System.out.println(result);
        in.close();
    }
}
