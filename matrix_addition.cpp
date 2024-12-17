/*
  NAME: MOHAI MINUL ISLAM NIROB
  REG: 2021831049
*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int r1,c1,i,j,r,c;
    printf("***SUM OF TWO MATRICES A & B***\n");
    printf("\nNUMBER OF COLUMNS AND ROWS OF MATRIX A & MATRIX B MUST BE EQUAL!\n");
    printf("\nENTER THE NUMBER OF ROWS AND COLUMNS OF MATRIX A: ");
    scanf("%d %d",&r,&c);
    printf("\nENTER THE NUMBER OF ROWS AND COLUMNS OF MATRIX B: ");
    scanf("%d %d",&r1,&c1);
    printf("\n");
    int A[r][c],B[r][c],C[r][c];
    if(r==r1 && c==c1){
      for(i=0;i<r;i++)
        {
          for(j=0;j<c;j++)
            {
            printf("A[%d][%d]: ",i+1,j+1);
            scanf("\n%d",&A[i][j]);
            }
        }
        printf("\n");
        for(i=0;i<r;i++)
        {
          for(j=0;j<c;j++)
           {
            printf("B[%d][%d]: ",i+1,j+1);
            scanf("\n%d",&B[i][j]);
           }
        }
        printf("\nMATRIX C IS THE SUM MATRIX OF MATRIX A & MATRIX B.\n");
        printf("\nMATRIX C: ");
        for(i=0;i<r;i++)
        {
            for(j=0;j<c;j++)
            {
                C[i][j]=A[i][j]+B[i][j];
                printf("%2d ",C[i][j]);
            }
            printf("\n\t  ");
        }
    }
    else
        printf("MATRIX ADDITION IS NOT POSSIBLE!\n");
    return 0;
}
