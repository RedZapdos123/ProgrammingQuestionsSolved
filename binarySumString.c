//Name: Mridankan Mandal
//Roll Number: IIB2024017

#include <stdio.h>
#include <string.h>

char* reverse(char* str){
    char* rstr;
    int k = 0;
    for(int j = strlen(str)-1; j >= 0; j--, k++){
        rstr[k] = str[j];
    }
    rstr[k] = '\0';
    return rstr;
}
        
char* binarySum(char a[], char b[]){
    int ba =0, bb = 0, p = 1, s = 0;
    //Converting to decimal numbers
    for(int k = strlen(a)-1; k >= 0; k--, p *= 2){
        ba += p*((a[k] == '1') ? 1: 0);
    }
    p = 1;
    for(int k = strlen(b)-1; k >= 0; k--, p *= 2){
        bb += p*((b[k] == '1') ? 1: 0);
    }
    //Adding the decimal numbers 
    s = ba + bb;
    
    //Converting the decimal sum to a binary string
    char sum[255];
    int j = 0;
    while(s != 0){
        if(s%2 == 1){
            sum[j] = '1';
        }
        else if(s%2 == 0){
            sum[j] = '0';
        } 
        j++;
        s /= 2;
    }
    sum[j] = '\0';            
    return reverse(sum);
}
    
int main(){
	//Taking the input of the binary numbers as strings
	char a[255], b[255], sum[255];
	printf("Input the binary number: ");
	scanf("%s", a);
	printf("Input another binary number: ");
	scanf("%s", b);
	
	//Finding the binary sum
	strcpy(sum, binarySum(a,b));
    
    //Printing the output
    printf("\nThe sum of %s and %s is %s.\n", a, b, sum);
    return 0;
}           
			
			
			
			
			
			
			
			
			
			
			
			
			
			
    