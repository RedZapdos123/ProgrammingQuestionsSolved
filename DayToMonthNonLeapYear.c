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
    char m[][255] = { "January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};
    switch(month){
    case 1:
        printf("\nThe month is: %s.\n", m[0]);
        break;
    case 2:
        printf("\nThe month is: %s.\n", m[1]);
        break;
    case 3:
        printf("\nThe month is: %s.\n", m[2]);
        break;    
    case 4:
        printf("\nThe month is: %s.\n", m[3]);
        break;
    case 5:
        printf("\nThe month is: %s.\n", m[4]);
        break;
    case 6:
        printf("\nThe month is: %s.\n", m[5]);
        break;
    case 7:
        printf("\nThe month is: %s.\n", m[6]);
        break;                    
    case 8:
        printf("\nThe month is: %s.\n", m[7]);
        break;
    case 9:
        printf("\nThe month is: %s.\n", m[8]);
        break;
    case 10:
        printf("\nThe month is: %s.\n", m[9]);
        break;
    case 11:
        printf("\nThe month is: %s.\n", m[10]);
        break;
    case 12:
        printf("\nThe month is: %s.\n", m[11]);
        break;
    default:
        printf("\nInvalid Input Given!\n");  
    }            
}    

int main(){
    //Taking Input
    int day = 0;
    input(&day);
    if(day < 1 || day > 365){
        printf("\nInvalid Input!\n");
        return 0;
    }
    
    //Finding the month
    int month = monthFinder(day);
    
    //Printing the output
    output(month);
    
    return 0;
}    