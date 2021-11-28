#include <iostream>
#include <string.h>
using namespace std;

// make advanced version of XOR encryption. 
// First gather the length of the plain-text and see if it is evenly divisible by 32.
// The plain-text must be 256 bits long and so should the key.
// in order for XOR encryption to work the key and plain-text length should be the same
// Next implement XOR encryption with some added features and you're set.


int check(string usrinp, string key){
    // checks if user length is divisible by 32 evenly. If not then it will pad it with 0's until it is divisble by 32
    if(usrinp.length() % 32 != 0){
        int pad = 32 * (usrinp.length() / 32 + 1) - usrinp.length();
        usrinp.append(pad, '0');
    }

    cout<<usrinp;
    return 1;
}

int main(){
    check("Hello0000000000000000000000000000", "bruh");
}
