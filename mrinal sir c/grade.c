#include<stdio.h>
int main(){
    float mth,eng,phy,chem,cs,perc;
    printf("Enter the marks of Maths English Physics Chemistry ComputerScience:");
    scanf("%f %f %f %f %f",&mth,&eng,&phy,&chem,&cs);
    perc=(mth+eng+phy+chem+cs)/500*100;

    if(perc>=90){
    printf("Congrats you got :A\n");
    }
    else if(perc>=80 && perc<=89){
    printf("B\n");
    }
    else if(perc>=70 && perc<=79){
    printf("C\n");
    }
    else if(perc>=60 && perc<=69){
    printf("D\n");
    }
    else if(perc<60 && perc>34)
    {
    printf("E\n");
    }
    else
    printf("FAIL:BETTER LUCK NEXT TIME \n:");
    return 0;
}