# C++ 的文件操作

> 这个项目涉及到大量的文件操作，实在不想每次都上网查了，在这里写一篇小笔记记录一下
> 大部分内容摘自：[C++文件操作详解](https://www.cnblogs.com/fengliu-/p/7218970.html)

## C++ 主要支持的类

* ofstream 用于写操作的类，即负责输出
* ifstream 用于读操作的类，即负责读入
* fstream 可以用来同时读写的类

## 打开与关闭文件

### 打开文件

使用成员函数 `open()` 来打开文件，其完整形式如右 `void open(const char* filename, openmode mode)`。其中的 `filename` 表示用来打开的文件路径以及文件名，`mode` 为打开文件的方式，其主要方式有：

* ios::in 用来读文件
* ios::out 用来写文件
* ios::ate 初始位置为文件尾
* ios::app 所有输出附加在文件末尾
* ios::trunc 如果文件已经存在则先删除文件
* ios::binary 二进制形式打开文件

上述标识符可以使用“或”运算符 `|` 来进行符合使用，如

```C++
ofstream file;
file.open("test.txt", ios::out | ios::binary);
```

`ofstream`、`ifstream`、`fstream` 各自包含了一种打开文件的方式，如下所示：

* ofstream ios::out | ios::trunc
* ifstream ios::in
* fstream ios::in | ios::out

打开文件也可以通过构造函数来实现，形如 `ofstream file("test.txt", ios::out | ios::binary)`，**因此打开文件有构造函数以及`open()`函数两种方式**，可以调用成员函数`is_open()`来判断文件是否打开。

### 关闭文件

使用 `close()` 成员函数释放资源，析构函数会自动调用 `close()` 函数。**关闭资源后，原来的文件流对象可以用来打开其他文件、同时原来的文件也可以被其他进程访问。**

## 相关函数及其对象的使用

`ifstream` 与 `istream` 相当，`ofstream` 与 `ostream` 相当，因此绝大多数情况下可以将 `ifstream` 的对象以及 `ofstream` 的对象看做 `cin` 和 `cout` 来使用。

```c++
#include<iostream>
#include<fstream>
using namespace std;
int main(){
    // 创建一个对象并打开文件，即打开一个输入流
	ofstream infile("example.txt");
	if(infile.is_open()){
        // 向 infile 中写入信息
		infile << "This is a line.\n";
		infile << "This is another line.\n";
		infile.close();
	}

	char buffer[256];
    // 打开一个输出流
	ifstream outfile("example.txt");
	if(!outfile.is_open()){
		cout << "Error opening file";
		exit(1);
	} 
	while(!outfile.eof()){
		outfile.getline(buffer, 100);
		cout << buffer <<endl;
	}
	return 0;
} ```