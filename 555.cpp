#include<bits/stdc++.h>

void main() {
    	char string[50];
    	int flag,count=0,i=0,j=0,k=0;

    	printf("The grammar is: A->aBC, B->ab|b, C->c|ca\n");
    	printf("Enter the string to be checked:\n");
    	gets(string);
    	if(string[0]=='a') {
    		flag=0;
    		for (count=1;string[count-1]!='/0';count++) {
    		    if(string[count]=='a') {
                    k++;
    				flag=1;
    				if(string[count+1]== '/0'){
    				    k=0;
    				    printf("String accepted");
                        break;
    				}
                    else
                        continue;
    			}
    			else if(string[count]=='b') {
                    i++;
    				flag=1;
    				continue;
    			}
    			else if((flag==1)&&(string[count]=='d')) {
    				printf("The string does not belong to the specified grammar");
    				break;
    			}
    			else if(string[count]=='c'){
                        j++;
                        flag=1;

    			}
    			else if(i>1 || j>1 || k>1){
                    printf("String not accepted");
                    break;
    			    }
    			    if(( flag==1)&&(string[count+1]='/0')) {
    				printf( "String accepted..!!!!");
    				break;
    			}
    			else {
    				printf("String not accepted %d",j);
    				break;
    			}
    		}
    	}

    }
