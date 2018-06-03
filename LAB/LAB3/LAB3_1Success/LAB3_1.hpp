#include <iostream>
#include <string>
#include <stdlib.h>

const int stackSize = 100;
int stack1[stackSize];
int top;

void createStack(), push(int), traverseStack(), displayStack();
int pop(), isFull(), isEmpty();
int num;
char input[10];


void createStack() {
  top = -1;
}

int isFull(){
  if (top == stackSize -1) {
    return 1;
  }else{
    return 0;
  }
}

int isEmpty(){
  if (top == -1) {
    return 1;
  }else{
    return 0;
  }
}


void push(int num) {
  ++top;
  stack1[top] = num;
}

int pop(){
  return (stack1[top--]);
}

void displayStack() {
  int sp;
  if (isEmpty()) {
    std::cout << "Stack is empty" << '\n';
  }else{
    sp = top;
    while (sp != -1) {
      std::cout << stack1[sp] ;
      --sp;
    }
    std::cout << '\n';
  }
}
