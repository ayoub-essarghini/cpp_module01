#include <iostream>
#include <fstream>
#include <string>

void replace_occurence(std::string &str, std::string &old_str, std::string &new_str)
{

    while (1)
    {
        std::string::size_type pos = str.find(old_str);

        if (pos != std::string::npos)
        {
            str.erase(pos, old_str.length());
            str.insert(pos, new_str);
        }
        else
            break;
    }
}

std::string get_filename(std::string& file)
{
    std::string::size_type pos = file.find('.');

    if (pos == std::string::npos)
        return file;
    else
    {
        return file.substr(0,pos);
    }
}

int main(int ac, char *av[])
{
    if (ac != 4)
    {
        std::cerr << "Usage: " << av[0] << " filename oldStr newStr" << std::endl;
        return 1;
    }

    std::string filename = av[1];
    std::ifstream infile(filename.c_str());

    if (!infile)
    {
        std::cerr << "Error: Unable to open file " << filename << std::endl;
        return 1;
    }

    std::string oldStr = av[2];
    std::string newStr = av[3];
    std::string new_filename = get_filename(filename);
    std::ofstream outfile(( new_filename + ".replace").c_str());

    if (!outfile)
    {
        std::cerr << "Error: Unable to open output file." << std::endl;
        return 1;
    }

    std::string line;
    while (std::getline(infile, line))
    {
        replace_occurence(line, oldStr, newStr);
        outfile << line << std::endl;
    }

    infile.close();
    outfile.close();

    return 0;
}