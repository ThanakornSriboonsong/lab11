// cout << "Press Enter 3 times to reveal your future.";
// cout << "You will get A in this 261102."
#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std ;

int main(){
    string grade ;
    cout << "Press Enter 3 times to reveal your future.";
     cin.get() ;
     cin.get() ;
     cin.get() ;
     srand( time( 0 ) );
    int  rannum = rand()%9 ;
    if(rannum == 0){
        grade = "A" ;
    }
    else if(rannum == 1){
        grade = "B+" ;
    }
    else if(rannum == 2){
        grade = "B" ;
    }
    else if(rannum == 3){
        grade = "C+" ;
    }
    else if(rannum == 4){
        grade = "C" ;
    }
    else if(rannum == 5){
        grade = "D+" ;
    }
    else if(rannum == 6){
        grade = "D" ;
    }
    else if(rannum == 7){
        grade = "F" ;
    }
    else if(rannum == 8){
        grade = "W" ;
    }
    cout << "You will get " << grade << " in this 261102." ;
    
    }
    
    
    
    
  










