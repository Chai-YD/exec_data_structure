////strtok函数的使用
//#include <string.h>
//#include <stdio.h>
//
//char string[] = "A string\tof ,,tokens\nand some  more tokens";
//char seps[]   = " ,\t\n";
//char *token;
//
//int main( void )
//{
//   printf( "%s\n\nTokens:\n", string );
//   token = strtok( string, seps );
//   while( token != NULL ){
//       printf(" %s\n",token);
//       token = strtok(NULL,seps);
//   }
//   return 0;
//}
   
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main(){
    char string[] = "I am Student.";
    char seqs[] = " ";
    char* token;
    token = strtok(string,seqs);
    while(token != NULL){
        printf("%s \n",token);
        token = strtok(NULL,seqs);
    }
    return 0;
}
