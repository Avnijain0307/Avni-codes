#include<iostream>
using namespace std;
int main(){
    char ch;
    cout<<ch<<endl;
    cin >> ch;
    if (ch>= 'a' && ch<= 'z'){
        cout<<"lowercase"<<endl;
    }
else if(ch>= 'A' && ch<= 'Z'){
    cout<<"uppercase"<<endl;
}
else{
    cout<<"numeric"<<endl;
}
}