#include <iostream>
#include <unistd.h>
#include <algorithm>
using namespace std;
int main() {
  string answer;
  int points=0;
  bool incorrect=false;
  string wrong[10];
  
  cout<<"DO-WHILE tests\n";
  cout<<"Tests satur 10 jautājumus, kurā katram jautājumam ir 4 atbilžu varianti!\n";
  /*
  sleep(4);
  */
  system("clear");
  /*
    cout<<"Jautājumā ir 3 pareizas atbildes un atbildes formāts: A;B;C, B;C;A u.c.!\n\n\n";
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

    cout<<"Jautājumā ir 2 pareizas atbildes un atbildes formāts: D;C, A;B, C;A u.c.!\n\n\n";
    cout<<"2. Kurš apgalvojums ir patiess par DO-WHILE ciklu?\n\n\n";
    cout<<"\tA: Cikls nostrādās vienu reizi \n\tB: Nenostrādās nevienu reizi\n";
    cout<<"\tC: Lēns cikls\n\tD: Cikls ir exit-controlled loop\n\n";
    cin>>answer;
    
    if(answer == "A;D" || answer == "D;A"){
      points++;
    }else{
      wrong[1] = "2. Kurš apgalvojums ir patiess par DO-WHILE ciklu?";
    }

    system("clear");

    cout<<"Jautājumā ir 2 pareizas atbildes un atbildes formāts: D;C, A;B, C;A u.c.!\n\n\n";
    cout<<"3. Kuri apgalvojumi ir nepatiesi par ciklu?\n\n\n";
    cout<<"\tA: DO-WHILE cikli ir pēcpārbaudes(posttest) cikli \n\tB: Cikls nevar būt bezgalīgs\n";
    cout<<"\tC: Pastāv semikols pēc while(nosacījums) sintakses\n\tD: Nostrādās vismaz vienu reizi\n\n";
    cin>>answer;
    
    if(answer == "B;C" || answer == "C;B"){
      points++;
    }else{
      wrong[2] = "Kuri apgalvojumi ir nepatiesi par ciklu?";
    }
    
  system("clear");

    cout<<"Jautājumā ir 3 pareizas atbildes un atbildes formāts: A;B;C, B;C;A u.c.!\n\n\n";
    cout<<"4. Kuri pierakstu veidi ciklam ir nepareizi?\n\n\n";
    cout<<"\tA: dowhile(nosacījums){\n";
    cout<<"\t     izpildījums\n";
    cout<<"\t    }\n\n\n";
    cout<<"\tB: do while(nosacījums){\n";
    cout<<"\t        izpildījums\n";
    cout<<"\t      }\n\n\n";
    cout<<"\tC: do{\n";
    cout<<"\t  izpildījums\n";
    cout<<"\t }while(nosacījums)\n\n\n";
    cout<<"\tD: do{\n";
    cout<<"\t  izpildījums\n";
    cout<<"\t }while(nosacījums);\n\n";
    
    cin>>answer;
    
    if(answer == "A;B;C" || answer == "A;C;B" || answer ==       "C;B;A" || answer == "B;A;C" || answer == "B;C;A"){
      points++;
    }else{
      wrong[3] = "4. Kuri pierakstu veidi ciklam ir nepareizi?";
    }

    
    cout<<"Jautājumā ir 3 pareizas atbildes un atbildes formāts: A;B;C, B;C;A u.c.!\n\n\n";
    cout<<"5. Kuri apgalvojumi nav patiesi par cikliem programmēšanā?\n\n\n";
    cout<<"\tA: Koda daļa, kuru nevar atkārtot līdz kamēr nav sasniegts konkrēts nosacījums\n";
    cout<<"\tB: Koda daļu var izmantot tikai ar IF nosacījumu\n";
    cout<<"\tC: Koda daļa, kas atkārtojas līdz tiek sasniegts konkrēts nosacījums\n";
    cout<<"\tD: Kods, kas programmēšanā neeksistē\n\n";
    cin>>answer;

    if(answer == "A;B;C" || answer == "A;C;B" || answer ==       "C;B;A" || answer == "B;A;C" || answer == "B;C;A"){
      points++;
    }else{
      wrong[4] = "5. Kuri apgalvojumi nav patiesi par cikliem programmēšanā?";
    }

    system("clear");
    */
    
  
  
    sort(begin(wrong), end(wrong));
    for(int i=0; i<10; i++){
      cout<<wrong[i]<<"\n";
    }
    
}
