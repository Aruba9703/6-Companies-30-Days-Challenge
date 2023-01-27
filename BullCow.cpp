#include<iostream>
using namespace std;

class Solution{

public:
 string getHint(string secret, string guess){
 
 //guess string ="0111" secret string ="1123"
 int secretFre [10] = {0};
 int guessFre [10] = {0};

//Bulls
int bull = 0,cows=0;
for(int i =0 ; i<secret.size(); i++){
//if match it is bull
if (secret[i] == guess[i]){
    bull++;
}else{
    secretFre[secret[i] - '0']++;
    guessFre[guess[i] - '0']++;
}
}

for(int i =0 ; i<10; i++){
    cows+= min(secretFre[i] , guessFre[i]);   //overlap values by taking minimum

    return to_string(bull)+"A" + to_string(cows)+"B";

}
 }

};