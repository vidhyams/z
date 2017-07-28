
#include <stdio.h>
void main()
{
    int n1, n2, minMultip;
    printf("Enter two positive integers: ");
    scanf("%d %d", &n1, &n2);
    minMultip = (n1>n2) ? n1 : n2;
    while(1)
    {
        if( minMultip%n1==0 && minMultip%n2==0 )
        {
            printf("The LCM of %d and %d is %d.", n1, n2,minMultip);
            break;
        }
        ++minMultip;
    }
}
