#include <stdio.h>

int main() {
int a ,c;
float b=1;
printf("enter the number whose factorial is to be found");
scanf("%d",&a);
for(int n=1;n<=a;n++){
b=b*n;

}
printf("factorial of given number is ");
printf("%.0f",b);
}
