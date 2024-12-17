#include<bits/stdc++.h>
using namespace std;
void quicksort();
int partition();
int partition(int a[],int l,int h)
{
    int pivot=a[l];
    int i=l,j=h;
    while(i<j)
    {
        while(a[i]<=pivot)
        {
            i++;
        }
        while(a[j]>pivot)
        {
            j--;
        }
        if(i<j)
        {
            swap(a[i],a[j]);
        }
    }
    swap(a[l],a[j]);
    return j;
}


void quicksort(int a[],int l,int h)
{
    int j;
    if(l<h)
    {
      j=partition(a,l,h);
      quicksort(a,l,j-1);
      quicksort(a,j+1,h);

    }
}

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
    int l,h;
    l=0;
    h=n-1;
    quicksort(a,l,h);
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }


}
