#ifndef VERSION_H
#define VERSION_H
#include<string>
using namespace std;
typedef long long ll;
class Version{
    public:
    static ll updateHomeworkHubVersion(string url);
    static ll getHomeworkHubVersion(string url);
};
#endif  // VERSION_H