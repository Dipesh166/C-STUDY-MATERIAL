#include <stdio.h>
#include <conio.h>
int main()
{
    int M1[10][10],M2[10][10],m3[10][10]= {0},r1,c1,r2,c2,i,j,k;
    char ch;

    printf("enter row and column of the first and second matrix.\n");
    scanf("%d%d%d%d",&r1,&c1,&r2,&c2);
    if(c1!=r2)
    {
        printf("Matrix multiplication can't be performed.\n");
    }
    else
    {
        printf("Enter first Zero one matrix of order %d*%d.\n",r1,c1);
        for(i=0; i<r1; i++)
        {
            for(j=0; j<c1; j++)
            {
                scanf("%d",&M1[i][j]);
            }
        }
        printf("Enter second Zero one matrix of order %d*%d.\n",r2,c2);
        for(i=0; i<r2; i++)
        {
            for(j=0; j<c2; j++)
            {
                scanf("%d",&M2[i][j]);
            }
        }
        for(i=0; i<r1; i++)
        {
            for(j=0; j<c2; j++)
            {
                for(k=0; k<c1; k++)
                {
                    m3[i][j] = m3[i][j] || (M1[i][k] && M2[k][j]);
                }
            }
        }
    }
    printf("The final matrix after multiplication of two matrix is;\n");
    for(i=0; i<r1; i++)
    {
        for(j=0; j<c2; j++)
        {
            printf("%d\t",m3[i][j]);
        }
        printf("\n");
    }



       
    getch();
    return(0);
}
