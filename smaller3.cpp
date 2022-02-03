#include <iostream>
using namespace std; 

int main(){

int x;
cout << "type a number: ";
cin >> x;

int y;
cout << "type a second number: ";
cin >> y;

int z;
cout << "type a third number: ";
cin >> z;

if (x < y && x < z){
  
  cout << "the smallest number is " << x << "\n";
}
if (y < x && y < z) {
  
  cout << "the smallest number is " << y << "\n";
}
else {
cout << "the smallest number is " << z << "\n";
}

return 0;

}

