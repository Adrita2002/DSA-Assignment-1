/* 2. Write a C program to check whether a given email is valid or not. Rules of email ID can be refer to the link https://en.wikipedia.org/wiki/Email_address */

#include<stdio.h>
#include<string.h>
#include<stdbool.h>
#include<stdlib.h>


bool firstIsChar(char email[]){
    if(email[0]>='a' && email[0]<='z'){
    return true;
    }
   return false;
}

bool noSpecialChar(char email[]){
    int flag = 1;
    for (int i = 1; i < strlen(email); i++)
    {
        if (email[i]==' ' || email[i]=='!' || email[i]=='#' || email[i]=='$' || email[i]=='%'|| email[i]=='^' && email[i]=='&' || email[i]=='*' || email[i]=='?' || email[i]=='(' || email==')' || email[i]=='+' ||email[i]=='-' || email[i]=='/' || email[i]=='=' || email[i]=='|')
        {
            flag=0;
            break;
        }
        
    }
    if(flag==1)
    return true;
    else
    return false;
    
}

bool atDot(char email[]){
    int at=-1, dot=-1,flag=1;
    for (int i = 0; i < strlen(email); i++)
    {
        if (email[i]=='@')
        {
            at=i;
            break;
        }

    }
   
     for (int i = 0; i < strlen(email); i++)
    {
        if (email[i]=='.')
        {
            dot=i;
            break;
        }

    }
    
    if (at==-1 || dot==-1)
    {
        return false;
    }
    else{
        if (dot==at+1 || dot==at-1)
        {
            return false;
        }
        else{
            for (int i = at+1; i < strlen(email); i++)
            {
               if (email[i]>='0' && email[i]<='9')
               {
                   flag=0;
                   break;
               }
               
            }
            if(flag){
                return true;
            }
            else{
                return false;
            }
            
        }
        
    }
    
}
    


void isValid(char email[]){
   if (firstIsChar(email) && noSpecialChar(email) && atDot(email) )
   {
     
              printf("Email is Valid");
        
   }
   else{
       printf("Invalid email");
   }
   

}
int main(){
    char email[100];
    printf("Enter email\n");
    gets(email);
    isValid(email);


    return 0;
}