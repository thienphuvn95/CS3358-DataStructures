#include <iostream> // Only library you will need to include

std::string commaSeparateInt( int num ){
   // Always think base case first. The number will always be a positive number and will be getting smaller with each function call.
   
   // C++ has a function called to_string() which converts numerical values to strings. To call it use std::to_string(some value).
   if (num<10){
      return std::to_string(num);
   }
   else{
      std::string s=commaSeparateInt(num/10);
      s +=", ";
      s +=std::to_string(num%10);
      return s;
   }
}
int main(){

   int num = 234234209;
   
   // Call your function on num and save the results
   auto result=commaSeparateInt(num);
   // Print the results from your function call
   std::cout<<result;
    return 0;
}
