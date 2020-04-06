#include <iostream>
#include <vector>

std::vector<int>::iterator findIterator( std::vector<int> & vec, int target ){
    // Type your code here to find the target number iterator 
    for (std::vector<int>::iterator it= vec.begin(); it!=vec.end(); it++){
       if (*it==target)
          return it;
    }
    // The number will be in the vector, so use iterators to traverse the vector. 
	//When you find the target number, return the iterator.
    // You can see the value an iterator points to by using a dereference operator.
}

int main(){
    
    // Read in the first integer and save it to a variable.
    int  numbs;
	std::cout<<"Enter a interger: ";
    std::cin>>numbs;
    // Read in the rest of the integers into a vector.
    int elements;
    std::vector<int> vect;
    while (std::cin>>elements){
       vect.push_back(elements);}
    // Call the findIterator function, save the result to a variable.
    auto temp = findIterator(vect, numbs);
    // Start from the returned iterator and print the contents of the vector. 
    for(std::vector<int>::iterator it=temp; it!=vect.end();it++){
      std::cout<<*it<<" ";}

    return 0;
}
