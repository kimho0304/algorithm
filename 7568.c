#include<stdio.h>

int N;

typedef struct info{
	int x;
	int y;
	int rank; 
}info;


info person[50];

void getRank(){
	
	for (int i = 0; i < N; i++){

		person[i].rank = 1;

		for (int j = 0; j < N; j++){
			if (i == j) continue;

			if (person[i].x < person[j].x && person[i].y < person[j].y){
				person[i].rank++;
			}

		}
	}

}

int main(){
	scanf("%d", &N);

	for (int i = 0; i < N; i++){
		scanf("%d%d", &person[i].x, &person[i].y);
	}

	getRank();

	for (int i = 0; i < N; i++){
		printf("%d ", person[i].rank);
	}
}
