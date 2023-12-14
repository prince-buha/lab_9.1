/*
Q.3 Write a Program to convert the given string in toggle case without using any
string function.
Output:
hELlOWORld
*/
#include<stdio.h>
void main(){
	int i;
	char c1[10]={'H','e','l','L','o','w','o','r','L','D'};
	for(i=0;i<12;i++){
		if(c1[i]<97){
			c1[i]=c1[i]+32;
			printf("%c",c1[i]);
		}else{
			c1[i]=c1[i]-32;
			printf("%c",c1[i]);
		}
	}
	
}
