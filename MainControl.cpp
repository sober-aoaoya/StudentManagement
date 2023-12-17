#include "pch.h"
#include "MainControl.h"
#include <fstream>
#include <algorithm>	



void MainControl::addStudent(std::string name,long int ID,std::string college,std::string major,std::string gender) 
{	Student student(name,ID,college,major,gender);
	students.push_back(student);
	MessageBox(0, _T("插入成功!"), _T("提示"), MB_OK);
}


void MainControl::saveStudent(std::string filepath)
{
	std::ofstream outfile(filepath, std::ios::out);
	if (outfile.is_open())
		for each (Student student in students)
			outfile << student.getName() << "\t" << student.getGender() << "\t" << student.getID() <<"\t"<< student.getCollege() << "\t" << student.getMajor() << std::endl;
	else {
		MessageBox(0, _T("保存失败!"), _T("提示"), MB_OK);
		return;
	}
}


void MainControl::deleteStudent(long int ID)
{
	std::vector<Student>::iterator iter;
	bool found = false;
	for (iter = students.begin(); iter != students.end();)
		if (iter->getID() == ID)
		{
			iter = students.erase(iter);
			MessageBox(0, _T("删除成功!"), _T("提示"), MB_OK);
			found = true;
			break;
		}
		else
			iter++;
	if (!found)
	{
		MessageBox(0, _T("未找到该学生!"), _T("提示"), MB_OK);
	}
}


void MainControl::sortStudentByID()
{
	sort(students.begin(), students.end(), [=](Student s1, Student s2)->bool {
		return s1.getID() < s2.getID();
		});
	MessageBox(0, _T("排序成功!"), _T("提示"), MB_OK);
}


void MainControl::sortStudentByMajor()
{
	sort(students.begin(), students.end(), [=](Student s1, Student s2)->bool {
		return s1.getMajor() < s2.getMajor();
		});
	MessageBox(0, _T("排序成功!"), _T("提示"), MB_OK);
}

Student* MainControl::infoByID(long int ID)
{
	std::vector<Student>::iterator iter;
	for (iter = students.begin(); iter != students.end(); ++iter)
	{
		if (iter->getID() == ID)
		{
			return &*iter;
		}
	}
	return nullptr;
}

Student* MainControl::infoByName(std::string name)
{
	std::vector<Student>::iterator iter;
	for (iter = students.begin(); iter != students.end(); ++iter)
	{
		if (iter->getName() == name)
		{
			return &*iter;
		}
	}
	return nullptr;
}











