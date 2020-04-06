#include <iostream> // Only library needed for this problem.

int climbLadder( int n ) {
   // There are a few base cases you can use. You know the number of ways to climb a ladder of n rungs when n is a small number.
   if(n <= 3) return n;
   return climbLadder(n-1) + climbLadder(n-2);
}

int main(){

   int ladderSize = 15;
   
   // Call your function
   auto result=climbLadder(ladderSize);
   //Print the result
   std::cout<<result;
    return 0;
}
