#include<stdio.h>
int main()
{
    int num,count=0;
    int temp;
    printf("Enter a number: ");
    scanf("%d",&num);

    temp = num;
    while (temp!= 0) {
        temp = temp/10;
        count++;
    }
    printf("Total number of digits : %d\n", count);
    return 0;
}