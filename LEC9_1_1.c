/*
Q.2 Write a Program to convert the given string in uppercase without using any string
function.
Output:
helloworld
*/
#include<stdio.h>
void main(){
	int i;
	char c1[10]={'H','E','L','L','O','W','O','R','L','D'};
	for(i=0;i<12;i++){
		if(c1[i]<97){
			c1[i]=c1[i]+32;
			printf("%c",c1[i]);
		}
	}
	
}
