#include <iostream>
#include <string>
#include <sstream> 

int main(){
    std::string Name = "Luis";
    std::string Age = "45";
    std::stringstream ss;


    ss <<" the name is " + Name + " and age is " + Age <<std::endl;
    
    ss <<" inserting another line to see what happens"  <<std::endl;
    // std::cout << ss << std::endl;
    std::cout  <<" the name is " + Name + " and age is " + Age <<std::endl;
    std::cout  <<" ************************  after using stringstream " <<std::endl;
    std::string formattedString = ss.str();
    // Output the result
    std::cout << formattedString << std::endl;
    return 0;

}