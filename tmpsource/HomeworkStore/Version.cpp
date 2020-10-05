#include <time.h>
#include <string>
#include <iostream>
#include <fstream>
#include "Version.h"
typedef long long ll;
const int maxn = 100;

ll Version::updateHomeworkHubVersion(string url){
    fstream foi("url", ios::in | ios::out);
    if(!foi.is_open()){
        cout<<url<<"所在的文件夹无法打开"<<endl;
    }else{
        char record[maxn];
        string str;
        while(foi.getline(record, maxn)){
            str = string(record);
            
        }
    }
}