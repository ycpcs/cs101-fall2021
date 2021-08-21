#include<stdio.h>

int main(void)
{
  // Example 1:
  // Determine a movie ticket price based on age:
  // child (age <= 6) is $4.00
  // otherwise (age > 6) is $6.50
  
  // User enters age, program prints ticket price
  int age;
  double price = 6.50;
  
  printf("Enter your age: ");
  scanf("%i", &age);
  
  if(age <= 6)
  {
      price = 4.00;
  }
  
  printf("Ticket Price: %0.2f\n", price);
  
  
  
  // Example 2:
  // Convert a user-supplied percentage grade into a letter grade.
  // Reject invalid user input: a percentage grade outside the range of 0 to 100 inclusive.
  //
  // User enters grade between 0 and 100
  //	
  //	if grade is in range 0 to 100 output:
  //		A  for 90 to  100
  //		B+ for 85 to < 90
  //		B  for 80 to < 85
  //		C+ for 75 to < 80
  //		C  for 70 to < 75
  //		D  for 60 to < 70
  //		F  otherwise
  //	otherwise output:
  //        grade is invalid

  int exam;
  
  printf("Enter exam score (0-100): ");
  scanf("%i", &exam);
  
  if (exam >= 0 && exam <= 100)
  {
      if(exam >= 90)
      {
          printf("Grade: A");
      }
      else if(exam >= 85 && exam < 90)
      {
          printf("Grade: B+");
      }
  }
  else
  {
      printf("Exam is invalid");
  }

  return 0;
}
