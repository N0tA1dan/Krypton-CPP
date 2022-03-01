#include <iostream>
#include <bits/stdc++.h>

using namespace std;

string reverseStr(string& str){
    int n = str.length();
    string revstr = str;

    // Swap character starting from two
    // corners
    for(int i = 0; i < n / 2; i++){
      swap(revstr[i], revstr[n - i - 1]);
    }
    return revstr;
}

string leftrotate(string &s, int d)
{
    reverse(s.begin(), s.begin()+d);
    reverse(s.begin()+d, s.end());
    reverse(s.begin(), s.end());

    return s;
}


// In-place rotates s towards right by d
string rightrotate(string &s, int d)
{
   leftrotate(s, s.length()-d);
   return s;
}


//Encryption process
string encrypt(string usrinp, string key){
  string cipher;
  string cipher2;
  string cipher3;
  string cipher4;
  string revkey = reverseStr(key);

  for(int i = 0; i<usrinp.length();i++){
    cipher += usrinp[i] ^ key[i];
    cipher2 += cipher[i] ^ revkey[i];
    cipher3 += cipher2[i] ^ 4;
    rightrotate(usrinp, usrinp.length());
}

  return cipher3;
}

// Decryption process
string decrypt(string usrinp, string key){
  string decipher;
  string decipher2;
  string decipher3;
  string revkey = reverseStr(key);

  for(int i=0; i<usrinp.length(); i++){
    decipher3 += usrinp[i] ^ 4;
    decipher2 += decipher3[i] ^ revkey[i];
    decipher += decipher2[i] ^ key[i];
    leftrotate(usrinp, usrinp.length());
    //leftrotate(usrinp, usrinp.length());
  }
  return decipher;
}


int main(){
  string enc = encrypt("hello world", "1234567890");
  string dec = decrypt("mjckh'p`}i`", "1234567890");
  cout << dec;
}
