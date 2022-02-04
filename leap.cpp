#include <iostream>
using namespace std; 


int main() {

int g;
cout <<"insert a year ";
cin >> g;

if(g % 4 != 0){
  cout<< "common year" <<"\n";
}

else if(g % 100 != 0){
  cout<< "leap year" <<"\n";
}
  
else if(g % 400 != 0){
  cout<< "common year" <<"\n";
}
  
else {
  cout<< "leap year" <<"\n";
}

return 0;
}
