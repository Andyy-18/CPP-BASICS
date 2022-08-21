#include<bits/stdc++.h>
using namespace std;

// to convert uppercase to lowercase
char tolowercse(char ch){
    if(ch>='a' && ch<='z')
        return ch;
    else{
        char temp = ch - 'A' + 'a';
        return temp; 
    }
}

bool checkpalindrome(char a[],int n){
    int s=0;
    int e=n-1;

    while(s<=e){
        if(tolowercse(a[s]) != tolowercse(a[e])){
            return 0;
        }
        else{
            s++;
            e--;
        }
    }
    return 1;
}

void reverse(char name[], int n){
    int s=0;
    int e=n-1;

    while(s<e){
        swap(name[s++],name[e--]);
    }
}

int getlength(char name[]){
    int count=0;
    for(int i=0; name[i] != '\0'; i++){
        count++;
    }
    return count;
}

char getMaxOccChar(string s){
    int arr[26]={0};
//  create an array to count of charecters
    for(int i=0; i<s.length();i++){
        char ch=s[i];
        int num=0;
        // lowercase
        if(ch>='a' && ch<='z'){
            num=ch-'a';
        }
        else{//uppercase
            num=ch-'A';
        }
        arr[num]++;
    }
//  find maximum occ charecter
    int maxi=-1,ans=0;
    for(int i=0;i<26;i++){
        if(maxi<arr[i]){
            ans=i;
            maxi=arr[i];
        }
    }

    char finalans ='a'+ans;
    return finalans;
}



int main()
{
/*
    char name[20];
    cout<<"Enter your name: "<<endl;
    cin>>name;

    // name[3]='\0';
    int n=getlength(name);

    cout<<"Your name is "<<name<<endl;
    cout<<"Length : "<<n<<endl;

    reverse(name,n);
    cout<<"Your name is "<<name<<endl;

    cout<<"Palindrome or not: "<<checkpalindrome(name,n)<<endl;
    
//  convert uppercase to lowercase
    cout<<"Charecter is "<<tolowercse('A')<<endl;
*/

    string s;
    cin>>s;
    cout<<getMaxOccChar(s)<<endl;
    
return 0;
}