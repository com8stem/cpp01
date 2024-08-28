#include "FileReplace.hpp"

int main(int argc, char *argv[])
{
	if (argc != 4)
	{
		std::cerr << "Usage: " << argv[0] << " <filename> <string_to_replace> <replacement_string>" << std::endl;
		return 1;
	}

	std::string filename = argv[1];
	std::string s1 = argv[2];
	std::string s2 = argv[3];

	if (s1.empty())
	{
		std::cerr << "Error: The string to replace cannot be empty." << std::endl;
		return 1;
	}

	FileReplace replacer(filename, s1, s2);
	if (!replacer.PerformReplacement())
	{
		std::cerr << "Error: Could not replace." << std::endl;
		return 1;
	}

	return 0;
}
