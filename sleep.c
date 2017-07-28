#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
int m=0;
int main()
{
    printf("Enter Q to quit !\n");
    while(1)
    {
    m++;
    printf("%d\n",m);
    Sleep(1000);
    system("cls");
    }
}
