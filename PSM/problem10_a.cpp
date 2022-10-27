//Problem #10 (a) and (b)
//Assignment #4
//202234880 Kimtaewoo
//Dept. AI/SW, 2022-10-27
#include <stdio.h>
#include <stdlib.h>

int main() {
	FILE* in = fopen("input10.txt", "r");
	if (in == NULL) {
		printf("File open error!\n");
		exit(1);
	}
	
	int group[10][100] = { 0, };
	int group_count[10] = { 0, };//saves each group's entity count
	int n = 0,cnt=0,tmp = 0;

	while (fscanf(in, "%d", &n) != EOF) {
		for (int i = 0; i < n; i++) {
			fscanf(in, "%d", &group[cnt][i]);
		}
		group_count[cnt] += n;
		cnt += 1;
	}
	fclose(in);
	
	//print groups and average
	printf("Problem#10 : \n");
	for (int i = 0; i < cnt; i++) {
		printf("Group %d: ", i + 1);
		for (int j = 0; j < group_count[i]; j++) {
			printf("%d ", group[i][j]);
			tmp += group[i][j];
		}
		printf("  | average : %.2f\n",float(tmp)/group_count[i]);
	}
	return 0;
	
}