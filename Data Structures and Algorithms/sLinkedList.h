#pragma once


class node{
public:
    int key;
    int value;
    node* next;
   
    
    node(){
        key = 0;
        value = 0;
        next = nullptr;
    }
    node(int k, int v){
        key = k;
        value = v;
        next = nullptr;
    }
};

class singlyLinkedList{
public:
    node* head;
    singlyLinkedList()
    {
        head = nullptr;
    }
    
    singlyLinkedList(node* h)
    {
        head = h;
        std::cout << "list created" << std::endl;
    }
    
    
    node* nodeExists(int key)//check if node exist using the key value
    {
        node* temp = nullptr;
        node* ptr = head;
        
        while(ptr != nullptr){
            if (ptr->key == key)
            {
                temp = ptr;
                return temp;
            }
            else
                ptr = ptr->next;
        }
        return temp;
    }
    

    void appendNode(node* n){
        
        node* ptr = head;
        if (nodeExists(n->key) != nullptr)
        {
            std::cout << "node already exists with key: " << n->key << std::endl;
            return;
        }
        if (ptr == nullptr){
            head = n;
            return;
        }
        
        while(ptr->next != nullptr)
        {
            ptr = ptr->next;
        }
        
        ptr->next = n;
        std::cout << "node Appended" << std::endl;
    }
    
    
    void prependNode(node* n){
        node* ptr = head;
        if (nodeExists(n->key) != nullptr)
        {
            std::cout << "node already exists with key: " << n->key << std::endl;
            return;
        }
        if (ptr == nullptr){
            head = n;
            return;
        }
        
        n->next = head;
        head = n;
        std::cout << "node prepended" << std::endl;
        
    }
    
    
    void insertNode(int key, node* n) {
        // Check if the key exists
        node* existingNode = nodeExists(key);
        if (existingNode == nullptr) {
            std::cout << "Node with key: " << key << " does not exist" << std::endl;
            return;
        }

        // Check if the node to insert already exists
        if (nodeExists(n->key) != nullptr) {
            std::cout << "A node with key: " << n->key << " already exists" << std::endl;
            return;
        }

        // Insert the new node
        n->next = existingNode->next;
        existingNode->next = n;
        std::cout << "Node inserted successfully" << std::endl;
    }
    
     
    void deleteNode(int k)
    {
        if (nodeExists(k) == nullptr)
        {
            std::cout << "Node with key: " << k << " deos not exist" << std::endl;
            return;
        }
        node* ptr = head;
        if (ptr->key == k)
        {
            head = ptr->next;
            ptr->next = nullptr;
        }
        else
        {
            node* prev = nullptr;
            while(ptr->key != k){
                prev = ptr;
                ptr = ptr->next;
            }
            prev->next = ptr->next;
            ptr->next = nullptr;
            delete ptr;
            std::cout << "Node has been deleted" << std::endl;
        }
        
        
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
        node* temp = head;
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
            node* ptr = head;
            while (ptr != nullptr){
                std::cout << ptr->key << ". " << ptr->value << std::endl;
                ptr = ptr->next;
            }
        }
        
       
    }
    
    
private:
    u_int size = 0;
};
