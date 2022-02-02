#include <bits/stdc++.h>
using namespace std;
#define ll  long long int

class linked_list{
    public:
    ll data;
    linked_list *next;

    linked_list(){
        this->next=NULL;
}
    linked_list(ll data){
        this->data=data;
        this->next=NULL;

    }
  linked_list *add(ll data , linked_list *head ){
    
   // CASE ! -- linked list is empty
   if(head==NULL){
       linked_list *temp = new linked_list(data);
       head = temp;

   } else{
       linked_list *temp = head;
       while(temp->next!=NULL){
           temp = temp->next;
           

       }
  temp->next = new linked_list(data);
   }     
  
return head;
  }

void print(linked_list *head){
    auto temp = head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
        

    }
}

};




int main(){
  linked_list *head = NULL;
  head=head->add(1,head);
  head=head->add(2,head);
  head=head->add(3,head);
  head=head->add(4,head);

head->print(head);
}
