#include <stdio.h>

/*Note: switch case can use ranges of number 
        by using (1 ... 31) which represents 1 to 31,
        inclusive of both 1 and 31.
*/

//The input function
void input(int *day){
    printf("Input the day number: ");
    scanf("%d", day);
}

//Finding the month with no loops and conditional statements.
int monthFinder(int day){
    int month = 0;
    switch(day){
        case 1 ... 31:      
            month = 1;
            break;
        case 32 ... 59:      
            month = 2;
            break;
        case 60 ... 90:      
            month = 3;
            break;
        case 91 ... 120:     
            month = 4;
            break;
        case 121 ... 151:    
            month = 5;
            break;
        case 152 ... 181:    
            month = 6;
            break;
        case 182 ... 212:    
            month = 7;
            break;
        case 213 ... 243:    
            month = 8;
            break;
        case 244 ... 273:    
            month = 9;
            break;
        case 274 ... 304:    
            month = 10;
            break;
        case 305 ... 334:
            month = 11;
            break;
        case 335 ... 365:
            month = 12;
            break;
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
    
    //Finding the month with no loops and conditional statements.
    int month = monthFinder(day);
    
    //Printing the output
    output(month);
    
    return 0;
}    