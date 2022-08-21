#include<bits/stdc++.h>
using namespace std;

bool checkpalindrome(string str,int i,int j){
    //base case
    if(i>j)
        return true;

    if(str[i]!=str[j]){
        return false;
    }
    else{
        //RC
        return checkpalindrome(str,i++,j--);
    }
}

int main()
{
    string name;
    cout<<"Enter your name: "<<endl;
    cin>>name;
    cout<<endl;
    bool ispalindrome=checkpalindrome(name,0,name.length()-1);
    if(ispalindrome){
        cout<<"Its a palindrome."<<endl;
    }
    else{
        cout<<"Its not a palindrome."<<endl;
    }
return 0;
}