//
//  animal.hpp
//  0620
//
//  Created by Max on 2021/6/24.
//  Copyright © 2021年 Max. All rights reserved.
//

#ifndef animal_hpp
#define animal_hpp
#include<iostream>
#include <stdio.h>
using namespace std;

class animal{
public:
    animal();
    void add(string s, int a);
    void update(string s1, int a1);
    void display();
    
private:
    string ani[500];
    int type;
    int endanger;
    int num[500];
    
};
#endif /* animal_hpp */
