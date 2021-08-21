#include<stdio.h>
#include<stdbool.h>


// function prototype
void draw_rectangle(int width, int height);
int  draw_rectangle_return_area(int width, int height);
void draw_hollow_rectangle(int width, int height);
void draw_line(int width);

int main(void) {
	int width;
	int height;
	int area;
	
	int i,j;
	
	struct Student
	{
		int age;
		double GPA;
		char gender;
		int credits;
	};
	
	struct Student s = {19, 4.0, 'M', 17};
	printf("s: %i, %.2f, %c, %i\n", s.age, s.GPA, s.gender, s.credits);

	
	// get the width and height of the rectangle from user
	printf("Enter width and height for rectangle: ");
	scanf("%i %i", &width, &height);
	
	// call the function to draw the solid rectangle
	draw_rectangle(width, height);
	
	printf("\n\n");
	
	// call the function to draw the solid rectangle and return the area of the rectangle
	area = draw_rectangle_return_area(width, height);
	
	printf("\nArea of rectangle: %i\n", area);
	
	printf("\n");
	
	// draw hollow rectangle
	// we'll convert this to a function later

	// draw top line of '*'s
	for(i = 1; i <= width; i++)
	{
		printf("*");
	}
	printf("\n");
	
	// draw middle hollow lines - '*' spaces '*'
	// NOTE: only for 2nd through next to last line
	for(j = 2; j < height; j++)
	{
		// print leading '*'
		printf("*");
		
		// print middle spaces
		// NOTE: only for 2nd through next to last positions in line
		for (i = 2; i < width; i++)
		{
			printf(" ");
		}
		
		// print end '*'
		printf("*\n");
	}
	
	// draw bottom line of '*'s
	// NOTE: this is a repeat of the code to print the top line of '*'s
	// we can also convert this to a function
	for(i = 1; i <= width; i++)
	{
		printf("*");
	}
	
	printf("\n");
	
	// here's the call to the function to do the same thing as the code above
	// what do we need to do to make this return the area of the rectangle
	// and then print it out?
	draw_hollow_rectangle(width, height);
	
	return(0);
}

// draws solid rectangle
void draw_rectangle(int width, int height)
{
	int j, i;
		
	// print 'height' lines
	for (j = 1; j <= height; j++)
	{
		// print a line '*' of length 'width'
		for (i = 1; i <= width; i++)
		{
			printf("*");
		}
		
		printf("\n");
	}
}

// draws solid rectangle and returns its area
int draw_rectangle_return_area(int width, int height)
{
	draw_rectangle(width, height);
	
	return (width * height);
}

// draws hollow rectangle
void draw_hollow_rectangle(int width, int height)
{
	int i, j;
	
	printf("\n");
	
	// draw top line of '*'s
	draw_line(width);
	
	// draw middle hollow lines - '*' spaces '*'
	for(j = 2; j < height; j++)
	{
		printf("*");
		
		for(i = 2; i < width; i++)
		{
			printf(" ");
		}
		
		printf("*\n");
	}
	
	// draw bottom line of '*'s
	draw_line(width);
	
	// how would we make this return the area of the rectangle?
}

// draws a line of '*'s for the given width
void draw_line(int width)
{	
	int i;
	
	for(i = 1; i <= width; i++)
	{
		printf("*");
	}
	printf("\n");
}	