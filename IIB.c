#include <stdio.h>
void ques1(){
    int a, b, c;
    //Taking Input
    printf("Input three numbers: ");
    scanf("%d%d%d", &a, &b, &c);
    if(a > b && a > c){
        printf("%d is the largest.", a);
    }    
    else if(b > a && b > c){
        printf("%d is the largest.\n", b);
    }    
    else if(c > a && c > b){
        printf("%d is the largest.\n", c);
    }    
    else{
        printf("All are equal.");
    }
}

void ques2(){
    int a;
    //Taking Input
    printf("Input a number: ");
    scanf("%d", &a);
    if(a > 0)
        printf("It's a positive number.\n");
    else if(a < 0)
        printf("It's a negative number.\n");
    else
        printf("It's zero.\n");
}

void ques3(){
    int salary, gross;
    double tax = 0;
    //Taking Input
    printf("Input your basic salary\n");
    getchar();
    scanf("%d", &salary);
    if(salary > 20000){
        gross = salary*0.3+salary*0.95+salary;
        printf("%d is the gross salary.\n",gross);
        
    }    
    else if(salary <= 20000){
        gross = salary*0.25+salary*0.9+salary;
        printf("%d is the gross salary.\n", gross);
    }    
    else if(salary <= 10000){
        gross = salary*0.2+salary*0.8+salary;
        printf("%d is the gross salary.\n", gross);
    }
}

void ques4(){
    int a, b, c;
    //Taking Input
    printf("Input the three numbers: ");
    scanf("%d%d%d", &a, &b, &c);
    if((a+b) > c && (b+c) > a && (a+c) > b && a != 0 && b != 0 && c != 0)
        printf("The side values are of a triangle.\n");
    else
        printf("Not the side values of a triangle.\n");
}

void ques5_1(){
    double Phy = 0, Chem = 0, Math = 0, Bio = 0, Com = 0;
    //Taking Input
    printf("Input the marks of the subjects in order Physics, Chemistry, Mathematics, Biology and Computer:\n");
    getchar();
    scanf("%lf%lf%lf%lf%lf", &Phy, &Chem, &Math, &Bio, &Com);
    double per = ((double)(Phy+Chem+Math+Bio+Com)/(double)5.0);
    if(per >= 90)
        printf("Grade A.\n");
    else if(per >= 80)
        printf("Grade B.\n");
    else if(per >= 70)
        printf("Grade C.\n");
    else if(per >= 60)
        printf("Grade D.\n");
    else if(per >= 40)
        printf("Grade E.\n");
    else if(per < 40)
        printf("Grade F.\n");                    
}    

void ques5_2(){
    int a, b, c;
    //Taking Input
    printf("Input the three angles: ");
    scanf("%d%d%d", &a, &b, &c);
    if((a+b+c) == 180 && a != 0 && b != 0 && c != 0)
        printf("The side values are of a triangle.\n");
    else
        printf("Not the side values of a triangle.\n");
}

void ques6(){
    char c;
    //Taking Input
    printf("Input a letter: ");
    getchar();
    c = getchar();
    if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
        printf("It's is a vowel.\n");
    else
        printf("It is a consonant.\n");
}

void ques7(){
    int salary;
    double tax = 0;
    //Taking Input
    printf("Input your salary\n");
    getchar();
    scanf("%d", &salary);
    if(salary > 500001){
        printf("Your tax bracket is 30\% tax.\n");
        tax = salary*0.3;
    }    
    else if(salary > 300001){
        printf("Your tax bracket is 20\% tax.\n");
        tax = salary*0.2;
    }    
    else if(salary > 150001){
        printf("Your tax bracket is 10\% tax.\n");
        tax = salary*0.1;
    }    
    else if(salary < 150000){
        printf("No taxes for you.\n");
        tax = salary*0;
    }
    printf("The tax is: %lf\n", tax);   
}         
int main(){
    ques1(); //Q1
    ques2(); //Q2
    ques3(); //Q3
    ques4(); //Q4
    ques5_1(); //Q5_1
    ques5_2(); //Q5_2
    ques6(); //Q6
    ques7(); //Q7
    return 0;
}    
    
    
