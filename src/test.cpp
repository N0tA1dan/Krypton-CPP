#include <iostream>
#include <string>
using namespace std;

// make advanced version of XOR encryption.
// First gather the length of the plain-text and see if it is evenly divisible by 32.
// The plain-text must be 256 bits long and so should the key.
// in order for XOR encryption to work the key and plain-text length should be the same
// Next implement XOR encryption with some added features and you're set.
// Key should be 256 bits long


int encrypt(string usrinp, string key){
    string cipher_1;
    string cipher_2;
    // checks if user length is divisible by 32 evenly. If not then it will pad it with 0's until it is divisble by 32
    if(usrinp.length() % 32 != 0){
        int pad = 32 * (usrinp.length() / 32 + 1) - usrinp.length();
        usrinp.append(pad, '0');
    }

    for(int i=0; i < usrinp.length(); i++){
        cipher_1 = usrinp[i] ^ key[i];
        cout << cipher_1;
    }

    return 0;
}

int decrypt(string userinp, string key){
    string cipher_1;
    string cipher_2;

    for(int i =0;i<32; i++){
        cipher_1 = userinp[i] ^ key[i];

        cout << cipher_1;
    }

    return 0;
}

int main(){
    encrypt("joemamagae", "A%D*G-KaPdSgVkYp3s6v8y/B?E(H+MbQ");
    //decrypt("+J!G&@*♠1☺cWf[i@♥C♠I▼r☼u↑x←}Ra", "A%D*G-KaPdSgVkYp3s6v8y/B?E(H+MbQ");
}
