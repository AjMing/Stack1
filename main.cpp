#include <iostream>
using namespace std;
struct NODE{
	 int data;
	NODE *nextPtr;
};
typedef NODE* NodePtr;
struct Stack{
    NodePtr top;
    int size;
};

void push(Stack &, int x);
int pop(Stack & );

int main() {
   NodePtr top=NULL; //top of your stack
  push(top,5);
  push(top,11);
  push(top,12);
  cout<< pop(top)<<endl;
  cout<< pop(top)<<endl;
  push(top,7);
   push(top,8);
  cout<< pop(top)<<endl;
  cout<< pop(top)<<endl;
  push(top,18);
  cout<< pop(top)<<endl;
  cout<< pop(top)<<endl;
} 

void push(Stack &s, int x){
  NODE *new_node=new NODE;
  if(new_node){
	  new_node->data=x;
 	  new_node-> nextPtr=s.top;
    s.top=new_node;
    s.size++;
   }
   cout<<"Adding "<< new_node->data << " to my stack "<<endl; 
}

int pop(Stack &s){

  if(top){ // if(top!=NULL)
 	  NodePtr t =top;
		int value;		
	
		value=t->data;
		top=t->nextPtr;
		
    delete t; 			
		return value;
  }
  cout<<"The stack is empty"<<endl;
  return 0;

	}
