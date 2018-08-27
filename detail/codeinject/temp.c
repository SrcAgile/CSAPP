#include <stdio.h>
#include <stdlib.h>
void attack(){
	puts("Bingo! Attack U");
}
int get(){
	int buff[5];
	gets(buff);
	return 1;
}
int say(){
	int value;
	value = get();
	puts("Safety!!!");
	return 0;
}
int main(){
	say();
	return 0;
}
