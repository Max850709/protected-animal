

#include <iostream>
#include <string>
#include <iterator>
#include <type_traits>
#include "animal.hpp"
using namespace std;

int main(int argc, const char * argv[]) {
    char ch;
    animal a1;
    int num;
    
    string ani;
    
    
    while(1){
        cin >> ch;
        cin.get();
        if(ch=='a'){
            getline(cin,ani);
            cin >> num;
            a1.add(ani, num);
        }
        else if(ch=='u'){
            getline(cin,ani);
            cin >> num;
            a1.update(ani, num);
        }
        else if(ch=='d'){
            a1.display();
        }
        else if(ch=='q'){
            return 0;
        }
        
        
    }
    
    return 0;
}
