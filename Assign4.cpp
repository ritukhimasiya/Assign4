#include<iostream>
using namespace std;
int func(int pm) {
   int i;
   int flag = 1;
   for(i = 2; i <= pm/2; ++i) {
      if(pm % i == 0) {
         flag = 0;
         break;
      }
   }
   return flag;
}
int main() {
   int pm , i;
   cout << "\nEnter a number : ";
   cin >> pm;
   for(i = 2; i <= pm/2; ++i) {
      if (func(i)) {
         if (func(pm - i)) {
            cout << pm << " = " << i << " + " << pm-i << endl;
         }
      }
   }
   return 0;
}
