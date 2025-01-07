#include <iostream>
#include <string>
#include "bubbleSort.h"







int main(){
    
    std::array<int, 50> argss;
    for (int i = 49; i >= 0; i--)
        
        argss[i] = 50 % i ;
     
     for (int i = 0; i < 50; i++)
         std::cout << bubbleSort(argss) [i]<< std::endl;
 
}
