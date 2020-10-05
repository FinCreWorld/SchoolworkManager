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

// 设置记录存放的地址
Homework Homework::setRecordUrl(string recordUrl){
    this->recordUrl = recordUrl;
    return *this;
}

// 设置作业存放的地址
Homework Homework::setHomeworkUrl(string homeworkUrl){
    this->homeworkUrl = homeworkId;
    return *this;
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

// 得到记录存储的地址
string Homework::getRecordUrl(){
    return recordUrl;
}

// 得到作业的地址
string Homework::getHomeworkUrl(){
    return recordUrl;
}

/* 
 * 函数功能：将作业的信息存放在对应的记录地址
 * 入口参数：作业变量
 * 函数返回值：作业是否存储成功
 */
string Homework::submit(Homework homework){
    const string url = homework.getRecordUrl() + "/" + homework.courseId;
    ofstream output(url, ios::app);
    if(!output.is_open()) {
        return "file can't be opened";
    }
    output<<homework.getStudentId()+SPLIT;
    output<<homework.getHomeworkId()+SPLIT;
    output<<homework.getcourseId()+SPLIT;
    output<<homework.getRecordUrl()+SPLIT;
    output<<homework.getHomeworkUrl()+SPLIT;
    output.close();
    return "success";
}
// 设置文件信息分割符
string Homework::SPLIT = ",";