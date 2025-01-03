#pragma once

class node2{
public:
    int value;
    node2* next;
    int key;
    
    node2()
    {
        value = 0;
        next = nullptr;
        //prev = nullptr;
        
    }
    node2(int k, int val){
        value = val;
        key = k;
        next = nullptr;
    }
};

class circleLinkedList
{
public:
    node2* head;
    
    circleLinkedList()
    {
        head = nullptr;
    }
    
    circleLinkedList(node2* h)
    {
        head = h;
        head->next = head;
    }
    
    node2* nodeExists(int k)
    {
        node2* ptr = head;
        if (ptr == nullptr) {
            std::cout << "This list is empty" << std::endl;
            return nullptr;
        }
        
        do{
            if (ptr->key == k){
                return ptr;
            }
            ptr = ptr->next;
        }while(ptr != head);
        return nullptr;

    }
    
    void appendNode(node2* n)
    {
        node2* ptr = head;
        node2* exist = nodeExists(n->key);
        if (exist != nullptr)
        {
            std::cout << "Node with key: " << n->key << " already exists\n";
            return;
        }
        if (head == nullptr)
        {
            head = n;
            n->next = n;
            return;
            std::cout << "Node appended\n";
        }
        if (head->next == head)
        {
            head->next = n;
            n->next = head;
        }
        else
        {
            while (ptr->next != head)
            {
                ptr = ptr->next;
            }
            ptr->next = n;
            n->next = head;
        }
        std::cout << "Node appended\n";
    }
    
    void prependNode(node2* n)
    {
        node2* exist = nodeExists(n->key);
        node2* ptr = head;
        if (exist != nullptr)
        {
            std::cout << "Node with key: " << n->key << " already exists\n";
            return;
        }
        if (head == nullptr)
        {
            head = n;
            head->next = n;
            std::cout << "Node prepended\n";
            return;
        }
        else
        {
           do
           {
               if(ptr->next == head)
               {
                   ptr->next = n;
                   n->next = head;
                   head = n;
                   std::cout << "Node prepended\n";
                   return;
               }
               else
                   ptr = ptr->next;
           }while(ptr->next != head);
        }
        std::cout  << "Node prepended\n";
    }
    
    void insertNode(int k, node2* n)
    {
        node2* ptr = nodeExists(n->key);
        if (nodeExists(k) == nullptr)
        {
            std::cout << "No node with key: " << k << " exists\n";
            return;
        }
        if (ptr != nullptr)
        {
            std::cout << "Node with key: " << n->key << " already exists\n";
            return;
        }
        if (nodeExists(n->key) == head)
        {
            head->next = n;
            n->next = head;
        }
        else
        {
            n->next = ptr->next;
            ptr->next = n;
        }
        
    }
    
    void deleteNode(int k)
    {
        node2* ptr = nodeExists(k);
        node2* temp = head;
        if (ptr == nullptr)
        {
            std::cout << "No node with key: " << k << "exists\n";
            return;
        }
        if (ptr == head)
        {
            std::cout << "List deleted\n";
            return;
        }
        do{
            if (temp->next == ptr){}
            else
            {
                temp = temp->next;
            }
                
        }while(temp->next != ptr);
        
        temp->next = ptr->next;
        ptr->next = nullptr;
        
    }
    
    
    
    void updateNode(int k, int val)
    {
        
        node2* ptr = nodeExists(k);
        if (ptr == nullptr)
        {
            std::cout << "No node with key: " << k << " exists\n";
            return;
        }
        ptr->value = val;
    }
    
    
    int getSize()
    {
        int size = 1;
        if (head == nullptr)
            return 0;
        node2* temp = head;
        while (temp->next != head)
        {
            size++;
            temp = temp->next;
        }
        return size;
    }
    
    
    void print()
    {
        
        if (head == nullptr)
        {
            std::cout << "Empty list" << std::endl;
        }
        else
        {
            node2* ptr = head;
            do
            {
                std::cout << ptr->key << ". " << ptr->value << std::endl;
                ptr = ptr->next;
            }while(ptr != head);
        }
    }
};

/* node2 n1(1, 100);
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
 s_list.print();*/
