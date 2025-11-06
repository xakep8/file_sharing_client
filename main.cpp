#include <iostream>
#include "Types.h"
#include "Utils.hpp"

void print_usage(bool tma)
{
    if (tma)
    {
        std::cout << "Too many arguments!\n";
    }
    std::cout << "usage: file_sharing send <file/folder path>\n";
    std::cout << "       file_sharing recieve <secret code>\n";
}

int main(int argc, char *argv[])
{
    if (argc < 3)
    {
        print_usage(0);
        return 0;
    }
    else if (argc > 3)
    {
        print_usage(1);
        return 0;
    }
    else
    {
        const std::string f_argument = argv[1];
        const std::string s_argument = argv[2];
        if (f_argument == Arguments::SEND)
        {
            std::cout << "HELLO SENDER\n";
            handle_send(s_argument);
        }
        else if (s_argument == Arguments::RECIEVE)
        {
            std::cout << "GREETINGS RECIEVER\n";
            handle_recieve(s_argument);
        }
        else
        {
            print_usage(0);
            return 0;
        }
    }
    return 0;
}