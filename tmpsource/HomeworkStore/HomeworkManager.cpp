#include "HomeworkManager.h"

HomeworkManager::HomeworkManager(vector<Homework> worklist, string homeworksUrl){
    this->homeworks = worklist;
    this->studentId = new vector<int>;
    this->homeworksUrl = homeworksUrl;
    versionId = 0;
}

HomeworkManager::HomeworkManager(){
    this->homeworks = new vector<Homework>;
    this->studentId = new vector<int>;
    this->homeworksUrl = nullptr;
    versionId = 0;
}

HomeworkManager& HomeworkManager::setHomeworkList(vector<Homework> list){
    this->homeworks = list;
    return *this;
}

HomeworkManager& HomeworkManager::setHomeworksUrl(string url){
    this->homeworksUrl = url;
    return *this;
}

vector<Homework> HomeworkManager::getHomeworkList(){
    return this->homeworks;
}

vector<int> HomeworkManager::getStudentList(){
    return this->studentId;
}

string HomeworkManager::getHomeworkUrl(){
    return this->homeworksUrl;
}

bool HomeworkManager::verify(){
    return this->versionId == 
}