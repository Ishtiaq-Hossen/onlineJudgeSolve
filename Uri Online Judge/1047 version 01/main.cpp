#include <iostream>
#include <math.h>
using namespace std;
int main(int argc, char const *argv[])
{
      int a,b,c,d,ho,minuto;
      std::cin >> a>>b>>c>>d;
      ho=c-a;
      if(ho<0){
        ho=24+(c-a);
      }
      minuto=d-b;
      if (minuto<0) {
        minuto=60+(d-b);
        ho--;
      }
      if (a==c && b==d) {
        std::cout << "O JOGO DUROU 24 HORA(S) E 0 MINUTO(S)" << '\n';
      }else{
        std::cout << "O JOGO DUROU "<<ho<<" HORA(S) E "<<minuto<<" MINUTO(S)" << '\n';
      }
      return 0;
}
