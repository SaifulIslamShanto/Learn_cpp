#include "learndestructor.h"
#include<iostream>
using namespace std;

LearnDestructor :: LearnDestructor(){
cout<<"Constractor is called"<<endl;
}

LearnDestructor :: ~LearnDestructor(){
cout<<"Destructor is called"<<endl;
}


void LearnDestructor :: display(){
    cout<<"Display is called"<<endl;
}
