#include <stdio.h>
#include <math.h>
int main() {
    int n;
    printf("Enter the value of n");
    scanf("%d",&n);
    printf("Enter base of the number\n");
    int b;
    scanf("%d",&b);
    long int dc=0,p=1;
    for(;n;)
    {
    dc+=(n%b)*p;
    p=p*10;
    n=n/b;
    }
    
    printf("value=%d",dc);
    return 0;
}
