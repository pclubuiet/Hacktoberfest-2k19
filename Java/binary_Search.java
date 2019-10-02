/* package whatever; // don't place package name! */

import java.util.*;
import java.lang.*;
import java.io.*;


class SearchingAlgorithm
{
	public static void binary_search(int search,int arr[]){
		int size=arr.length;
	int begin=0,end=size,mid=0;
    while(true){
     mid=(begin+end)/2;
     if(begin>end)
     {
     	System.out.println("not found");
     	break;
    }
    else if(arr[mid]==search){
	System.out.println("found at "+(mid+1));
	break;
    }
    else if(arr[mid]>search){
       	end=mid-1;
    }
     else if(arr[mid]<search){
        	begin=mid+1;
    }
    }
}
	public static void main (String[] args) throws java.lang.Exception
	{
	int	arr[]={-4,0,2,3,5};
		InputStreamReader r=new InputStreamReader(System.in);
		BufferedReader br=new BufferedReader(r);
		 System.out.println("enter element which you want to search");
		 
		 //element to be searched
		 int search=Integer.parseInt(br.readLine());
		 
		 binary_search(search,arr);
	}
}