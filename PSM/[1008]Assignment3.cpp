//Assignment #3_Partial matched string
//202234880 Kimtaewoo
//2022-10-12
#include <stdio.h>

//find string's length
int strlen(char str[]) {
	int i = 0;
	while (str[i] != '\0') {
		i++;
	}
	return i;
}

//find search_str in str, exact match, return first index of matched string.
int exact_match(char str[], char search_str[],int cursor) {
	int i = 0;
	while (str[cursor] != '\0') {
		//printf("%c %c %d %d %d\n", str[cursor], search_str[i], cursor, i,strlen(search_str));
		if (str[cursor] == search_str[i]) i++;
		else i = 0;

		if (i == strlen(search_str)) return cursor - strlen(search_str) + 1;
		cursor++;
	}
	return -1;
}

//find search_str in str, partial match, return count of matched string.
int partial_match(char str[], char search_str[]) {
	char first[100] = "";
	char second[100] = "";
	int i = 0, j = 0, cnt=0,cursor=0;
	
	//split search_str into two parts
	while (search_str[i] != '*' && search_str[i]!='\0') {
		first[i] = search_str[i];
		i++;
	}
	if (i == strlen(search_str)) {//defensive coding for no wildcard
		while (str[cursor] != '\0') {
			//printf("a%d %d\n", cnt, cursor);
			cursor = exact_match(str, search_str, cursor);
			if (cursor == -1) return cnt;
			cnt++;
			cursor += strlen(search_str)-1;
		}
	}
	first[i] = '\0';
	i++;
	//printf("\n%d %d\n",i,strlen(search_str));
	while (search_str[i] != '\0') {
		second[j] = search_str[i];
		i++;
		j++;
	}
	second[j] = '\0';
	//find first part in str
	cursor = 0;
	while (str[cursor] != '\0') {
		cursor = exact_match(str, first, cursor);
		if (cursor == -1) return cnt;
		//find second part in str
		cursor += strlen(first)-1;
		cursor = exact_match(str, second, cursor);
		if (cursor == -1) return cnt;
		else {
			cnt++;
			cursor++;
		}
	}
	return cnt;
}

int main(void) {
	char str[200] = "This is the test case string of exact match search. again, This is the test case of exact match search.";
	char search_str[100] = "none*none";

	printf("String : %s \nSearch string : %s\n", str, search_str);
	printf("-> Exact matched result : ");
	
	int cnt = partial_match(str, search_str);
	if (cnt == 0) {
		printf("Not found!\n");
	}
	else printf("Match found! at %d times\n", cnt);
	return 0;
}