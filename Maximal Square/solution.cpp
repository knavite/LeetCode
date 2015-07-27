#include <stdio.h>
#include <stdlib.h>
int min(int a,int b) {
	return a>b ? b : a;
}
int maximalSquare(char** matrix, int matrixRowSize, int matrixColSize) {
    int sum[matrixRowSize][matrixColSize];
	for(int i=0;i<matrixRowSize;i++)
		sum[i][0] = matrix[i][0]-'0';
	for(int i=0;i<matrixColSize;i++)
		sum[0][i] = matrix[0][i]-'0';
	for(int i=1;i<matrixRowSize;i++) {
		for(int j=1;j<matrixColSize;j++) {
			if(matrix[i][j]=='1')
				sum[i][j] = min(min(sum[i-1][j],sum[i][j-1]),sum[i-1][j-1]) + 1;
			else
				sum[i][j] = 0;
		}
	}
	int maxVal = 0;
	for(int i=0;i<matrixRowSize;i++) {
		for(int j=0;j<matrixColSize;j++) {
			if(sum[i][j]>maxVal)
				maxVal= sum[i][j];
		}
	}
	return maxVal*maxVal;
}

int main() {
	int m,n;
	scanf("%d%d",&m,&n);
	char* mat[m];
	for(int i=0;i<m;i++) {
		mat[i]= (char *) malloc(n*sizeof(char));
	}
	for(int i=0;i<m;i++) {
		for(int j=0;j<n;j++) {
			int temp;
			scanf("%d",&temp);
			mat[i][j]='0'+temp;
		}
	}
	printf("%d\n",maximalSquare(mat,m,n));
	return 0;
}