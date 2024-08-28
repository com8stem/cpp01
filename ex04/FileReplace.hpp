#ifndef FILEREPLACE_HPP
#define FILEREPLACE_HPP

#include <iostream>
#include <fstream>
#include <string>

class FileReplace
{
private:
	std::string filename_;
	std::string s1_;
	std::string s2_;

	std::string ReplaceOccurrences(const std::string &line) const;

public:
	FileReplace(const std::string &filename, const std::string &s1, const std::string &s2);
	bool PerformReplacement();
};

#endif
