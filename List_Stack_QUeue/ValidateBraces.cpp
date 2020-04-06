#include <iostream>
#include <stack>

bool validBraces( std::string str ){
    // Type your code here to validate the string
    
    // Traverse the string and use if/else statements to test whether the brackets are in proper order
    // A stack is a common tool for this problem
    // You don't need to store both the opening and closing braces on the stack to complete this problem
    std::stack<char> stack;

    if(str.length() == 0){
        return true;
    }
    if(str.length() == 1){
        return false;
    }
    
    for(int i =0 ; i < str.length(); i++){
        char c = str[i];
        if(c == '}'|| c == ')' || c == '>'){
            if(stack.size() == 0 ) 
               return false;
            if(c == '}' && stack.top() != '{') 
               return false;
            if(c == ')' && stack.top() != '(') 
               return false;
            if(c == '>' && stack.top() != '<') 
               return false;
            stack.pop();     
         } 
         else {
            stack.push(c);
        }
    }
    if(stack.size() == 0) 
      return true;
    return false;
}

int main(){
    
    // Read the string in and save it to a variable
    std::string str;
    std::cin>>str;
    // Call the validBraces() function on the string
    // Based on the results, print either "Valid" or "Invalid"
   if (validBraces(str))
      std::cout<<"Valid";
   else
      std::cout<<"Invalid";
    return 0;
}
