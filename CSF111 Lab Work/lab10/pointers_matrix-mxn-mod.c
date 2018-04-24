#include<stdio.h>
#include<stdlib.h>

int main()
{
	int m, n;
	scanf("%d",&m);
	int **matrix = malloc(sizeof(int*)*m);
	for(int i=0;i<m;++i)
	{
		scanf("%d", &n);
		matrix[i]=malloc(sizeof(int)*(n+1));
		matrix[i][0]=n;
		for(int j=1;j<=n;++j)
			scanf("%d", matrix[i]+j);
	}
	printf("_________________________\n\n");
	for(int i=0;i<m;++i)
	{
		for(int j=1;j<=matrix[i][0];++j)
			printf("%d\t", matrix[i][j]);
		printf("\n");
	}
	for(int i=0;i<m;++i)
		free(matrix[i]);
	free(matrix);
return 0;
}
