import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class Solution {

    static void cutTheSticks(int[] arr,int n) 
    {
        int count;
        do
      {
        count=0;
        int min=1000;
        for(int i=0;i<n;i++)
        {
            if(arr[i]<min&&arr[i]!=0)
            {
                min=arr[i];
            }
        }
        for(int i=0;i<n;i++)
        {
            if(arr[i]!=0)
            {
                count++;
                arr[i]-=min;
            }
        }
        if(count!=0)
        {
            System.out.println(count);   
        }
      }while(count!=0);
    }

	public static void main(String[] args) 
    {
        Scanner in = new Scanner(System.in);
        int n = in.nextInt();
        int[] arr = new int[n];
        for(int arr_i = 0; arr_i < n; arr_i++){
            arr[arr_i] = in.nextInt();
        }
        cutTheSticks(arr,n);
        in.close();
    }
}
