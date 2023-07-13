#include <stdio.h>

void generate(char *password,int idx){
    if (idx == 7) {
        password[7] = '\0';
        printf("%s\n", password);
        return;
    }
    if (idx==0 || idx==6){
        for(char c='a';c<='z';c++){
            password[0]=c;
            password[6]=c;
            generate(password,idx+1);
        }

    }
    else if(idx==1 || idx==5){
        for(char c='A';c<='Z';c++){
            password[1]=c;
            password[5]=c;
            generate(password,idx+1);
        }

    }
    else if( idx==2 || idx==4){
        for(char c='0';c<='9';c++){
            password[2]=c;
            password[4]=c;
            generate(password,idx+1);
        }

    }
    else if(idx==3){
        password[3]='-';
        generate(password,idx+1);
        password[3]='+';
        generate(password,idx+1);
    }
}

int main(){
    char password[8];
    generate(password,0);
}