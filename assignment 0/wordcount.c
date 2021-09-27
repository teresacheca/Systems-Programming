//AUTHOR: TERESA DEL CARMEN CHECA MARABOTTO

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char * argv[]){

    int end = 0;
    int space = 0;
    int num_words = 0;
    char character = getchar();

    /*  
        We need to check that the first character entered is the beginning 
        of a word (that we are not entering a space)
    */
    if(getchar() != ' '){
       num_words++;
    }

    /*  
        From then on, we count words as follows: 
        if we find a space, we put space = 1, 
        when we stop reading a space it will mean that we start reading a new word, 
        so we add 1 to the number of words
    */
    do {
        character = getchar();
        if(character == EOF){
            end = 1;
        }else{
            if(character != ' '){
                if(space == 1){
                   space =0; 
                   num_words ++;
                }
            }else{
                space = 1;
            }
        }
    }while(end == 0);

    printf("\nNumer of words: %i \n", num_words );
    
}