#include <iostream>
using namespace std; 


int main(){

int a;
cout << "type a number: ";
cin >> a;

int b;
cout << "type a second number: ";
cin >> b;

if (a < b){
  cout << "the smaller number is " << a << "\n";


}
else if (b < a){

  cout << "the smaller number is " << b << "\n";

}
return 0;
}
