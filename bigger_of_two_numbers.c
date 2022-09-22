#include <stdio.h>

int main(){
    int num1, num2, bigger;

    printf("Enter two numbers seperated by a space: \n");
    scanf("%d %d", &num1, &num2);

    if (num1 > num2){
        bigger = num1;
    } else{
        bigger = num2;
    }

    printf("The bigger of the two number is: %d", bigger);
}

