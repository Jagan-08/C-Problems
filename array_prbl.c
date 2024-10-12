#include<stdio.h>

int main()
{
   int arr[]={1,2,4,2,0,0,0,0,1,1,1,5,67,34,2,1,0,6,4,3,2,2,1,2,1,2,3,1,32,1,2,31,2,1,3,4,1,74,8,0,7,656,1,8,8};
   int N=sizeof(arr)/sizeof(arr[0]);
   int i,c0=0,c1=0,c2=0,first15=0,sec15=0,thd15=0,first30=0,sec30=0,thd30=0,first45=0,sec45=0,thd45=0,Zero,Ondru,rendu;
   for(i=0;i<N;i++)
   {
   
        if(i>=0 && i<15)
        {
             if(arr[i]==0)
             {
                first15++;
                c0++;
             }
             else if(arr[i]==1)
             {
                sec15++;
                c1++;
             }
             else if(arr[i]==2)
             {
                thd15++;
                c2++;
             }
         
        }
        else if(i>14 && i<30)
        {
           if(arr[i]==0)
             {
                 first30++;
                c0++;
             }
             else if(arr[i]==1)
             {
                sec30++;
                c1++;
             }
             else if(arr[i]==2)
             {
                thd30++;
                c2++;
             }
        }
        else
        {
           if(arr[i]==0)
             {
                first45++;
                c0++;
             }
             else if(arr[i]==1)
             {
                sec45++;
                c1++;
             }
             else if(arr[i]==2)
             {
                thd45++;
                c2++;
             }
        }    
    }
    printf("-----------------------------------------------------------\n");
    printf("\nThe max zeros in : %s", first15>first30? (first15>first45? "first15":"first45"): (first30>first45? "first30":"first45"));
    printf("\nThe max ones in : %s", sec15>sec30? (sec15>sec45?"sec15":"sec45"): (sec30>sec45?"sec30":"sec45"));
    printf("\nThe max Twos in : %s", thd15>thd30? (thd15>thd45?"thd15":"thd45"): (thd30>thd45?"thd30":"thd45"));
    
    printf("\n-----------------------\n");
    printf(" Oth %d\n 1st %d\n 2nd %d",c0,c1,c2);
    printf("\n----------------------");
    
   return 0;
}