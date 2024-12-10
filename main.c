#include<stdio.h>
int main()
{
    int first[10][10], second [10][10], result [10][10], row1, col1, row2, col2, i, j,k, sum = 0;
    printf("Enter the first matrix number :");
    scanf("%d %d", & row1, &col1);

    printf("Enter the Second matrix number :");
    scanf("%d %d", & row2, &col2);

    while (col1 != row2)
    {
        printf("Error! column of first matrix not equal Row of second matrix \n");

        printf("Enter the first matrix number :");
        scanf("%d %d", & row1, &col1);

        printf("Enter the Second matrix number :");
        scanf("%d %d", & row2, &col2);
    }

    // Taking input of first matrix
    printf("Enter the first matrix: \n");
    for (i=0 ; i < row1 ; i++)
    {
        for (j=0; j<col1; j++)
        {
            printf(" First [%d][%d] =", i,j);
            scanf("%d", &first[i][j]);
        }
    }

    // Taking input of second matrix

    printf("Enter the second matrix: \n");
    for (i=0 ; i<row2; i++)
    {

        for (j=0; j<col2; j++)
        {
            printf("Second [%d][%d] =", i,j);
            scanf("%d", &second[i][j]);
        }
    }

// Printing the first matrix

    printf("\n first matrix: \n");

    for (i=0 ; i < row1 ; i++)
    {
        for (j=0; j<col1; j++)
        {
            printf("first [%d][%d] =", i,j);
            printf("%d \n",first[i][j]);
        }
    }


// Printing the Second matrix
    printf("\n second matrix: \n");


    for (i=0 ; i<row2; i++)
    {
        for (j=0; j<col2; j++)
        {
            printf("Second [%d][%d] =", i,j);
            printf("%d \n", second[i][j]);
        }
    }
// Multiplying
    for (i=0 ; i<row1; i++)
    {
        for (j=0; j<col2; j++)
        {
            for (k=0 ; k < col1; k++)
            {
                sum = sum +  first[i][k]*second[k][j];

            }
            result[i][j]= sum;
            sum=0;
        }
    }


    printf("\n Result matrix: \n");

    for (i=0 ; i<row1; i++)
    {
        printf("\t");
        for (j=0; j<col2; j++)
        {
            printf("%d", result[i][j]);
            printf("\n");
        }
    }

}

