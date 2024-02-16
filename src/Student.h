#pragma once
#include<string>

class Student
{
private:
	long int ID;
	std::string name;
	std::string college;
	std::string major;
	std::string gender;

public:
	Student();
	Student(std::string name, long int ID, std::string college, std::string major,std::string gender);
	~Student();

	void setID(long int ID);
	void setName(std::string name);
	void setCollege(std::string college);
	void setMajor(std::string Major);

	long int getID();
	std::string getName();
	std::string getCollege();
	std::string getMajor();
	std::string getGender();

	bool operator == (const Student& s) { return (this->ID == s.ID) && (this->name == s.name); }
};

