#include "pch.h"
#include "Student.h"

Student::Student() {
	ID = 0;
	name = "";
}

Student::Student(std::string name, long int ID, std::string college, std::string major,std::string gender) {
	this->ID = ID;
	this->name = name;
	this->college = college;
	this->major = major;
	this->gender = gender;
}

Student::~Student() {
	this->ID = 0;
	this->name = "";
	this->college = "";
	this->major = "";
	this->gender = "";
}

void Student::setID(long int ID) {
	this->ID = ID;
}

void Student::setName(std::string name) {
	this->name = name;
}

void Student::setCollege(std::string college) {
	this->college = college;
}

void Student::setMajor(std::string major) {
	this->major = major;
}

long int Student::getID() {
	return ID;
}

std::string Student::getName() {
	return name;
}

std::string Student::getCollege()
{
	return college;
}

std::string Student::getMajor()
{
	return major;
}

std::string Student::getGender()
{
	return gender;
}





