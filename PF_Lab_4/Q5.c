#include<stdio.h>
int main(){
float math,eng ,phy,chem,urdu,marks;
printf("Enter number of each subject\n");
printf("enter Math marks\n");
scanf("%f",&math);
printf("enter Eng marks\n");
scanf("%f",&eng);
printf("enter Phy marks\n");
scanf("%f",&phy);
printf("enter Chem marks\n");
scanf("%f",&chem);
printf("enter Urdu marks\n");
scanf("%f",&urdu);
if (math>100 ||math<0 ||eng>100 ||eng<0||phy>100 ||phy<0 ||chem>100 ||chem<0|| urdu>100||urdu<0)
{
    printf("Enter your right numbers");
    return 0;
}
else if (math<40 ||phy<40 ||eng<40 ||urdu<40||chem<40)
{
    printf("You are fail");
}

else{
    marks=((math+phy+eng+chem+urdu)*100)/500;
if (marks>=85 && marks<=100)
{
    printf("You achived Grade 'A' on %.2f",marks);
}else if (marks>=70 && marks<=84)
{
    printf("You achived Grade 'B' on %.2f",marks);
}else if (marks>=55 && marks<=69)
{
    printf("You achived Grade 'B' on %.2f",marks);
}else if (marks>=40 && marks<=54)
{
    printf("You achived Grade 'B' on %.2f",marks);
}else{
    printf("You achived grade 'F' on %.2f",marks);
}
}
    return 0;
}