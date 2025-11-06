#include <iostream>
#include <string>
#include <filesystem>

void handle_send(const std::string file_path)
{
    const std::filesystem::path path = file_path;
    if (!std::filesystem::exists(path))
    {
        std::cout << "File Path incorrect. File does not exist!\n";
        return;
    }
}

void handle_recieve(const std::string secret_code)
{
}