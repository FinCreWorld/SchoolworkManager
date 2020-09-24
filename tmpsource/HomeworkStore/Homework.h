#include<string>
using namespace std;
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