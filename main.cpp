/*
1.	Print "Hello, World!" multiple times
Write a for loop that prints "Hello, World!" 15 times.
*/


#include <iostream>

int main(){
    for(size_t i{1} ; i <16 ; ++i){
        std::cout << i << ": Hello, World!" << std::endl;
    }

}