#include<stdio.h>
int main(void)

{
	short value = 0;
	puts("Please enter the value");
	scanf_s("%hd", &value);

	switch (value)
	{
	case 1: puts("January"); break;
	case 2: puts("February"); break;
	case 3: puts("March"); break;
	case 4: puts("April"); break;
	case 5: puts("May"); break;
	case 6: puts("June"); break;
	case 7: puts("July");         // skipping break statement will execute next statement with it.
		                          // if entered 7, july and august will be displayed.
	case 8: puts("August"); break;
	case 9: puts("September"); break;
	case 10: puts("October"); break;
	case 11: puts("November"); break;
	case 12: puts("December"); break;
	default: puts("Please enter the valid value month");
	}
	return 0;
}
