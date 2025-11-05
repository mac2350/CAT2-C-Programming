#include <stdio.h>
/*
Name: Macevady Mac Nganga
REGISTRATION NUMBER: CT100/G/26121/25
DESCRIPTION: Program that declares a 2D array of score and prints the output.
*/

int main()
{
    int score[2][4]={{65,92,35,70},{84,72,59,67}};

    for(int i=0;i<2;i++)
    {
        for(int j=0;j<4;j++)
        {
            printf("%d",score[i][j]);
            printf("\t");
        }
        
            
        printf("\n");
    }
        
    
    return 0;

}