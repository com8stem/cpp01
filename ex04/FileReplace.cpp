#include "FileReplace.hpp"

std::string FileReplace::ReplaceOccurrences(const std::string &line) const
{
	std::string result;
	size_t start = 0;
	size_t pos;

	while ((pos = line.find(s1_, start)) != std::string::npos)
	{
		result.append(line, start, pos - start);
		result.append(s2_);
		start = pos + s1_.length();
	}
	result.append(line, start, std::string::npos);

	return result;
}

bool FileReplace::PerformReplacement()
{
	std::ifstream inFile(filename_.c_str());
	if (!inFile.is_open())
	{
		std::cerr << "Error: Could not open file " << filename_ << std::endl;
		return false;
	}

	std::ofstream outFile((filename_ + ".replace").c_str());
	if (!outFile.is_open())
	{
		std::cerr << "Error: Could not create output file " << filename_ << ".replace" << std::endl;
		inFile.close();
		return false;
	}

	std::string line;
	while (std::getline(inFile, line))
	{
		outFile << ReplaceOccurrences(line) << std::endl;
	}

	inFile.close();
	outFile.close();
	return true;
}
