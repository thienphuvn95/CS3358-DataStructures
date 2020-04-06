// Include the necessary header files
#include <iostream>
#include <vector>
void greaterRightElement(std::vector<int> & vec) {
    // Start from the rear of the vector and work backwards
   auto ptr=vec.end()-1;
   auto max=*(vec.end()-1);
   
   for(int i=0; i<vec.size()-1;i++){
       if (*ptr< max){
          *ptr=max;
          ptr--;
          }
      else{
         max=*ptr;
         ptr--;
         }
    }
   vec.push_back(*(vec.end()-1));
   vec.erase(vec.begin());
}

int main(){
   
   // Read input into a vector.
   int numbs;
   std::vector<int> vec;
   while(std::cin>>numbs){
      vec.push_back(numbs);}
   // Call your function on the vector.
   greaterRightElement(vec);
   // Print contents of the vector.
   for (auto i: vec)
      std::cout<<i<<" ";
   return 0;
}
