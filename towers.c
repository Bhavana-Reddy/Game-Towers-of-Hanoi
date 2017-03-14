#include<stdio.h>
#include<math.h>
void towers(int,char,char,char);
int main()
{

    int num;
    printf("enter number of disks : ");
    scanf("%d",&num);
    printf("\nthe sequence of moves of towers of hanoi are : ");
    towers(num,'A','C','B');
    printf("\nnumber of moves=%.0lf",pow(2,num)-1);
    return(0);
}
void towers(int num,char frompeg,char topeg,char auxpeg)
{
    if(num==1)
    {
    printf("\nmove disk1 from peg %c to peg %c",frompeg,topeg);
    return;
    }
     towers(num-1,frompeg,auxpeg,topeg);
printf("\nmove disk%d from peg %c to peg %c",num ,frompeg,topeg);
towers(num-1,auxpeg,topeg,frompeg);
}
