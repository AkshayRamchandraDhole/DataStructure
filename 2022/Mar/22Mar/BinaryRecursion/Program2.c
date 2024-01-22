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

_Bool paliStr(char str[],int len){
	static int i=0;
	if(i > len/2)
		return true;

	if(str[i] != str[len-1-i])
		return false;
	i++;
	paliStr(str,len);
}
void main(){
	char str[]="racecar";
	int len = myStrLen(str);
	
	_Bool val = paliStr(str,len);
	
	if(val == true)
		printf("String is Palindrome\n");
	else
		printf("String is Not Palindrome\n");
}
