// Include the necessary header files
#include <iostream>
#include <vector>
template <class phu>
// Add appropriate syntax to create template function
void greaterRightElement(std::vector<phu> & vec) {
    // Use your solution you made for integers. 
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
   
   // Nothing needs to be in main.

   return 0;
}
