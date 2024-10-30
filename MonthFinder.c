#include <stdio.h>

//The input function
void input(int *day){
    printf("Input the day number: ");
    scanf("%d", day);
}

//Finding the month
int monthFinder(int day){
    int m[] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int month = 0;
    for(int j = 0; j < 12; j++){
        month++;
        day = day - m[j];
        if(day <= 0){
            month = j+1;
            break;
        }    
    }
    return month;
}


//The output function
void output(int month){
    printf("\nThe month is: %d\n", month);
}    

int main(){
    //Taking Input
    int day = 0;
    input(&day);
    
    //Finding the month
    int month = monthFinder(day);
    
    //Printing the output
    output(month);
    
    return 0;
}    