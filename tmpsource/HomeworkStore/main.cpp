#include<iostream>
#include "Homework.h"
using namespace std;
int main(){
    Homework hw("1","1","1");
    hw.setUrl("./tmpsource/HomeworkStore/homework.txt");
    cout<<Homework::submit(hw)<<endl;
    system("pause");
    return 0;
}