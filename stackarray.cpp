#include <bits/stdc++.h>
using namespace std;

class stackUsingArray{
    int *data;
    int nextIndex;
    int capacity;


     public:

 stackUsingArray(int totalsize){
     data = new int[totalsize];
     capacity = totalsize;
     nextIndex = 0;
     

 }
 // we use next index cuz we have to return the no of elemnets in our stack
 int size(){
     return nextIndex;
 }
   bool isEmpty(){
       if(nextIndex == 0){
           return true;
       }else{
          return  false;
       }
   };
// insert element
void push(int element){
    if(capacity == nextIndex){
        cout<<"Stack is full "<<endl;
        return;
    }
    data[nextIndex] = element;
    nextIndex++;
}
int pop(){
       if(isEmpty()){
           cout<<"Stack is empty"<<endl;
           return INT_MIN;
       }
       nextIndex--;
       return data[nextIndex];

   }
  
   int top(){
        if(isEmpty()){
           cout<<"Stack is empty"<<endl;
           return INT_MIN;
       }
       return data[nextIndex - 1 ];
   }
};


int main(){
    stackUsingArray s(4);
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);

    cout<< s.top() <<endl;
    cout<< s.pop() <<endl;
    cout<< s.pop() <<endl;
    cout<< s.pop() <<endl;
    cout<< s.size() <<endl;
    cout<< s.isEmpty() <<endl;





}