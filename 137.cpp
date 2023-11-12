#include <iostream>
int main()
{ setlocale(0,"");using namespace std;
    cout<<"Введите число меньше миллиона: ";
  int q,w,e,r,t; cin>>q;
  if (q>=1000000){exit(0);}
  w=q/1000;e=q/100%10;r=q/10%10;t=q%10;
  cout<<"Т."<<w<<"\tС."<<e<<"\tД."<<r<<"\tЕ."<<t;} 
