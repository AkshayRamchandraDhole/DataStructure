#include<stdio.h>
#include<stdbool.h>
int myStrLen(char *str){
	int cnt=0;
	while(*str!='\0'){
		cnt++;
		str++;
	}
	return cnt;
}

bool paliStr(char str[],int len){
	int i=0;
	while(i<len/2){
		if(str[i] == str[len-1-i])
			i++;
		else
			return false;
	}
	return true;
}
void main(){
	char str[]="racecar";
	int len = myStrLen(str);
	
	bool val = paliStr(str,len);
	
	if(val == true)
		printf("String is Palindrome\n");
	else
		printf("String is Not Palindrome\n");
}
