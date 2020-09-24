#include"Homework.h"
#include<string>
#include<iostream>
#include<fstream>
using namespace std;
Homework::Homework(string studentId, string homeworkId, string courseId){
    this->studentId = studentId;
    this->homeworkId = homeworkId;
    this->courseId = courseId;
}
void Homework::setUrl(string url){
    this->url = url;
}
string Homework::getUrl(){
    return url;
}
string Homework::getStudentId(){
    return studentId;
}
string Homework::getHomeworkId(){
    return homeworkId;
}
string Homework::getcourseId(){
    return courseId;
}
string Homework::submit(Homework homework){
    ofstream output(homework.getUrl(), ios::app);
    if(!output.is_open()) {
        return "file can't be opened";
    }
    output<<homework.getStudentId()+SPLIT;
    output<<homework.getcourseId()+SPLIT;
    output<<homework.getHomeworkId()+SPLIT;
    output<<homework.getUrl();
    output.close();
    return "success";
}
string Homework::SPLIT = ",";