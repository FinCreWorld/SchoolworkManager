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
// 设置文件存储的位置
void Homework::setUrl(string url){
    this->url = url;
}
// 得到文件存储的位置
string Homework::getUrl(){
    return url;
}
// 得到学生的 id 号
string Homework::getStudentId(){
    return studentId;
}
// 得到作业的 id 号
string Homework::getHomeworkId(){
    return homeworkId;
}
// 得到班级的 id 号
string Homework::getcourseId(){
    return courseId;
}
/* 
 * 函数功能：将作业提交至指定位置的文件夹
 * 入口参数：作业变量
 * 函数返回值：作业是否存储成功
 */
string Homework::submit(Homework homework){
    const string url = homework.getUrl() + "/" + homework.courseId;
    ofstream output(url, ios::app);
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
// 设置文件信息分割符
string Homework::SPLIT = ",";