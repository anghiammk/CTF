#include <stdio.h>

int main(int argc, char const *argv[]) {
	/*
	* g  i a  n   t  s
	* 15 0 5  11  13 1
	*
	* '%c' & 0xF = 15  // g
	* '%c' & 0xF = 0   // i
	* '%c' & 0xF = 5   // a
	* '%c' & 0xF = 11  // n
	* '%c' & 0xF = 13  // t
	* '%c' & 0xF = 1   // s
	*/
	char ch;
	int i;
	char output[6];
	for(ch='a';ch<='z';ch++){
		i = ch & 0xF;
		if(i==15){
			output[0] = ch;
		}
		if(i==0){
			output[1] = ch;
		}
		if(i==5){
			output[2] = ch;
		}
		if(i==11){
			output[3] = ch;
		}
		if(i==13){
			output[4] = ch;
		}
		if(i==1){
			output[5] = ch;
		}
	}
	printf("\n");
	int j;
	for (j = 0; j <= 5; j++)
	{
		printf("%c",output[j]); // key here
	}
	return 0;
}
