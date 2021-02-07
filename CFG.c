#include<stdio.h>
int cfg(char *str)
{
    int len=strlen(str);
    int flag=1;
    int i=0;
    while(1){
        if(((i+2)<=(len-1)) &&(str[i]=='a' && str[i+1]=='b' && str[i+2]=='a')){
            i=i+3;
            continue;
        }
        else if(((i+1)<=(len-1)) && (str[i]=='a' && str[i+1]=='b')){
            i=i+2;
            continue;
        }
        else if((i<=(len-1)) && (str[i]=='a')){
            i=i+1;
            continue;
        }
        else if((str[i]=='c')&&(str[i+1]=='\0')){
            break;
        }

        else{
            flag=0;
            break;
        }
    }
    if(flag==0){
        return 0;
    }
    else return 1;
}

int main(){
int a;
char stri[50];
a=cfg(gets(stri));
if(a==1)
 printf(" accepted");
else
  printf("not accepted");

return 0;
}
