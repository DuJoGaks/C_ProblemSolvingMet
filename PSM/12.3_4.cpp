//12.3_4a/b
//show recent day
//202234880 Kimtaewoo
#include <stdio.h>

struct DATE {
	int year;
	int month;
	int day;
};

//recent() that returns the later date of any two dates passed to it.
struct DATE recent(struct DATE date1, struct DATE date2) {
	if (date1.year > date2.year) {
		return date1;
	}
	else if (date1.year < date2.year) {
		return date2;
	}
	else {
		if (date1.month > date2.month) {
			return date1;
		}
		else if (date1.month < date2.month) {
			return date2;
		}
		else {
			if (date1.day > date2.day) {
				return date1;
			}
			else if (date1.day < date2.day) {
				return date2;
			}
			else {
				return date1;
			}
		}
	}
}

int main() {
	struct DATE date1, date2, date3;
	printf("Enter first date (mm/dd/yyyy): ");
	scanf("%d/%d/%d", &date1.month, &date1.day, &date1.year);
	printf("Enter second date (mm/dd/yyyy): ");
	scanf("%d/%d/%d", &date2.month, &date2.day, &date2.year);
	if (date1.month < 1 || date1.month > 12 || date1.day < 1 || date1.day > 30 || date2.month < 1 || date2.month > 12 || date2.day < 1 || date2.day > 30) {//check over/under date
		printf("Invalid Date.\n");
		return 0;
	}
	date3 = recent(date1, date2);
	printf("Recent date is %d/%d/%d", date3.month, date3.day, date3.year);
	return 0;
}