#include <iostream>
#include <cstring>
#include <math.h>
using namespace std;

int main()
{
   float sigma_x, sigma_y, epsilon_x, epsilon_y ;
   int q = pow(10,6);

   cout << "Enter the stress in X-direction in MPa" << endl;
   cin >> sigma_x;
   sigma_x = sigma_x *pow(10,6) ;

   cout << "Enter the stress in Y-direction in MPa " << endl ;
   cin >> sigma_y ;
   sigma_y = sigma_y * pow(10,6);

   cout << "Enter strain values in multiples of 10^(-3)" << endl << "[for eg.if strain is 15*10^(-3),enter 15 only]" << endl << endl;

   cout << "Enter the strain along the stress in X-direction " << endl;
   cin >> epsilon_x;
   epsilon_x = epsilon_x * 0.001;

   cout << "Enter the strain along the stress in Y-direction " << endl;
   cin >> epsilon_y;
   epsilon_y = epsilon_y * 0.001;

   float a = (sigma_y * epsilon_y)-(sigma_x * epsilon_x);

   float b = (sigma_x * epsilon_y)-(sigma_y * epsilon_x);

   float c = (sigma_y * sigma_y)-(sigma_x * sigma_x);


   float Youngs_modulus = c/a ;
   float Poissons_ratio = b/a ;

   printf("The value of Young's Modulus is %f \n",Youngs_modulus);
   printf("The value of Poisson's ratio is %f \n",Poissons_ratio);

return 0;
}

