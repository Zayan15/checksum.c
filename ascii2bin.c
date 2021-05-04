#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#define byte unsigned char

int main (int argc, char * argv[], char ** envp){

int offset = 0x30;
unsigned int number = 0;
int digit;
char ascii_value;

    
    int retval = 1;
    read(STDIN_FILENO, &ascii_value, 1);
    
    
    while (retval == 1){
             digit =  ascii_value - offset;
             number = (number << 1) + digit; 
             retval = read(STDIN_FILENO, &ascii_value, 1);
             if(ascii_value=='\n'){
                 retval=0;
                 
             }
             if(digit!=1 && digit!=0){
      return 1;
    }
    }
     
    printf("%u\n", number);
    return 0;
    

 }