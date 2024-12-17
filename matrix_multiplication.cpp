/*
  NAME: MOHAI MINUL ISLAM NIROB
  REG: 2021831049
*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int r1,c1,r2,c2,i,j,k;
    printf("***MULTIPLICATION OF TWO MATRICES A & B***\n");
    printf("\nNUMBER OF COLUMNS OF MATRIX A & NUMBER OF ROWS OF MATRIX B MUST BE EQUAL!\n");
    printf("\nENTER THE NUMBER OF ROWS AND COLUMNS OF MATRIX A: ");
    scanf("%d %d",&r1,&c1);
    printf("ENTER THE NUMBER OF ROWS AND COLUMNS OF MATRIX B: ");
    scanf("%d %d",&r2,&c2);
    printf("\n");
    int A[r1][c1];
    int B[r2][c2];
    int C[r1][c2];
    if(c1==r2)
    {
        for(i=0;i<r1;i++)
        {
          for(j=0;j<c1;j++)
            {
            printf("A[%d][%d]: ",i+1,j+1);
            scanf("\n%d",&A[i][j]);
            }
        }
        printf("\n");
        for(i=0;i<r2;i++)
        {
          for(j=0;j<c2;j++)
           {
            printf("B[%d][%d]: ",i+1,j+1);
            scanf("\n%d",&B[i][j]);
           }
        }
        printf("\nMATRIX C IS THE PRODUCT MATRIX BY MULTIPLICATION OF MATRIX A & MATRIX B.\n");
        printf("\nMATRIX C: ");
        for(i=0;i<r1;i++)
        {
            for(j=0;j<c2;j++)
            {
                int sum=0;
                for(k=0;k<c1;k++)
                {
                    sum+=A[i][k]*B[k][j];
                }
                C[i][j]=sum;
                printf("%d ",C[i][j]);
            }
            printf("\n\t  ");
        }
    }
    else {
        printf("ERROR!\nNUMBER OF COLUMNS OF MATRIX A & NUMBER OF ROWS OF MATRIX B MUST BE EQUAL!\n");
    }

   return 0;
}
