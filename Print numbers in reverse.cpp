/*
2.	Print numbers in reverse
Use a for loop to print the numbers from 10 to 1 in reverse order.
*/

#include <iostream>

int main(){

    for(size_t i{10} ; i>0 ; --i){
        std::cout << i << " ";
    }



    return 0;
}
