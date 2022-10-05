//string copy example 4
//Lecture wk2-3-4, C-review
//202234880 Kim taewoo
#include <stdio.h>
#define MAXVAL 1000

void strcopy(char[MAXVAL], char[MAXVAL]);

int main() {
	char str1[MAXVAL] = "abc";
	char str2[MAXVAL] = "def";
	strcopy(str1, str2);
	printf("%s", str1);
	return 0;
}

//Copy string2 arr value to string1 arr.
//This function is void func, so dont have return val.
void strcopy(char string1[MAXVAL], char string2[MAXVAL]) {
	int i = 0;
	while (string2[i] != '\0') {
		string1[i] = string2[i];
		i++;
	}
	string1[i] = '\0';//Set NULL to know end of array
}