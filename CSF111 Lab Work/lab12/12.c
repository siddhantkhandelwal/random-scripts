#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct {
char idno[16];
char name[50];
char gender;
int age;
char res_status;
float cgpa;
char emailaddress[40];
} STUD;

void populateRecords(STUD [], int);
void generateEmailAddress(char [], char []); /* definition given below main()*/
void storeEmailAddresses(STUD [], int);
void printRecords(STUD [], int);
float calculateAvgCG(STUD [], int);
void printCount(STUD [], int, int, int);

int main()
{
  int nos, i;
  // more declarations here...


  scanf("%d",&nos);    /* number of student records in the file */
  getchar();   /* to eat away the \n character at the end of line */
  STUD rec[nos];    /* a VLA of structures being declared */

  populateRecords(rec,nos);     /* get data into the array */
  storeEmailAddresses(rec,nos);    /* generate and store email addresses */

  printRecords(rec,nos);    /* print records in the required format */

  printf("The mean CGPA of students is: %.3f\n", calculateAvgCG(rec,nos));

  printCount(rec,1,0,nos); /* count and print student numbers gender-wise */ 
  printCount(rec,0,1,nos); /* print student numbers acc. to resi. status */

  // code for printing CGPAs sorted according to ID numbers goes here...
  STUD *point[nos], *temp;
  for(int i=0;i<nos;++i)
  {
    point[i]=malloc(sizeof(STUD));
    point[i]=&rec[i];
  }

  for(int i=0;i<nos-1;++i)
    for(int j=i+1;j<nos;++j)
      if(strcmp(point[j]->idno,point[i]->idno)<0)
      {
        temp = point[i];
        point[i]=point[j];
        point[j]=temp;
      }
  char cgpa[14]="Not available";
  for(int i=0;i<nos;++i)
	printf("\n%s\t%s", point[i]->idno, ((point[i]->cgpa==0)?"Not available":gcvt(point[i]->cgpa, 3, cgpa), cgpa));
  printf("\n");
  return 0;
}

void populateRecords(STUD arr[], int n)
{
  // write your code here...
  for(int i=0;i<n;++i)
  {
    scanf("%[^,], %[^,], %c, %d, %c, %f", arr[i].idno, arr[i].name, &arr[i].gender, &arr[i].age, &arr[i].res_status, &arr[i].cgpa);
    getchar();
  }
  return;
}

void generateEmailAddress(char idno[], char email[])
{
  char year[5];
  int i, yr, start, len, end;
  for (i = 0; i < 4; ++i)
    year[i] = idno[i];
  year[i]='\0';	  /* year now contains the year of admission as a string */
  yr = atoi(year); /* contents of year being converted into an int */

  strcpy(email,"f");
  strcat(email,year);  /* email array now has fxxxx, where xxxx is the year of admission */

  if (yr < 2017)  /* prior to 2017 admissions */ 
    start = 9;  /* start extracting the last three digits in the ID number */
  else
    start = 8; /* start extracting the last four digits in the ID number */

  len = strlen(email);
  end = 11; /* extract till the last digit of the ID number */
  for (i = start; i <= end; ++i)
    email[len++] = idno[i];
  email[len] = '\0';
  strcat(email,"@pilani.bits-pilani.ac.in"); /* last part of email address */
  return;
}

void storeEmailAddresses(STUD arr[], int n)
{
  // write your code here...
  for(int i=0;i<n;++i)
  {
    generateEmailAddress(arr[i].idno, arr[i].emailaddress);
  }
  return;
}

void printRecords(STUD arr[], int n)
{
  // write your code here...
  char cgpa[14]="Not available";
  for(int i=0;i<n;++i)
  {
    printf("%s %s\nGender: %c\nAge: %d\nResidence Status: %s\nCGPA: %s\nEmail: %s\n-------------------------------------------------\n", arr[i].idno, arr[i].name, arr[i].gender, arr[i].age, ((arr[i].res_status=='H')?"Hostel":"Day scholar"), ((arr[i].cgpa==0)?"Not available":gcvt(arr[i].cgpa, 3, cgpa), cgpa), arr[i].emailaddress);
  }
  return;
}

float calculateAvgCG(STUD arr[], int n)
{
  float avg, sum=0;
  //write your code here...
  for(int i=0;i<n;++i)
   sum+=arr[i].cgpa;
  avg=sum/n;
  return avg;
}

void printCount(STUD arr[], int gndr, int resi, int n)
{
  // write your code here...
  int count=0;
  if(gndr)
  {
    for(int i=0;i<n;++i)
      if(arr[i].gender=='M')
        count++;
  }
  else if(resi) 
  {
    for(int i=0;i<n;++i)
      if(arr[i].res_status=='H')
        count++;
  }
  printf("\n%d\t%d", count, n-count);
  return;
}
