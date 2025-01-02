#include <iostream>
#include <string>
//#include "queue.h"
#include "sLinkedList.h"
#include "dLinkedList.h"






int main(){

    node1 n1(1, 100);
    node1 n2(2, 200);
    node1 n3(3, 300);
    node1 n5(4, 500);
    node1 n4(45, 333);
    
    doublyLinkedList s_list(&n2);
    
    //s_list.appendNode(&n2);
    
    s_list.appendNode(&n3);
    
    s_list.appendNode(&n5);
    s_list.prependNode(&n2);
    s_list.print();
    std::cout << s_list.getSize() << std::endl;
    s_list.insertNode(2, &n4);
    s_list.print();
    s_list.deleteNode(3);
    std::cout << s_list.getSize() << std::endl;
    
     
    


}
