#include <iostream>
#include <unistd.h>
using namespace std;
int main() {
  string answer;
  int points=0;
  bool incorrect=false;
  string wrong[10];
  
  cout<<"DO-WHILE tests\n";
  cout<<"Tests satur 10 jautājumus, kurā katram jautājumam ir 4 atbilžu varianti!\n";

  sleep(4);
  system("clear");
  
    cout<<"Jautājumā ir 3 pareizas atbildes un atbildes         formāts: A;B;C, B;C;A u.c.!\n\n\n";
    cout<<"1. Kurš nav cikls?\n\n\n";
    cout<<"\tA: SWITCH \t\t B: IF\n";
    cout<<"\tC: STRING \t\t D: FOR\n\n";
    cin>>answer;
    
    if(answer == "A;B;C" || answer == "A;C;B" || answer ==       "C;B;A" || answer == "B;A;C" || answer == "B;C;A"){
      points++;
    }else{
      wrong[0] = "1. Kurš nav cikls?";
    }

    system("clear");
}
