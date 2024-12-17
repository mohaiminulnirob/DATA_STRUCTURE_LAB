#include<bits/stdc++.h>
using namespace std;


void substring(char a[],int initial,int length)
{
    int i;
    char s[100]={'\0'};
    for(i=0;i<length;i++)
    {
        s[i]=a[initial-1];
        initial++;
    }
    printf("THE SUBSTRING: %s\n",s);
}

void inserting(char a[],int position,char b[])
{
    int len1=strlen(a),i,j;
    int len2=strlen(b);
    for(i=len1-1;i>=position-1;i--)
    {
        a[i+len2]=a[i];
    }
    for(i=position-1,j=0;j<len2;i++,j++)
    {
        a[i]=b[j];
    }
    printf("THE STRING AFTER INSERTION: %s\n",a);
}

void deletion(char a[],int position,int length)
{
    int i,j;
    int len=strlen(a);
    for(i=position-1,j=0;j<len-length;j++,i++)
    {
       a[i]=a[i+length];
       a[i+length]='\0';
    }
    printf("THE STRING AFTER deletion: %s\n",a);
}

int indexing(char a[],char pattern[])
{
    int i,j,s,r;
    s=strlen(a);
    r=strlen(pattern);
    int m=s-r+1;
    int x=-1,count=1;
    for(i=0;i<m;i++)
    {
      for(j=0;j<r;j++)
      {
          if(pattern[j]!=a[i+j])
            break;
          else if(j==r-1)
          {
              x=i;
              break;
          }
      }
      if(x>=0)
        break;
    }
    if(x>=0)
        printf("INDEX OF POSITION: %d\n",x+1);
    else printf("NOT FOUND!\n");
    return x+1;
}

void replacing(char a[],char b[],char c[])
{
  int position=indexing(a,b);
  int length=strlen(b);
  deletion(a,position,length);
  inserting(a,position,c);

}

int main()
{
    char a[100]={'\0'};
    printf("ENTER THE STRING FOR OPERATIONS: ");
    scanf("%s",a);
    substring(a,3,3);
    inserting(a,3,"hhhxyz");
    deletion(a,2,3);
    int x=indexing(a,"abc");
    replacing(a,"xyz","yyy");
return 0;
}
