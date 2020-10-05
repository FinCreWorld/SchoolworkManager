/*
 * 该类用于提供所有作业相关的功能
 * 提供的相关功能：打开指定的作业存储文件夹
 * 提取作业存储文件夹中的总信息
 * 提取已经提交的学生的信息
 */
#ifndef HOMEWORKMANAGER_H
#define HOMEWORKMANAGER_H
#include "Homework.h"
#include <vector>
class HomeworkManager{
    private:
    // 存储作业记录
    vector<Homework> homeworks;
    // 存储作业记录中的学生 ID
    vector<int> studentId;
    // 用于打开作业存储文件夹
    string homeworksUrl;
    // 用于存储当前的版本号
    int versionId;
    public:
    // 构造函数
    HomeworkManager(vector<Homework>, string);
    HomeworkManager();


    HomeworkManager& setHomeworkList(vector<Homework>);
    HomeworkManager& setHomeworksUrl(string);

    vector<Homework> getHomeworkList();
    string getHomeworkUrl();
    vector<int> getStudentList();

    int countStudent();

    private:
    // 用于确认当前版本为数据库中系统最新版本
    bool verify();

};
#endif // HOMEWORKMANAGER_H