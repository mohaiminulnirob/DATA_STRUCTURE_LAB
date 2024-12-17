#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the size of the array: ";
    cin>>n;
    int a[n];
    cout<<"Enter the elements of the array: ";
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<n-1;i++)
    {

        int min=a[i];
        int index=i;
        for(int j=i+1;j<n;j++)
        {
          if(min>a[j])
          {
            min=a[j];
            index=j;
          }
        }
        swap(a[index],a[i]);

    }
     cout<<"Sorted array: ";
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }

   return 0;
}
