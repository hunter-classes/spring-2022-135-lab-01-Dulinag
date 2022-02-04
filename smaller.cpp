#include <iostream>
using namespace std; 


int main(){

int a;
cout << "Enter First Number: ";
cin >> a;

int b;
cout << "Enter a Second Number: ";
cin >> b;

if (a < b){
  cout << "the smaller number is " << a << "\n";


}
else if (b < a){

  cout << "the smaller number is " << b << "\n";

}
return 0;
}
