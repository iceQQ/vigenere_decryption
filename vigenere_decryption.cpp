#include <iostream>
#include <string.h>
//first input the text you want to decrypt
//second input the decryption keyword!!
using namespace std;

int main(){
    string word,key,newkey,neword[50],kappa;
    int i,c=0,key1,word1,sum;
    char wc,kc,sum1;
    cout << endl << "TEXT TO DECRYPT: ";
    getline(cin,word);
    cout << endl << "KEYWORD: ";
    getline(cin,key);
    newkey=key+key+key+key+key+key+key+key+key+key+key+key+key+key+key;

    for(i=0;i<word.size();i++){
        neword[i] = word[i];
    }
    for(i=0;i<word.size();i++){

        kappa = neword[i];
        wc = kappa[0];
        kc = newkey[c];
        c++;
        if(wc == ' '||wc =='0'||wc=='1'||wc=='2'||wc=='3'||wc==4||wc=='5'||wc=='6'||wc=='7'||wc=='8'||wc=='9'){
            c--;
            continue;

        }
        key1=int(kc)-97;
        word1=int(wc)-97;
        sum = word1-key1;

        if(sum < 0){
            sum = sum+26;
            sum = sum+97;
            sum1 = char(sum);
            neword[i] = sum1;
        }
        else {
            sum=sum+97;
            sum1 = char(sum);
            neword[i] = sum1;
        }

    }
    cout << word << "---> ";
    for(i=0;i<word.size();i++){
       cout << neword[i];
    }
    return 0;
}
