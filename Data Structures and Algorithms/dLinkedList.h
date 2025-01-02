#pragma once


class node1{
public:
    int value;
    node1* next;
    node1* prev;
    int key;
    
    node1()
    {
        value = 0;
        next = nullptr;
        prev = nullptr;
        
    }
    node1(int k, int val){
        value = val;
        key = k;
        next = nullptr;
        prev = nullptr;
    }
    

};


class doublyLinkedList{
public:
    node1* head;
    
    doublyLinkedList(){
        head = nullptr;
    }
    doublyLinkedList(node1* n)
    {
        head = n;
        head->prev = nullptr;
    }
    
    node1* nodeExists(int k) {
        node1* ptr = head;
        if (ptr == nullptr) {
            std::cout << "This list is empty" << std::endl;
            return nullptr;
        }
        while (ptr != nullptr) {
            if (ptr->key == k) {
                return ptr; // Return the node if the key matches
            }
            ptr = ptr->next; // Move to the next node
        }
        return nullptr; // Key not found
    }

    
    void appendNode(node1* n)
    {
        node1* noddy = nodeExists(n->key);
        node1* ptr = head;
        if ( noddy != nullptr)
        {
            std::cout << "A node with key " << n->key << " already exists\n";
            return;
        }
        if(head == nullptr)
        {
            head = n;
            std::cout << "Node Appended\n";
            return;
        }
        while(ptr->next != nullptr){
            ptr = ptr->next;
        }
        ptr->next = n;
        n->prev = ptr;
        std::cout << "Node Appended\n";
           
    }
    
    void prependNode(node1* n)
    {
        node1* noddy = nodeExists(n->key);
        if ( noddy != nullptr)
        {
            std::cout << "A node with key " << n->key << " already exists\n";
            return;
        }
        if (head == nullptr){
            head = n;
            std::cout << "Node Prepended\n";
            return;
        }
            
        head->prev = n;
        n->next = head;
        head = n;
        std::cout << "Node Prepended\n";
    }
    
    void insertNode(int k, node1* n)
    {
        node1* ptr = nodeExists(k);
        node1* future = ptr->next;
        
                
        if(ptr == nullptr)
        {
            std::cout << "No node with key: " << k << " exists in the List\n";
            return;
        }
        if (nodeExists(n->key) != nullptr)
        {
            std::cout << "Node with key " << n->key << " already exists\n";
            return;
        }
        
        n->prev = ptr;
        n->next = future;
        future->prev = n;
        ptr->next = n;
        
        std::cout << "Node inserted\n";
        
        
    }
    
    void deleteNode(int k)
    {
        node1* ptr = nodeExists(k);
        node1* past = ptr->prev;
        node1* future = ptr->next;
        if (ptr == nullptr)
        {
            std::cout << "No node with key: " << k << "exists in the list\n";
            return;
        }
        if (head == ptr)
        {
            future->prev = nullptr;
            head = future;
            ptr->next = nullptr;
            return;
        }
        past->next = future;
        future->prev = past;
        ptr->prev = nullptr;
        ptr->next = nullptr;
         
    }
    void update(int k, int val)
    {
        if (nodeExists(k) == nullptr)
        {
            std::cout << "Node with key: " << k << " deos not exist" << std::endl;
            return;
        }
        nodeExists(k)->value = val;
    }
    int getSize(){
        int size = 1;
        if (head == nullptr)
            return 0;
        node1* temp = head;
        while (temp->next != nullptr)
        {
            size++;
            temp = temp->next;
        }
        return size;
    }
    void print(){
        
        if (head == nullptr)
        {
            std::cout << "Empty list" << std::endl;
        }
        else
        {
            node1* ptr = head;
            while (ptr != nullptr){
                std::cout << ptr->key << ". " << ptr->value << std::endl;
                ptr = ptr->next;
            }
        }
        
       
    }
};

