#include <iostream>
#include <string>
using namespace std;

int main(){
    string str;
    getline(cin,str);
    int alp[26];
    for(int i=0; i<26; i++){
        alp[i]=0;
    }
    //97 to 122
    for(int i=0; i<str.length(); i++){
        int ch = str[i];
        int index = 97-ch;
        alp[index]++;
    }
    int dis = 0;
    for(int i=0; i<26; i++){
        if(alp[i]!=0){
            dis++;
        }
    }
    if(dis%2!=0){
        cout<<"IGNORE HIM!";
    }else{
        cout<<"CHAT WITH HER!";
    }
    return 0;
}
