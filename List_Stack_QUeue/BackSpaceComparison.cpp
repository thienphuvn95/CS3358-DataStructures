// Include the necessary header files
#include <iostream>
#include <stack>
#include <string>
bool backspaceCompare(std::string first, std::string second) {
    // Use a stack to imitate a text editor input characters
   std::stack<char> ss; 
    std::stack<char> st;
    for(auto x:first){
        if(x != '%')
            ss.push(x);
        else if( !ss.empty() && x == '%')
            ss.pop();
    }
    for(auto x:second){
        if(x != '%')
            st.push(x);
        else if(!st.empty() and x == '%')
            st.pop();
    }
    if(ss == st)
        return true;
    else
        return false;
}
int main() {
    // Read input into two strings
    std::string str1, str2;
    std::cin>>str1;
    std::cin>>str2;
    // Call your function
    if (backspaceCompare(str1, str2))
      std::cout<<"Strings are equal";
   else
      std::cout<<"Strings are not equal";
    // Print the appropriate response
       
    return 0;
}
