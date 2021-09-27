#include <stdio.h>
#include <stdlib.h>
 
void diamond(unsigned int n){
  
  
  if(n==0){
       return;
   }
 
   //For the top of the diamond:
   for(int i=1; i<=n; i++){

        //We know taht the middle of the diamond have 2*n-1 #,
        //so we know that we need to start with the half spaces, which is n-1
        //We star with space = n because we are going to subtract 1 to spaces later
        int space = n-i;
        
        
        //aux is the variable that represents the #
        //It strat in -1 because we are going to add the first # later
        int aux = 2*i - 1;
 
       //We print the number of spaces
       for(int j=0; j<space; j++){
           printf(" ");
       }
 
       //We print the number of #
       for(int k=0; k<aux; k++){
           printf("#");
       }
       printf("\n");
   }
 
  
 
   //For the bottom of the diamond:
   //We need to do de same backwards
   
    for(int i=1; i<=n-1; i++){

        int aux= 2*(n-i)-1;

        int space = i;

        //We print the number of spaces
        for(int j=0; j<space; j++){
            printf(" ");
        }

        //We print the number of #
        for(int k=0; k<aux; k++){
            printf("#");
        }
        
        printf("\n");
    }
   
  
}
 
int main(int argc, char * argv[]){
   if(argc<2){
       printf("usage: %s <n>\n", argv[0]);
       return 1;
   }
 
   unsigned int n = strtoul (argv[1], 0 ,10);
 
   diamond(n);
  
   return 0;
}

