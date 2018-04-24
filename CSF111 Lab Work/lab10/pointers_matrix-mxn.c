#include<stdio.h>
#include<stdlib.h>

int main()
{
	int m, n;
	scanf("%d %d", &m, &n);
	int **matrix = malloc(sizeof(int*)*m);
	for(int i=0;i<m;++i)
		matrix[i]=malloc(sizeof(int)*n);
	for(int i=0;i<m;++i)
		for(int j=0;j<n;++j)
			scanf("%d", matrix[i]+j);
	printf("_________________________\n\n");
	for(int i=0;i<m;++i)
	{
		for(int j=0;j<n;++j)
			printf("%d\t", matrix[i][j]);
		printf("\n");
	}
	for(int i=0;i<m;++i)
		free(matrix[i]);
	free(matrix);
return 0;
}
