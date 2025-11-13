
#ifndef stack_h
#define stack_h
#include "node.h"
class Stack {
	NodePtr top;
	int size;
public:
    void push(int);
    int pop();
    Stack();
    ~Stack();
};


void Stack::push(int x){
  NodePtr new_node=new NODE(x);
  if(new_node){
            new_node->set_next(top);
            top= t->get_next();
            size++;
   }
 
         cout<<"This is the top of stack"<<endl;
    
}

int Stack::pop(){
        NodePtr t=top;
    if(t!=NULL){
        int value;
        value=t->get_value();
        
        delete t;
        return value;
	
    }
}

Stack::Stack(){
    //initialize stack
    
}
Stack::~Stack(){
    //delete all remaning stack (i.e. pop all) 
    
}


#endif
