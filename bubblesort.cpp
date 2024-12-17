#include<bits/stdc++.h>
using namespace std;
int main()
{
    printf("***SORTING A STRING USING BUBBLESORT***\n\n");
    int x,i,j,comp=0,count=0,k;
    char a[100];
    printf("ENTER THE STRING WITHOUT WHITESPACE:");
    scanf("%s",a);
    x=strlen(a);
    for(i=0;i<x-1;i++)
    {
      printf("\nPASS %d:\n",i+1);
        for(j=0;j<x-i-1;j++)
        {
            comp++;
            if(a[j]>a[j+1])
            {
                count++;
                char temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
            for(k=0;k<x;k++)
                printf("%c ",a[k]);
            printf("\n");
        }
    }
    printf("\nSORTED STRING:");
    for(i=0;i<x;i++)
        printf("%c",a[i]);
    printf("\n\nNUMBER OF COMPARISONS:%d\n",comp);
    printf("\nNUMBER OF INTERCHANGES:%d\n",count);
 return 0;
}
