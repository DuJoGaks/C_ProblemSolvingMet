//Assignment #1, 12.3
//total days
//2022-10-08 Kimtaewoo
#include <stdio.h>

struct DATE {
	int year;
	int month;
	int day;
};

//catch struct date, determines the number of days from the date 1/1/2000(month/day/year)
//use call by reference.
int Days(struct DATE *date) {
	int total;
	if (date->year < 2000 || date->month < 1 || date->month > 12 || date->day < 1 || date->day > 31)//defensive coding!
		return -1;
	total = (date->day-1) + (date->month-1) * 30 + (date->year-2000) * 360;
	return total;
}

//call by value
/*
int Days(struct DATE date) {
	int total;
	if (date.year < 2000 || date.month < 1 || date.month > 12 || date.day < 1 || date.day > 31)//defensive coding!
		return -1;
	total = (date.day - 1) + (date.month - 1) * 30 + (date.year - 2000) * 360;
	return total;
}*/

int main() {
	struct DATE date;
	int total;
	printf("Enter the date (month/day/year) : ");
	scanf("%d/%d/%d", &date.month, &date.day, &date.year);
	total = Days(&date);
	if (total == -1)
		printf("Invalid date");
	else
		printf("The number of days from 1/1/2000 is %d", total);
	return 0;
}