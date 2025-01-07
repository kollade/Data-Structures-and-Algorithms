#include <iostream>
#include <string>
#include "insertionSort.h"







int main(){
    
    std::array<int, 6> argss = {5, 4, 3, 2, 1, 7};
     
     for (int i = 0; i < 5; i++)
         std::cout << insertionSort(argss)[i] << std::endl;
 
}
