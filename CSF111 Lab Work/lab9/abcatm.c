#include<stdio.h>
#include<stdlib.h>

#define ROW 1000
#define COL 1000

int computeSumofDeposits(int row[], int size);
int computeMaxTransac(int row[], int size);

int main()
{
	int row, col, transac[ROW][COL];

	printf("Accept the data: \n");
	scanf("%d%d", &row, &col);

	for(int i=0;i<row;++i)
		for(int j=0;j<col;++j)
			scanf("%d", &transac[i][j]);

	int maxrow_totaldeposits = 0;
	for(int i=1;i<row;++i)
		if(computeSumofDeposits(transac[maxrow_totaldeposits], col)<computeSumofDeposits(transac[i], col))
			maxrow_totaldeposits = i;
	printf("The branch number that had the maximum total deposits (%d): %d\n", computeSumofDeposits(transac[maxrow_totaldeposits], col), maxrow_totaldeposits);

	int maxrow_transval = 0;
	for(int i=1;i<row;++i)
		if(computeMaxTransac(transac[maxrow_transval], col)<computeMaxTransac(transac[i], col))
			maxrow_transval = i;
	printf("The branch number that had the maximum Transaction value (%d): %d\n", computeMaxTransac(transac[maxrow_transval], col), maxrow_transval);

return 0;
}

int computeSumofDeposits(int row[], int size)
{
	int sum=0;
	for(int i=0;i<size;++i)
		if(row[i]>0)
			sum+=row[i];
return sum;
}

int computeMaxTransac(int row[], int size)
{
	int max = row[0];
	for(int i=1;i<size;++i)
		if(max<abs(row[i]))
			max = abs(row[i]);
return max;
}
