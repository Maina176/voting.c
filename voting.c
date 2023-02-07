//Check if one can vote
#include<stdio.h>
int main()
{
int  citizen,age;
printf("Enter age in years and if citizen");
scanf("d%d",&age,& citizen);
if(age>=18&citizen){
printf("you can vote");
}
else{
printf("can't vote");
}
return 0;
}