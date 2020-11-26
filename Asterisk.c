/*#include <stdio.h>
int main()
{
    for(int x=1;x<=5;x++)
    {
        for(int y=1;y<=x;y++)
        {
            printf("* ");
        }
        printf("\n");
    }
}

1
12
123
1234
12345
#include <stdio.h>
int main()
{
    for(int x=1;x<=5;x++)
    {
        for(int y=1;y<=x;y++)
        {
            printf("%d ",y);
        }
        printf("\n");
    }
}


1
2 3
4 5 6
7 8 9 10
#include <stdio.h>
int main()
{
    int k=1;
    for(int x=1;x<=4;x++)
    {
        for(int y=1;y<=x;y++)
        {
            printf("%d ",k++);
        }
        printf("\n");
    }
}

A
BC
DEF
GHIJ
KLMNO
#include<stdio.h>
int main()
{
    char ch='A';
    for(int x=1;x<=5;x++)
    {
        for(int y=1;y<=x;y++)
        {
            printf("%c ",ch++);
        }
        printf("\n");
    }
}


A
AB
ABC
ABCD
ABCDE
#include <stdio.h>
int main()
{
    char ch;
    for(int x=1;x<=5;x++)
    {
        ch='A';
        for(int y=1;y<=x;y++)
        {
            printf("%c ",ch++);
        }
        printf("\n");
    }
}


A
BB
CCC
DDDD
EEEEE
#include <stdio.h>
int main()
{
    char ch='A';
    for(int x=1;x<=5;x++)
    {
        for(int y=1;y<=x;y++)
        {
            printf("%c ",ch);
        }
        ch++;
        printf("\n");
    }
}


    1
   12
  123
 1234
12345
#include <stdio.h>
int main()
{
    int k;
    for(int x=1;x<=5;x++)
    {
        k=1;
        for(int y=1;y<=5;y++)
        {
            if(x+y>=6)
            {
                printf("%d ",k++);
            }
            else
            {
                printf("  ");
            }
            
        }
        printf("\n");
    }
}*/


