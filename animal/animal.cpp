//
//  animal.cpp
//  0620
//
//  Created by Max on 2021/6/24.
//  Copyright © 2021年 Max. All rights reserved.
//

#include "animal.hpp"
#include<iostream>


using namespace std;

animal::animal(){
    type=0;
    endanger=0;
}
void animal::add(string s, int a){
    ani[type]=s;
    num[type]=a;
    type++;
    if(a<1000){
        endanger+=1;
        cout << "Add. Animal: " << s << endl << "Number: " << a << endl << "Endanger species: " << "Yes" <<endl;
    }
    else{
        cout << "Add. Animal: " << s << endl << "Number: " << a << endl << "Endanger species: " << "No" <<endl;
    }
    
}
void animal::update(string s1, int a1){
    for(int i=0;i<type;i++){
        if(ani[i]==s1){
            int x=i;
            if(num[x]>1000 && a1>1000){
                num[x]=a1;
                cout << "Update. Animal: " << s1 << endl << "Number: " << a1 << endl << "Endanger species: " << "No" <<endl;
            }
            else if(num[x]>1000 && a1<1000){
                endanger+=1;
                num[x]=a1;
                cout << "Update. Animal: " << s1 << endl << "Number: " << a1 << endl << "Endanger species: " << "Yes" <<endl;
            }
            else if(num[x]<1000 && a1<1000){
                num[x]=a1;
                cout << "Update. Animal: " << s1 << endl << "Number: " << a1 << endl << "Endanger species: " << "Yes" <<endl;
            }
            else if(num[x]<1000 && a1>1000){
                endanger-=1;
                num[x]=a1;
                cout << "Update. Animal: " << s1 << endl << "Number: " << a1 << endl << "Endanger species: " << "No" <<endl;
            }
        }
        
    }
}
void animal::display(){
    //cout << "There are " << endanger  << " animals who are endanger species" << endl;
    if(endanger==0){
        //cout << "Endanger species: No" << endl;
        cout << "There are 0 animals who are endanger species" << endl;
        //cout << "That are the endanger animal list we have now. Bye bye." << endl;
    }
    else{
        //cout << "Endanger species: Yes" << endl;
        cout << "There are " << endanger << " animals who are endanger species" << endl;
        //cout << sizeof(ani[0]);
        for(int i=0;i<type;i++){
            if(num[i]==0){
                break;
            }
            if(num[i]<1000){
                cout << "Animal: " << ani[i] << endl;
                cout << "Number: " << num[i] << endl;
            }
            
        }
    }
    
}
