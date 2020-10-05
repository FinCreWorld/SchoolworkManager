#ifndef HOMEWORK_H
#define HOMEWORK_H
#include<string>
using namespace std;
/*
 * 该类用于提供基本的作业功能
 * 成员变量有：作业存储地址、学生id号、家庭作业id号、课程号、分隔符
 * 其方法有：构造函数、提交功能、基本变量的设置功能
 */
class Homework{
    private:
    // 用于存储文件的位置
    string studentId;
    string homeworkId;
    string courseId;
    string recordUrl;
    string homeworkUrl;
    static string SPLIT;    // 静态常量必须在类内声明，在类外初始化

    public:
    // 构造函数
    Homework(string studentId, string homeworkId, string courseId);

    // 提交函数
    static string submit(Homework homework);

    // set 函数
    Homework& setRecordUrl(string recordUrl);
    Homework& setHomeworkUrl(string homeworkUrl);

    // get 函数
    string getRecordUrl();
    string getHomeworkUrl();
    string getStudentId();
    string getHomeworkId();
    string getCourseId();
};
#endif  // HOMEWORK_H