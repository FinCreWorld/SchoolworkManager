#include<bits/stdc++.h>
using namespace std;
const int maxn = 100;
const int maxm = 10;
string StudentId[maxm];
string HomeworkId[maxm];
string courseId[maxm];
string recordUrl[maxm];
string homeworkUrl[maxm];
const static string SPLIT = ",";
int main(){
    for(int i = 0; i < maxm; ++i){
        StudentId[i] = to_string(rand());
        HomeworkId[i] = to_string(rand());
        courseId[i] = to_string(rand());\
        recordUrl[i] = "";
        homeworkUrl[i] = "./HomeworkFile/" + HomeworkId[i];
    }
    freopen("./tmpsource/HomeworkStore/HomeworkFile/test.txt", "w", stdout);
    for(int i = 0; i < maxn; ++i){
        cout<<StudentId[rand()%maxm]+SPLIT
        <<HomeworkId[rand()%maxm]+SPLIT
        <<courseId[rand()%maxm]+SPLIT
        <<recordUrl[rand()%maxm]+SPLIT
        <<homeworkUrl[rand()%maxm]+SPLIT
        <<endl;
    }
    return 0;
}