//upper lower triangle
#include <stdio.h>

int main()
{
  //insert value
  int ar[3][3],n,i,j,m;
  printf("Enter the number of rows and column: ");
  scanf("%d  %d", &n, &m);
  printf("Enter the elements of the matrix: \n");
  for(i=0;i<n;i++)
    {
      for(j=0;j<m;j++)
        {
          scanf("%d",&ar[i][j]);
        }
    }
  //upper
  printf("The upper triangle matrix is: \n");
  for(i=0;i<n;i++)
    {
      for(j=0;j<m;j++)
        {
          if(i<=j)
          {
            printf("%d\t",ar[i][j]);
          }
          else
            printf(" \t");
          if(j==m-1)
            printf("\n");
        }
    }
  //lower
  printf("The lower triangle matrix is: \n");
  for(i=0;i<n;i++)
    {
      for(j=0;j<m;j++)
        {
          if(i>=j)
          {
            printf("%d\t",ar[i][j]);
          }
          else
            printf(" \t");
          if(j==m-1)
            printf("\n");
        }
    }

  return 0;
}