#include <iostream>
#include <string>
//#include "queue.h"
//#include "sLinkedList.h"
//#include "dLinkedList.h"
//#include "cLinkedList.h"
#include "BinarySearch.h"







int main(){
    std::array<int, 7> arrays= {1, 2, 3, 4, 5, 6, 7};
    int searchno;
    std::cout << "Enter the number you want to search:\n";
    std::cin >> searchno;
    if ( binarySearch<7>(arrays, searchno) == -1)
    {
        std::cout << "no match found" << std::endl;
    }
    else
        std::cout << "match found in: " <<  binarySearch<7>(arrays, searchno) << std::endl;
    
    //std::cout << binarySearch<7>(arrays, 6) << std::endl;
}
