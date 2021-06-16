#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void main()
{
    char grid[3][3];
    int i,j,k;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            grid[i][j]='.';
        }
    }
    int r,c;
    for(k=1;k<=9;k++)
    {
        char turn;
        printf("Enter the Coordinates And the symbol : X or 0 \n");
        scanf("%d %d %c",&i,&j, &turn);
        grid[i-1][j-1]= turn;
        for(i=0;i<3;i++)
        {
            for(j=0;j<3;j++)
            {
            printf("%c ",grid[i][j]);
            }
            printf("\n");
        }
        for(r=0;r<3;r++)
        {
            if( grid[r][0]==grid[r][1] && grid[r][1] == grid[r][2])
            {
                if(grid[r][0]=='X')
                {
                    printf("X won!!"); return 0;
                }
                if(grid[r][0]=='0') { printf("1 0 won!!! "); return 0; }
            
            }
        }
        for(c=0;c<3;c++)
        {
            if(grid[0][c]==grid[1][c] && grid[1][c] == grid[2][c])
            {
                if(grid[0][c]=='X')
                {
                    printf("X won!!"); return 0;
                }
                if(grid[0][c]=='0') { printf(" 0 won!!! "); return 0; }
            }
        }
        if(grid[0][0]== grid[1][1] &&  grid[1][1]==grid[2][2])
            {
                if(grid[0][0]=='X')
                {
                    printf("X won!!"); return 0;
                }
                if(grid[0][0]=='0') { printf(" 0 won!!! "); return 0;}
            }
        if(grid[0][2]==grid[1][1] && grid[1][1]==grid[2][0])
            {
                if(grid[0][2]=='X')
                {
                    printf("X won!!"); return 0;
                }
                if(grid[0][2]=='0') { printf(" 0 won!!! "); return 0; }
            }
    }
    getchar();

}