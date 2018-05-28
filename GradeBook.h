#pragma once
#include <string>
#include <array>
#include <iostream>
#include <iomanip>

class GradeBook {
public:
	static const size_t students{ 10 };

	GradeBook(const std::string& name, const std::array<int, students>& gradesArray)
		:courseName(name), grades{ gradesArray } {
	}

private:
	std::string courseName;
	std::array<int, students>grades;
};