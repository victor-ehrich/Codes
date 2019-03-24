#include <stdio.h>
#include <stdio.h>
int main()
{
    int a, b;
    
    scanf("%d",&a);
    scanf("%d",&b);
    
    if( b!=0){
        printf("%d %d %d %.2f ",a+b,a-b,a*b,(float)a/b);
        printf("%d",a%b);
    }
    else{
        printf("%d %d %d",a+b,a-b,a*b);
        printf("\nimpossivel dividir por zero");
    }
    
    return 0;
}
