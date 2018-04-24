#include<stdio.h>
#include<string.h>

struct student{
	char name[20];
	char id[14];
	int age;
	float cgpa;
}s1;

void changeData(struct student s);

int main()
{
	struct student s2, s3;
	printf("Sizeof S1 is: %lu\n", sizeof(s1));

	printf("Enter Data:");

	printf("\nName: ");
	scanf("%s", s1.name);
	printf("ID: ");
	scanf("%s", s1.id);
	printf("Age: ");
	scanf("%d", &s1.age);
	printf("CGPA: ");
	scanf("%f", &s1.cgpa);

	printf("\nName: ");
	scanf("%s", s2.name);
	printf("ID: ");
	scanf("%s", s2.id);
	printf("Age: ");
	scanf("%d", &s2.age);
	printf("CGPA: ");
	scanf("%f", &s2.cgpa);

	s3=s1;

	if(!strcmp(s2.name, s3.name) && !strcmp(s2.id, s3.id) && s2.age==s3.age && s2.cgpa == s3.cgpa)
		printf("\nS2 and S3 are identical\n");
	else
 		printf("\nS2 and S3 are not identical\n");

	printf("\nName: %s\n", s1.name);
	printf("ID: %s\n", s1.id);
	printf("Age: %d\n", s1.age);
	printf("CGPA: %f\n", s1.cgpa);

	changeData(s1);

	printf("\nName: %s\n", s1.name);
	printf("ID: %s\n", s1.id);
	printf("Age: %d\n", s1.age);
	printf("CGPA: %f\n", s1.cgpa);

	printf("\n%p\n", &s3);

	printf("\n%p\n", s3.name);
	printf("%p\n", s3.id);
	printf("%p\n", &s3.age);
	printf("%p\n", &s3.cgpa);

return 0;
}

void changeData(struct student s)
{
	strcpy(s.name, "Madhav");
	s.age = 20;
	s.cgpa = 7.33;
}
