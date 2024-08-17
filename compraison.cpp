#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    int b[n];
    int c[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
        b[i]=a[i];
        c[i]=a[i];
        
    }
     //Bubble Sort
    int counter = 1;
    int swap = 0;
    while(counter<n){
        for(int i=0;i<n;i++){
            if(a[i]>a[i+1]){
                int temp = a[i];
                a[i]=a[i+1];
                a[i+1]=temp;
                swap++;
            }
        }
        counter++;
    }
    cout<<"Bubble sort swap "<<swap<<" times"<<endl;
    //Insertition Sort
    int compraison=0;
    for(int i=1;i<n;i++){
        int current = b[i];
        int j = i-1;
        while(b[j]>current&&j>=0){
            b[j+1]=b[j];
            j--;
            compraison++;

        }
        b[j+1]=current;

    }
    cout<<"Insertiton sort comprasion "<<compraison<<" times"<<endl;
    // Selection Sort
    int selection =0;
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(c[i]>c[j]){
                int temp =c[j];
                c[j]=c[i];
                c[i]=temp;
                selection++;

            }
        }
    }
    cout<<"Selection sort swap "<<selection<<" times"<<endl;
    




}