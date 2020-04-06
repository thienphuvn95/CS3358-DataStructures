// Include the necessary header files
#include <iostream>
double Pow(double num, int power) {
   /* Always start with the base case. If you were computing square root of a number
      there are two cases when you will always know what the result is. One case is when the power is 0. 
      
      You must also deal with the case of n being negative. Remember 2^-2 is 1/(2^2).
   
   */
   if (power == 0)
      return 1;
   if (power ==1)
      return num;
   if (power ==-1)
      return 1/num;
   if (power %2 !=0)
      return num*Pow(num, power -1);
   else
      return Pow(num*num, power/2);
  
}

int main(){

   double num = 2.1;
   int power = 3;
   
   // Call your function
   auto result=Pow(num, power);
   // Print your results from your function
   std::cout<<result;
    return 0;
}
