#include <stdio.h>
#include <string.h>
#include <ctype.h>
#pragma warning(disable : 4996)

// Write a program that accepts a date from the user in form mm/dd/yy and then displays it in month, dd yyyy
// Example: 02/15/2019		->		February 15, 2019

void convert_to_name(int month, int day, int year);

int cmsmms(void) {

	int month, day, year;

	printf("Enter a date (mm/dd/yyyy): ");
	scanf("%d/%d/%d", &month, &day, &year);

	// Convert month to name of the month
	convert_to_name(month, day, year);

	printf("\n");

	return 0;
}

void convert_to_name(int month, int day, int year) {

	switch (month) {

	case 1: printf("January %d, %d", day, year); break;
	case 2: printf("February %d, %d", day, year); break;
	case 3: printf("March %d, %d", day, year); break;
	case 4: printf("April %d, %d", day, year); break;
	case 5: printf("May %d, %d", day, year); break;
	case 6: printf("June %d, %d", day, year); break;
	case 7: printf("July %d, %d", day, year); break;
	case 8: printf("August %d, %d", day, year); break;
	case 9: printf("September %d, %d", day, year); break;
	case 10: printf("October %d, %d", day, year); break;
	case 11: printf("November %d, %d", day, year); break;
	case 12: printf("December %d, %d", day, year); break;
	default: printf("Wrong month date"); break;

	}

}



// ALTERNATIVE SOLUTION

/*

int m, d, y;

	char *months[12] = {"January", "February", "March", "April", "May", "June",
						"July", "August", "September", "October", "November",
						"December"};

	printf("Enter a date (mm/dd/yyyy): ");
	scanf("%d / %d / %d", &m, &d, &y);
	printf("You entered the date %s %.2d, %d\n", months[m-1], d, y);



*/