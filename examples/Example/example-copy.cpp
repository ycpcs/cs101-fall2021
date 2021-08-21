#include<stdio.h>

int main(void)
{
  // declare 5 doubles: 4 for input variables, and the 5th for the average
  double a, b, c, d, realAve;

  // prompt for input, and then get input from keyboard
  // have to separate %lf's with commas in scanf
  printf("Enter 4 floating point numbers: ");
  scanf("%lf, %lf, %lf, %lf", &a, &b, &c, &d);

  //calc average of real numbers
  realAve = (a + b + c + d) / 4;
  
  // output the numbers, and their floating point average
  printf("The real average of %.1f + %.1f + %.1f + %.1f is %.2f\n\n", a, b, c, d, realAve); 
  
  // declare 5 integers: 4 for input, and  5th for the average
  int h, i, j, k, intAve;
  
  // prompt for input, and then get the input from the keyboard
  printf("Enter 4 integers: ");
  scanf("%i, %i, %i, %i", &h, &i, &j, &k);

  // calc average of integers
  intAve = (h + i + j + k) / 4;
  
  // output the numbers and their integer average, along with the remainder
  printf("The integer average of %i + %i + %i + %i is %i\n", h, i, j, k, intAve);
  printf("And the remainder is %i\n\n", intAve % 4);  
  
  // here are some examples of expressions, and operator precedence  
  printf(" a + b  *  c + d  = %.3f\n", a + b * c + d);
  printf("(a + b) * (c + d) = %.3f\n\n", (a + b) * (c + d));
  
  printf(" a + b  * c / d = %.3f\n", a + b * c / d);
  printf("(a + b) * c / d = %.3f\n\n", (a + b) * c / d);
  
  printf("3ab + 2b -  c + 1  = %.4f\n", 3 * a * b + 2 * b - c + 1);
  printf("3ab + 2b - (c + 1) = %.4f\n", (3 * a * b) + (2 * b) - (c + 1));
  
  return 0;
}
