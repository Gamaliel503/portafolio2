#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;
int main(){

char c = 'T', d = 'S';
char *p1 = &c;
char *p2 = &d; 
char *p3;

p3 = &d; 
cout << "*p3 = " << *p3 << endl; // (1) __________9772

p3 = p1;
cout << "*p3 = " << *p3 // (2) __________6940
<< ", p3 = " << p3 << endl; // (3) ______9772

*p1 = *p2; 
cout << "*p1 = " << *p1 // (4) __________9772
 << ", p1 = " << p1 << endl; // (5) __________9772

 return 0;
}