#include<stdio.h>
int main(){
    float a, b, c;
    printf("Enter the two number\n");
    scanf("%f%f",&a,&b);
    c=(a/b);
    if(c==1){
        printf("there is no remainder and the answer is %.2f\n",c);
    }
    else
        printf("the remainder is %.2f\n",c);





return 0;
}
