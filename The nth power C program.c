#include<stdio.h>
int main (){
int x, y;
int power=1, expo;

printf("\n THE NTH POWER \n");
printf("\n Enter your base: ");
scanf("%d",&x);
printf(" Enter your exponent: ");
scanf("%d",&y);

expo = y;
if(x==0){
    printf("\n The base should not be zero \n");

}else if(y>0){
    while(y!=0){
        power = power*x;
        y--;
    }
    printf("\n %d to the power of %d: %d\n",x,expo,power);

}else if(y<0){
    y = y*1;
    while(y!=0){
        power = power*x;
        y++;
    }
    printf("\n %d to the power of %d: 1/%d\n",x,expo,power);

}else if(y==0){
    printf("\n %d to the power of 0: 1\n\n",x);

}else{
    printf("\n Unrecognized variables! \n");
    }

return 0;
}