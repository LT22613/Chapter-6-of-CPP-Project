/*
4.	Iterator scope
Declare a size_t iterator outside the loop, use it in the for loop, and print its value after the loop ends.
*/

#include <iostream>

int main(){

    size_t i{0};

    for (i ; i < 10 ; ++i){
        std::cout << "Hello" << std::endl;
    }

    std::cout << i;
    



}
