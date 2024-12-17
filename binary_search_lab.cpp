#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,i=1;
    char a[]="ZYXWVUTSRQPONMLKJIHGFEDCBA";
    int ul=25,ll=0,mid;
    printf("BINARY SEARCH IN AN ARRAY WITH ELEMENTS Z TO A.\n\n");
    char x;
    printf("ENTER THE ITEM TO SEARCH: ");
    scanf("%c",&x);
    mid=(ul+ll)/2;
    while(ul>=ll & a[mid]!=x)
    {
        mid=(ul+ll)/2;
        if(a[mid]==x)
            break;
        else if(x<a[mid])
        {
            ll=mid+1;
        }
        else {
            ul=mid-1;
        }
    }
    if(a[mid]==x)
        printf("\nITEM FOUND!\nPOSITION OF THIS ITEM '%c':%d\n",x,mid+1);
    else
        printf("\nTHIS ITEM IS NOT FOUND!\n");
    return 0;
}
