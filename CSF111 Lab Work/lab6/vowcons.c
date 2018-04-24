#include<stdio.h>
int main()
{
	char ch;
	int vowcount = 0, conscount = 0, flag=0;
	while((ch=getchar())!=EOF && ch!=' ')
	{
		if(!((ch>=65&&ch<=90) || (ch>=97&&ch<=122)))
			continue;
		switch(ch)
		{
			case 'a':
			case 'e':
			case 'i':
			case 'o':
                  	case 'u':
                        case 'A':
			case 'E':
                        case 'I':
	                case 'O':
			case 'U':
				vowcount++;
				break;
			default:
				conscount++;
		}

	}
	printf("Vowels:\t%d\nConsonants:\t%d\n", vowcount, conscount);
return 0;
}
