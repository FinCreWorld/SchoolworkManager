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
    string url;
    string studentId;
    string homeworkId;
    string courseId;
    static string SPLIT;    // 静态常量必须在类内声明，在类外初始化

    public:
    Homework(string studentId, string homeworkId, string courseId);
    static string submit(Homework homework);
    void setUrl(string url);
    string getUrl();
    string getStudentId();
    string getHomeworkId();
    string getcourseId();
};