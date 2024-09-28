#include<bits/stdc++.h>
using namespace std;
void toh(int n , char  s,char a,char d){
    if(n==0) return ;
    if(n==1){
        cout <<n<<" move "<<s<< " to "<<d<<endl;

    }
    toh(n-1 , s, d , a) ;
                cout <<n<<" move "<<s<< " to "<<d<<endl;
    toh(n-1,a,s,d);

}
int main(){
    toh(3,'x','y','z');
}