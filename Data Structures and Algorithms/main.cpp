#include <iostream>
#include <string>
//#include "queue.h"
//#include "sLinkedList.h"
//#include "dLinkedList.h"
#include "cLinkedList.h"







int main(){
    
    node2 n1(1, 100);
    node2 n2(2, 200);
    node2 n3(3, 300);
    node2 n5(4, 500);
    node2 n4(45, 333);
    
    circleLinkedList s_list(&n1);
    s_list.prependNode(&n2);
    s_list.appendNode(&n3);
    s_list.appendNode(&n5);
    s_list.appendNode(&n4);
    
    
    std::cout << "the size of the list is " <<  s_list.getSize() << std::endl;
    s_list.print();
    
    s_list.deleteNode(45);
    
    std::cout << "the size of the list is " <<  s_list.getSize() << std::endl;
    s_list.print();
}
