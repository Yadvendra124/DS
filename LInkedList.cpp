#include<bits/stdc++.h>
using namespace std;
struct node{
    char v;
    node*next;
};
class Linkedlist{
    node*start;
    public:
    Linkedlist(){start = NULL;}
    //Add at begin
    void addatbegin(char x){
        node*t;
        t = new node;
        t->v = x;
        t -> next=NULL;
        if(start==NULL){start =t;}
        else{
            t -> next =start;
            start = t;
        }
    }
    void display(){
        node*temp;
        temp = start;
        while(temp!=NULL){

            cout<<temp->v<<endl;;
            temp=temp->next;
        }
    }
    int getLength(){
        if(start==NULL){return 0;}
        node*temp ;
        temp = start;
        int l =0;
        while(temp!=NULL){
            l++;
            temp = temp->next;

        }
        return l;
    }
    void append(char x){
        node*t;
        t=new node;
        t->v=x;
        t->next=NULL;
        if(start==NULL){
            start = t;
            return;
        }
        node*temp;
        temp=start;
        while(temp->next!=NULL) temp=temp->next;
        temp->next=t;
        
    }
    void addatPOS(char x,int POS){
        node*t=new node;
        t->v =x;
        t->next=NULL;
        if(POS<1){addatbegin(x);return;}
        if(POS+1>getLength()){append(x);return; }
        node*temp=start;
        for(int i=1;i<POS;i++) temp = temp->next;
            t->next=temp->next;
            temp->next=t;
    }
    void displayMORE(){
        node*t=start;
        while(t!=NULL){
            cout<<"Address : "<<t<<" ,Value : "<<t->v<<" ,Next : "<<t->next<<endl;
            t=t->next;
        }
    }
    void removeFirst(){
        if(start==NULL){
            cout<<"Empty";
            return;
        }
        node*t;
        t=start;
        start=start->next;
        delete t;

    }
    void removeLast(){
        if(start == NULL){
            cout<<"Empty";
            return;
        }else if(start->next==NULL){
            removeFirst();
        }else{
            node*temp=start;
            while(temp->next->next!=0) temp=temp->next;
            node*t=temp->next;
            temp->next=NULL;
            delete t;
        }
    }
    void removeNTH(int POS){
        if(POS==1){return removeFirst();}
        int n = getLength();
        if(POS==n){ return removeLast();}
        node*temp=start;
        for(int i=1;i<POS-1;i++){
            temp=temp->next;
        }
        node*t=temp->next;
        temp->next=temp->next->next;
        delete t;


    }
};
int main(){
    Linkedlist l;
    l.addatbegin('c');
    l.addatbegin('s');
    l.addatbegin('y');
    // l.display();
    l.append('h');
    l.addatPOS('b',1);
    l.removeLast();
    l.display();
    l.removeNTH(4);
    l.display();
    // l.displayMORE();
    // l.display();
     cout<<l.getLength();

}