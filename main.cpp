/*
Sum of first N numbers
Write a for loop to calculate and print the sum of the first 20 natural numbers.
*/


#include <iostream>

int main(){

    size_t i{1};
    int sum {0};

    for ( ; i<21 ; ++i){
        sum += i;
    }
    
    std::cout << "The sum of the first 20 natural numbers is: " << sum;



    return 0;
}