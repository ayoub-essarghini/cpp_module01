#include <iostream>
#include <fstream>
#include <string>

void replace_occurence(std::string& str, std::string& old_str,std::string& new_str)
{
    std::string::size_type pos = str.find(old_str);

  if (pos != std::string::npos) {
        str.erase(pos, old_str.length());
        str.insert(pos, new_str);
    }
}

int main(int ac, char* av[]) {
    if (ac != 4) {
        std::cerr << "Usage: " << av[0] << " filename oldStr newStr" << std::endl;
        return 1;
    }

    std::string filename = av[1];
    std::ifstream infile(filename.c_str());  // Convert std::string to const char*

    if (!infile) {
        std::cerr << "Error: Unable to open file " << filename << std::endl;
        return 1;
    }

    std::string oldStr = av[2];
    std::string newStr = av[3];
    std::ofstream outfile((filename + ".replace").c_str());  // Convert std::string to const char*

    if (!outfile) {
        std::cerr << "Error: Unable to open output file." << std::endl;
        return 1;
    }

    std::string line;
    while (std::getline(infile, line)) {
        replace_occurence(line, oldStr, newStr);
        outfile << line << std::endl;
    }

    infile.close();
    outfile.close();

    return 0;
}