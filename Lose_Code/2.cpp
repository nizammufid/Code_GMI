#include<stdio.h>

void Name(int pos);
int Y;
int main()
{
    printf("Enter Value of Y\n");

    scanf("%d",&Y);

    Name(Y);

    return 0;


}

void Name(int pos)
{
    if(pos == 0){
        printf("Muhammad Nizamuddin Mufid\n");
    }else
    {
        printf("Fuck You");
    }
    return;


}
