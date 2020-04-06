#include <iostream>
#include <vector>
#include <algorithm>
void rotateVector( std::vector<int> & vec, int shift){
    // There are multiple ways to shift the vector
    // Try using a second vector, or shifting the entire vector one place to the right with each iteration of a loop
    std::vector<int> vec2;
    shift=shift%vec.size();
   auto ptr=vec.end()-shift;
      for(std::vector<int>::iterator it=vec.begin();it!=vec.end()-1;it++){
         vec2.push_back(*ptr);
         ptr++;
         if (ptr == vec.end()){
            ptr=vec.begin();
            vec2.push_back(*ptr);
            ptr++;
            }
            }
   vec=vec2;
}

int main(){
    // Read in the integer for the amount of shifts and save it to a variable.
    int shift;
    std::cin>>shift;
    // Read the rest of the integers into a vector.
   int numbs;
   std::vector<int> vect;
   while (std::cin>>numbs){
      vect.push_back(numbs);}
    // Call the rotateVector() function on your vector.
    rotateVector(vect,shift);
    // Print out the contents of the vector.
    for (auto elements: vect)
      std::cout <<elements<<" ";
    return 0;
}
