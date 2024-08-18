#include<bits/stdc++.h>
using namespace std;
int main(){
    string type;
    int row ,cols;
    string memoryarrangment;
    int baseaddress;
    int i,j;
    //Input the type of array
    cout<<("Enter the Type of array (like int,char,float,double)");
    cin>>type;
    int elementSize;
    if (type=="int"){
        elementSize=sizeof(int);
    }else if(type=="char"){
        elementSize=sizeof(char);
    }else if(type=="float"){
        elementSize=sizeof(float);
    }else if(type=="double"){
        elementSize=sizeof(double);
    }else{
        cout<<"Unsupported type of array"<<endl;
    }
    //Input the size of an array
    cout<<"Enter the row no. : ";
    cin>>row;
    cout<<"Enter the column no.; ";
    cin>>cols;
    //Input memory arrangment arragmrnt
    cout<<"Enter the memory arrangment (ROW or COLUMNS) : ";
    cin>>memoryarrangment;
    cout<<"Enter the base adddress : ";
    cin>>baseaddress;
    cout<<"Enter the index (i,j) of the element : ";
    cin>>i>>j;
    
   //calculate the address
   int address = 0;
   if(memoryarrangment=="ROW"){
    address=baseaddress+((i*cols+j)*elementSize);
   }else if(memoryarrangment=="COLUMNS"){
    address=baseaddress+((j*cols+i)*elementSize);
   }else {
    cout<<"Unsupported memory arrangment"<<endl;
   }
   //output
   cout<<"The address of the element index("<<i<<","<<j<<") is "<<address<<endl;



    
}