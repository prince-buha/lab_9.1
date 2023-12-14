/*
Q.2 Write a Program to convert the given string in uppercase without using any string
function.
Output:
HELLOWORLD
*/
#include<stdio.h>
void main(){
	int i;
	char c1[10]={'h','e','l','l','o','w','o','r','l','d'};
	for(i=0;i<12;i++){
		if(c1[i]>=65){
			c1[i]=c1[i]-32;
			printf("%c",c1[i]);
		}
	}
}
