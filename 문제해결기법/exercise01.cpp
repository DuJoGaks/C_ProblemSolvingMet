//[0831]Exercise 1, Problem solving methods
//202234880 Kim taewoo, 22-09-01
#include <stdio.h>\

int main() {
	int maxage = -1, minage = 1000;
	int maxscore = -1, minscore = 1000;
	int maxagecnt=0, minagecnt=0, maxscorecnt=0, minscorecnt=0;
	int age[100], maxagegrp[100], minagegrp[100];
	int score[100], maxscoregrp[100], minscoregrp[100];
	int i;

	//read age and score from input.txt
	FILE* fp = fopen("input.txt", "r");
	if (fp == NULL) {
		printf("input.txt file open error!\n");
		return 0;
	}
	for (i = 0; i < 5; i++) {
		fscanf(fp, "%d %d", &age[i], &score[i]);
	}
	fclose(fp);
	
	//find min/max age/score loop
	for (i = 0; i < 5; i++) {

		if (age[i] < 0 || age[i]>1000) {//age exception handling
			printf("The age value is between 0 and 1000. Your value is %d\nThis student will be excluded from the search.\n",age[i]);
			continue;
		}
		if (score[i] < 0 || score[i]>1000) {//score exception handling
			printf("The score value is between 0 and 1000. Your value is %d\nThis student will be excluded from the search.\n",score[i]);
			continue;
		}
		
		if (age[i] < minage) {//find min age
			minage = age[i];
			minagecnt = 0;
			minagegrp[minagecnt] = i;
		}
		else if (age[i] == minage) {
			minagecnt += 1;
			minagegrp[minagecnt] = i;
		}

		if (score[i] < minscore) {//find min score
			minscore = score[i];
			minscorecnt = 0;
			minscoregrp[minscorecnt] = i;
		}
		else if (score[i] == minscore) {
			minscorecnt += 1;
			minscoregrp[minscorecnt] = i;
		}

		if (age[i] > maxage) {//find max age
			maxage = age[i];
			maxagecnt = 0;
			maxagegrp[maxagecnt] = i;
		}
		else if (age[i] == maxage) {
			maxagecnt += 1;
			maxagegrp[maxagecnt] = i;
		}

		if (score[i] > maxscore) {//find max score
			maxscore = score[i];
			maxscorecnt = 0;
			maxscoregrp[maxscorecnt] = i;
		}
		else if (score[i] == maxscore) {
			maxscorecnt += 1;
			maxscoregrp[maxscorecnt] = i;
		}
	}
	
	//print loop
	for (i = 0; i <= maxagecnt; i++)	printf("\nscore for an oldest student = %d", score[maxagegrp[i]]);
	for (i = 0; i <= minagecnt; i++)	printf("\nscore for an youngest student = %d", score[minagegrp[i]]);
	for (i = 0; i <= maxscorecnt; i++)	printf("\nage for an best grade student = %d", age[maxscoregrp[i]]);
	for (i = 0; i <= minscorecnt; i++) 	printf("\nage for an worst grade student = %d", age[minscoregrp[i]]);
	
	return 0;
}