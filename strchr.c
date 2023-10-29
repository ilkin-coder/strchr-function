#include <stdio.h>
int findstrlen(char *p );
int findstrchr(char *p , char l);
int main(){
    char source[]="Hello World!";
    char letter='e';
    int a=findstrchr(source , letter);
    if (a != -1) {
        printf("'%c' is found in \"%s\" string, at  %d position\n", letter, source, a);
    } else {
        printf("'%c' is not found in \"%s\" string\n", letter, source);
    }

}
int findstrlen(char *p ){
    int length=0;
    for(int i=0; *(p+i) != '\0';i++) length++;
    return length;
}

int findstrchr(char *p , char l){
    int length=findstrlen(p);
    for(int i=0; i<length; i++){
        if (*(p+i) != l){
            continue;
        }else{
            return i;
        }
        return -1;
    }
}