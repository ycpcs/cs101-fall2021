#include<stdio.h>

int main(void)
{
  /*
  
  // given a 0-60 mph time,
  //   what is the average G-force Dr. Blanding's Tesla can pull?
  //
  // 0-60 mph in 3.2s, t = 3.2s
  // v = at, a = v/t
  // g's = a / 9.8 m/s
  // m/s = mph * 1609 (m/mile) / 3600 s/hr) =
  //    60 * 1609/3600 = 60 * 0.4469 = 26.82 m/s
  // a = v/t = 26.82 (m/s) / 3.2 s = 8.38 m/s^2
  // g's = a / g = 8.38 m/s^2 / 9.8 m/s^2 = 0.855 g's

  double v;
  double t;
  double a;
  double gs;
  
  // prompt user for 0-60 time
  printf("Enter 0-60 time: ");
  scanf("%lf", &t);
  
  // calculate acceleration in Gs
  // at least one of the conversion factors must be a double in order for 
  // division to result in a non-zero quotient
  v = 60.0 * (1609.0 / 3600);
  a = v / t;
  gs = a / 9.8;
  
  // output result
  printf("\nDr. Blanding's Tesla Model S can pull a neck-snapping %.4f G's\n", gs);
  
  */
  
  int menu = -1;
  
  // start "forever" loop
  while (true)
  {
      // now get the stats for the various Teslas in the Kinsley parking lot
      printf("\nEnter a number from the following menu:\n");
      printf("1 - Dr. Blanding (Model S LR)\n");
      printf("2 - Dr. Ruzybayev (Model 3 Dual Motor)\n");
      printf("3 - Professor Hake (Model 3 Dual Motor)\n");
      printf("4 - Mrs. Professor Hake (Model 3 SR+)\n");
      printf("0 - Quit\n\n");
      
      // get menu selection from user
      scanf("%i", &menu);
      
      // output selected information
      if (menu == 1)
      {
          printf("Dr. Blanding's Midnight Grey Model S:\n   0-60 in 2.6s\n   100kWh battery\n   370 mile range\n   3.5 cents per mile\n");
      }
      else if (menu == 2 || menu == 3)
      {
          if (menu == 2)
          {
              printf("Dr. Ruzybayev's Black Model 3 Dual Motor:\n");
          }
          else
          {
              printf("Prof. Hake's Red Model 3 Dual Motor:\n");
          }
          printf("   0-60 in 4.0s\n   75kWh battery\n   310 mile range\n   3.0 cents per mile\n");
      }
      else if (menu == 4)
      {
          printf("Mrs. Professor Hake's Blue Model SR+:\n   0-60 in 5.2s\n   50kWh battery\n   240 mile range\n   2.4 cents per mile\n");
      }
      // for anything other valid input
      else if (menu != 0)
      {
          printf("You entered an invalid value - try again\n");
      }
      // else if must be a 0
      else
      {
          break;
      }
  }
  return 0;
}
