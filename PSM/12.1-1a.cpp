//12.1 1a current date
//202234880 kim taewoo
//2022-09-19
#include <stdio.h>

int main() {
	struct date{
		int month;
		int day;
		int year;
	}; 
	
	struct date current;//current date structure
	printf("input current date(yyyy/mm/dd) : ");
	scanf("%d/%d/%d", &current.year, &current.month, &current.day);
	printf("current date : %d/%d/%d\n", current.year, current.month, current.day);
	return 0;
}