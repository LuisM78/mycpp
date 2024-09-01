#include <stdio.h>

const char *text = "hello world!";
int  MAXCHAR = 256;


void countchar(const char *str){
    int i = 0;
    int charcount[MAXCHAR]={0};
    
    while(str[i]!='\0'){
        unsigned char index = (unsigned char) str[i];
        charcount[index] += 1;
        i++;
    }
    for(int i = 0; i<257;i++){
        if (charcount[i] > 0){
        printf("charcount[i] %c and the count is %d \n",(char)i,charcount[i]);
        }
    }


}
int main(){
    printf("%s ",text);
    countchar(text);
    return 0;
}