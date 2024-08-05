/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plang <plang@student.hive.fi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/05 14:28:08 by plang             #+#    #+#             */
/*   Updated: 2024/08/05 14:28:09 by plang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fstream>
#include <sstream>
#include <iostream>
#include <string>

int main(int argc, char **argv)// argc argv
{
    if (argc == 4)
    {
        try
        {
            std::string s1 = argv[2];
            std::string s2 = argv[3];
            std::string out = argv[1];
            std::string add = ".replace";
            std::string repFile = out + add;
            std::ifstream inFile(argv[1]);
            std::ofstream outFile(repFile);
            
            if (!inFile)
            {
                std::cerr << "Could not open file" << std::endl;
                return 1;
            }
            std::stringstream checkLine;
            std::string input;
            checkLine << inFile.rdbuf();
            input = checkLine.str();
            size_t  pos = 0;
            while (pos < std::string::npos)
            {
                pos = input.find(s1, pos);
                if (pos >= input.size())
                    break ;
                input.erase(pos, s1.size());
                input.insert(pos, s2);
                pos += s2.size();
            }
            outFile << input << std::endl;
        }
        catch(const std::exception& e)
        {
            std::cerr << e.what() << '\n';
        }
        
    }
    else
        std::cout << "3 strings needed!" << std::endl;
}
