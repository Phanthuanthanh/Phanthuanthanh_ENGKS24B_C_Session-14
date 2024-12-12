#include <stdio.h>
int main(){
    char str[]="hello world  hi";
    int count=0;
    int inWord=0;
    for(int i=0; str[i]!='\0'; i++){
        if (str[i]!=' '){
            if(!inWord){
                count++;
                inWord=1;
            }
        }else{
            inWord=0;
        }
    }
    printf("So tu trong chuoi la: %d", count);
    return 0;
}
