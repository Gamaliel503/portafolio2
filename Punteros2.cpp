#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;
int main(){

 char bloques[3] = {'A','B','C'};
 char *ptr = &bloques[0];
 char temp;
 temp = bloques[0]; // __________A
 cout << "*temp bloques[0] = " << temp << endl; // (1) __________
 temp = *(bloques + 2); // __________C
  cout << "*temp bloques[2] = " << temp << endl; // (1) __________
 temp = *(ptr + 1); // __________B
   cout << "*(ptr + 1) = " << temp << endl; // (1) __________
 temp = *ptr; // __________A
    cout << "*ptr= " << temp << endl; // (1) __________
 ptr = bloques + 1; // __________
     cout << "ptr = *bloques + 1 = " << ptr << endl; // (1) __________
 temp = *ptr; // __________B
cout << "temp = " << temp << endl; // (1) __________
 temp = *(ptr + 1); // __________C
 cout << "temp = *(ptr + 1) = " << temp << endl; // (1) __________
 ptr = bloques; // __________
  cout << "ptr = " << ptr << endl; // (1) __
 temp = *++ptr; // __________B
   cout << " temp = *++ptr = " << temp << endl; // (1) __
 temp = ++*ptr; // __________C
cout << "temp = ++*ptr = " << temp << endl; // (1) __
 temp = *ptr++; // __________C
 cout << "temp = *ptr++ " << temp << endl; // (1) __
 temp = *ptr; // __________C
  cout << "temp = *ptr " << temp << endl; // (1) __
 return 0;
}
