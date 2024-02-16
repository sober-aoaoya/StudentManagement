#pragma once
#include <string>
#include<vector>
#include "Student.h"

class MainControl
{
public:
	//信息录入
	void addStudent(std::string ,long int ,std::string ,std::string,std::string);
	void saveStudent(std::string);
	//信息删除
	void deleteStudent(long int);
	//信息排序
	void sortStudentByID();
	void sortStudentByMajor();
	//信息检索
	Student* infoByID(long int);
	Student* infoByName(std::string);
private:
	std::vector <Student> students;
};

