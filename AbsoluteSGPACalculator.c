#include <stdio.h>

//Note: we are calculating the absolute SGPA here.

void inputCourse(char sub[]){
    //Taking Input
    printf("Enter the course code: ");
    scanf("%s", sub);
}

int inputMarks(){
    int marks = 0;
    printf("Enter the marks obtained: ");
    scanf("%d", &marks);
    return marks;
}

int inputCredits(){
    int credits = 0;
    printf("Enter the course credits number: ");
    scanf("%d", &credits);
    return credits;
}

double calculateSGPA(int n, int marks[], int credits[]){
    double SGPA = 0.0;
    int csum = 0;
    
    //Calculating the total credits
    for(int k = 0; k < n; k++){
        csum += credits[k];
    }
    
    //Calculating the weighted sum
    for(int j = 0; j < n; j++){
        SGPA += marks[j]*credits[j];
    }
    SGPA = (SGPA/10.0)/(double)(csum);
    return SGPA;    
}

void outputSGPA(double SGPA){    
    //Printing the output
    printf("Your SGPA is: %.2lf.\n", SGPA);
}

void reportCard(int n, char sub[][255], int marks[], int credits[]){
    printf("\nCourse  |  Credits  |  Marks\n");
    for(int k = 0; k < n; k++){
        printf("\n%s  |  %d  |  %d\n", sub[k], credits[k], marks[k]);
    }
}

int main(){
    
    //Taking the input
    int n = 0;
    do{
        printf("Enter the number of courses: ");
        scanf("%d", &n);
        
        //Warning message
        if(n < 1){
            printf("\nInvalid Input!, Input again\n\n");
        }    
    }while(n < 1);
    
    char sub[n][255];
    int marks[n];
    int credits[n];
    
    int l = n;
    while(l != 0){
        inputCourse(sub[l-1]);
        marks[l-1] = inputMarks();
        credits[l-1] = inputCredits();
        if(marks[l-1] > 100 || marks[l-1] < 0 || credits[l-1] < 1){
            printf("\nInvalid Input!, Input again\n");
            return 0;
        }    
        printf("\n");
        l--;
    }
    
    //Calculating the absolute SGPA
    double SGPA = calculateSGPA(n, marks, credits);
    
    //Printing the Report Card
    reportCard(n, sub, marks, credits);
    
    printf("\n");
    
    //Printing the absolute SGPA
    outputSGPA(SGPA);
    
    return 0;
}