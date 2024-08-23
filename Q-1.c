#include <stdio.h>

int main() {
int size;
printf("enter a size:");
scanf("%d",&size);
int array[size];
for(int i = 0; i < size;i++)
{
    printf("array[%d] = ",i);
    scanf("%d",&array[i]);
}
int a = 0;
for(int i = 0;i < size;i++)
{
    if(a < array[i])
    {
        a = array[i];
        printf("%d\n",a);
    }
}

    return 0;
}