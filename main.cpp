#include <iostream>
#include<fstream>
#include<ctime>

using namespace std;

int main() {
  srand(time(NULL));
  
  int n;
  fstream file;

file.open("coefficienti.txt",ios::out);
for(int h;h<100;h++){
  for(int i=0;i<3;i++){
n=rand()%41-20;
file<<n<<" ";}
file<<endl;
}

file.close();
}