import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class Solution {

    static int serviceLane(int a,int b, int[] ar) 
    {
        int min=ar[a];
        for(int i=a+1;i<=b;i++)
        {
            if(ar[i]<min)
            {
                min=ar[i];
            }
        }
        return min;
    }

    public static void main(String[] args) 
    {
        Scanner in = new Scanner(System.in);
        int n = in.nextInt();
        int t = in.nextInt();
        int[] width = new int[n];
        for(int width_i = 0; width_i < n; width_i++){
            width[width_i] = in.nextInt();
        }
        int[][] cases = new int[t][2];
        for(int cases_i = 0; cases_i < t; cases_i++){
            for(int cases_j = 0; cases_j < 2; cases_j++){
                cases[cases_i][cases_j] = in.nextInt();
            }
        }
        
        for(int i=0;i<t;i++)
        {
            int ans=0 ;
            ans=serviceLane(cases[i][0],cases[i][1],width);
            System.out.println(ans);
        }
        

        in.close();
    }
}
