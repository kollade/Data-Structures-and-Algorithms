#include <iostream>
#include <string>
#include "selectionSort.h"







int main(){
    
    std::array<int, 5> argss = {5, 4, 3, 2, 1};
    
    for (int i = 0; i < 5; i++)
        std::cout << selectionSort(argss)[i] << std::endl;
 
}
