#include<stdio.h>
#include<stdlib.h>

int computeSumofDeposits(int *row);
int computeMaxTransac(int *row);

int main()
{
	int row, col, **transac;

	printf("Accept the data: \n");
	scanf("%d",&row);
	transac = malloc(sizeof(int *)*row);

	for(int i=0;i<row;++i)
	{
		scanf("%d", &col);
		transac[i]=malloc(sizeof(int) * (col+1));
		transac[i][0]=col;
		for(int j=1;j<=col;++j)
			scanf("%d", transac[i]+j);
	}

	int maxrow_totaldeposits = 0;
	for(int i=1;i<row;++i)
		if(computeSumofDeposits(transac[maxrow_totaldeposits])<computeSumofDeposits(transac[i]))
			maxrow_totaldeposits = i;
	printf("The branch number that had the maximum total deposits (%d): %d\n", computeSumofDeposits(transac[maxrow_totaldeposits]), maxrow_totaldeposits);

	int maxrow_transval = 0;
	for(int i=1;i<row;++i)
		if(computeMaxTransac(transac[maxrow_transval])<computeMaxTransac(transac[i]))
			maxrow_transval = i;
	printf("The branch number that had the maximum Transaction value (%d): %d\n", computeMaxTransac(transac[maxrow_transval]), maxrow_transval);

return 0;
}

int computeSumofDeposits(int *row)
{
	int sum=0;
	for(int i=1;i<=row[0];++i)
		if(row[i]>0)
			sum+=row[i];
return sum;
}

int computeMaxTransac(int *row)
{
	int max = row[1];
	for(int i=2;i<=row[0];++i)
		if(max<abs(row[i]))
			max = abs(row[i]);
return max;
}
