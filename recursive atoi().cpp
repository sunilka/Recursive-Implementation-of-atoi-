//given a string we convert it into a number and then print the number

#include<iostream>
#include<math.h>
#include<cstdlib>
using namespace std;

int converttoNumber(string s,int n){
    
    //base case:
    if(s==""){
        cout<<n<<endl;
        return n;
        
    }
    
    else{
        n = n*10 + abs(48 - (int)s[0]);
        s.erase(0,1);
        converttoNumber(s,n); //recursive call to the function again
    }
}

int main(){
    string s;
    cin>>s;
}