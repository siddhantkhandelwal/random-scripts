#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define MAX 40

typedef struct student STUDENT;
typedef struct student
{
	char name[MAX];
	int count;
	int length;
	STUDENT *next;
}STUDENT;

STUDENT *addName(STUDENT *list, char[]);
void printUniqueNames(STUDENT *);
int findMostFrequent(STUDENT *);
STUDENT *deleteSingle(STUDENT *, char *);
STUDENT *addSortOrder(STUDENT *, char *);

int main()
{
	STUDENT *list;
	char name[MAX];
	int nos;
	scanf("%d", &nos);
	for(int i=0;i<nos;i++)
	{
		scanf("%s", name);
		list=addName(list, name);
	}
	printUniqueNames(list);
return 0;
}

STUDENT *addName(STUDENT *list, char name[])
{
	STUDENT *temp=list, *newnode;

	newnode = malloc(sizeof(STUDENT));
	strcpy(newnode->name, name);
	newnode->count=1;
	newnode->next = NULL;

	if(list==NULL)
	{
		list=newnode;
		return list;
	}

	while(temp)
	{
		if(strcmp(temp->name,name)==0)
		{
			temp->count=temp->count+1;
			return list;
		}
		temp=temp->next;
	}

	temp = list;
	while(temp->next)
		temp=temp->next;
	temp->next=newnode;
return list;
}

void printUniqueNames(STUDENT *list)
{
	STUDENT *temp = list;
	while(temp)
	{
		printf("%s\t%d\n", temp->name, temp->count);
		temp=temp->next;
	}
}


int findMostFrequent(STUDENT *list)
{
	STUDENT *temp=list, *max=list;
	while(temp)
	{
		if(max->count<temp->count)
			max=temp;
		temp=temp->next;
	}
	printf("%s\n", max->name);
return max->count;
}

STUDENT *deleteSingle(STUDENT *list, char *name)
{
	STUDENT *temp=list;
	int flag=0;
	while(temp)
	{
		if(strcmp(temp->name, name)==0)
			flag=1;
	}
}

