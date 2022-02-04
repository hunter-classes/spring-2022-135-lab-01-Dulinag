#include <iostream>
using namespace std; 

int main(){

int x;
cout << "Enter First Number: ";
cin >> x;

int y;
cout << "Enter Second Number: ";
cin >> y;

int z;
cout << "Enter Third Number: ";
cin >> z;

if (x < y && x < z){
  
  cout << "the smallest number is " << x << "\n";
}
else if (y < x && y < z) {
  
  cout << "the smallest number is " << y << "\n";
}
else {
cout << "the smallest number is " << z << "\n";
}

return 0;

}

