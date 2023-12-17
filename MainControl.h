#pragma once
#include <string>
#include<vector>
#include "Student.h"

class MainControl
{
public:
	//��Ϣ¼��
	void addStudent(std::string ,long int ,std::string ,std::string,std::string);
	void saveStudent(std::string);
	//��Ϣɾ��
	void deleteStudent(long int);
	//��Ϣ����
	void sortStudentByID();
	void sortStudentByMajor();
	//��Ϣ����
	Student* infoByID(long int);
	Student* infoByName(std::string);
private:
	std::vector <Student> students;
};

