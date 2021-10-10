//1. Write a C compiler to check whether a given number is a valid floating point number or not. Write for all possible all test cases. Example:
//  input: 2.0
//  output: valid
//  input: 1.
//  output: invalid
#include<stdio.h>
#include<string.h>
int main(){
 char n[50];
 int isfloat = 0;
 printf("Enter n\n");
 gets(n);
 int i=0,j=1;
 while(n[i]!='\0'){
     if(n[i]=='.'){
          
         
          while(i-j>=0 && i+j<strlen(n)){
             if(n[i-j]>='0' && n[i-j]<='9' && n[i+j]>='0' && n[i+j]<='9'){
                 isfloat=1;
             }
             
             j++;
         }
         
     }
    
     i++;
 }
 if(isfloat!=0){
     printf("Valid");

 }
 else{
     printf("Invalid");
 }
 
    return 0;
}