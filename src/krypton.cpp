#include <iostream>
#include <string.h>
using namespace std;


int check(string usrinp, string key){
    // checks if user length is divisible by 16 evenly. If not then it will pad it with 0's until it is divisble by 16.
    if(usrinp.length() % 16 != 0){
        int pad = 16 * (usrinp.length() / 16 + 1) - usrinp.length();
        usrinp.append(pad, '0');
    }

    // This is how many rounds the encryption will preform
    int round = usrinp.length() / 16;
    cout << usrinp;
    return 0;
}

int main(){
    check("Hello World", "bruh");
}
