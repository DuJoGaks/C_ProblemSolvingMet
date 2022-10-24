//Assignment #2_Exact matched string
//202234880 Kimtaewoo
//2022-10-11
#include <stdio.h>

//find string's length
int strlen(char str[]) {
	int i = 0;
	while (str[i] != '\0') {
		i++;
	}
	return i;
}

//find search_str in str, exact match.
int exact_match(char str[], char search_str[]) {
	int cursor = 0, i = 0,cnt=0;
	while (str[cursor] != '\0') {
		//printf("%c %c %d %d %d\n", str[cursor], search_str[i], cursor, i,strlen(search_str));
		if (str[cursor] == search_str[i]) i++;
		else i = 0;

		if (i == strlen(search_str)) {
			cnt++;//count of matched string
			i = 0;//for next search
		}
		cursor++;
	}
	return cnt;
}

int main(void) {
	char str[200] = "My name is umn jun sik. My sister is hong jaja, and her friend is leeleelee.";
	char search_str[100] = "umn*sik";

	printf("String : %s \nSearch string : %s\n", str,search_str);
	printf("-> Exact matched result : ");
	int cnt = exact_match(str, search_str);
	if (cnt == 0) {
		printf("Not found!\n");
	}else printf("Match found! for %d times\n", cnt);
	return 0;
}