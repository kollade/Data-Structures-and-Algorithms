#pragma once

class Queue{
    private:
        int front;
        int rear;
        int arr[5];

    public:
        Queue(){
            front = -1;
            rear = -1;

            for (int i = 0; i < 5; i++){
                arr[i] = 0;
            }
        }

        bool isEmpty(){
            if (front == -1 && rear == -1)
                return true;
            else
                return false;
        }

        bool isFull(){
            if ((rear+1) % 4 == front )
                return true;
            else
                return false;
            
        }
        void enqueue(int a){
            if (isFull()){
                std::cout << "Stack overflow" << std::endl;
                return;
            }
            else if(isEmpty()){
                front = rear = 0;
                arr[front] = a;
            }
            else{
                rear = (rear + 1) % 4;
                arr[rear] = a;
                
            }
        }

        int dequeue(){
            int x;
            if (isEmpty()){
                std::cout << "Stack Underflow" << std::endl;
                return 0;
            }
            else if(front == rear){
                x = arr[front];
                arr[front] = 0;
                front = -1;
                rear = -1;
                return x;

            }
            else{
                x = arr[front];
                arr[front] = 0;
                front ++;
                return x;
            }
        }

        int count(){
            if (isEmpty()){
                return 0;
            }
            else if (front == rear){
                return 1;
            }
            else{
                return rear - front + 1;
            }
        }

        void display(){
            if (isEmpty()){
                std::cout << "Null" << std::endl;
            }
            for (int i  = 0; i < 4; i++){
                std::cout << arr[i] << std::endl;
                }
        }

};
/*Queue q1;
 int input;
 int num;
 do {
     std::cout << "\n What operation do you wanna do?\n";
     std::cout << "0. End Program" << std::endl;
     std::cout << "1. Enqueue\n";
     std::cout << "2. Dequeue\n";
     std::cout << "3. Isempty()\n";
     std::cout << "4. Isfull()\n";
     std::cout << "5. Count()\n";
     std::cout << "6. Display()\n";
     std::cout << "7. Clear Screen\n";

     std::cin >> input;
     

     switch(input){
         case 0:
             break;
         
         case 1:
             std::cout << "Enter the number:";
             std::cin >> num;
             q1.enqueue(input);
             
             break;
         
         case 2:
             q1.dequeue();
             break;

         case 3:
             q1.isEmpty();
             break;

         case 4:
             q1.isFull();
             break;

         case 5:
             std::cout << q1.count() << std::endl;
             break;

         case 6:
             q1.display();
             break;

         case 7:
             std::system("clear");
             return 0;
             break;

         default:
             std::cout << "Invalid response" << std::endl;
             break;

         }
 } while (input != 0);
 
 
 return 0; */
