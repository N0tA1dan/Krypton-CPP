#include <iostream>
#include <string.h>
using namespace std;

int check(string usrinp){
    if(usrinp.length() % 16 != 0){
        for(int i=0;i<usrinp.length();i++){
            if(usrinp.length() > 16){
                usrinp.append(15 - usrinp.length(), '0');
   }else{
        usrinp.append(16 - usrinp.length(), '0');
   } 
  }
 }
    cout << usrinp;
    return 0;
}

int main(){
    check("11111111111111111");
}
