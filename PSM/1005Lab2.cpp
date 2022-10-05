//find job in table, index array
//202234880 Kimtaewoo
//2022-10-05
#include <stdio.h>
#include <string.h>
#ifdef _MSC_VER
#define _CRT_SECURE_NO_WARNINGS
#endif

struct REGESTRATION {
	int index;
	char name[50];
	int age;
	char job[50];
};

struct INDEX {
	char job[50];
	int index;
};

//copy registration's index and job to index structure.
void create_index(struct REGESTRATION registration[], struct INDEX index[]) {
	for (int i = 0; i < 4; i++) {
		index[i].index = registration[i].index;
		strcpy(index[i].job, registration[i].job);
	}
}

//input registration, index, and job, find certain job worker in index[], and returns index value.
int search_job(struct REGESTRATION registration[], struct INDEX index[],char job[]) {
	for (int i = 0; i < 4; i++) {
		if (strcmp(index[i].job, job) == 0) {//if job and index[i].job are same.
			return i;
		}
	}
	return -1;
}

//main function
int main() {
	struct REGESTRATION registration[4] = {
		{0,"park",25,"student"},
		{1,"jung",35,"engineer"},
		{2,"kim",40,"professor"},
		{3,"lee",33,"staff"}
	};
	struct INDEX index[4];
	char job[50];

	printf("Enter the job you wnat to find : ");
	scanf("%s", job);
	create_index(registration, index);
	int found=search_job(registration, index,job);

	if (found == -1) printf("No %s in this table!", job);
	else printf("-> (%s, %d, %s)\n", registration[found].name, registration[found].age, registration[found].job);
	return 0;
	//prints job
	
	
}