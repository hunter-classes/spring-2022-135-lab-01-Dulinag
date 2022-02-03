#include <iostream>
using namespace std; 



int main(){
int g;
cout <<"insert a month (number) ";
cin >> g;

int f;
cout << "enter a year ";
cin >> f;

if (g == 1 || g == 3 || g == 5 || g == 7|| g == 10 || g == 8 || g == 12){
  cout<<"31"<<"\n";
}

else if(g == 2 && f % 400 == 0 && f % 4 == 0 || g == 2 && f % 100 != 0){
  cout<<"29"<<"\n";
  
}

else if(g == 2 && f % 400 != 0 || g == 2 && f % 4 != 0 ){
  cout<<"28"<<"\n";
}
else{
  cout<<"30"<<"\n";
}
return 0;
}


