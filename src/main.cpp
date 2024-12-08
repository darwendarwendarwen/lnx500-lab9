#include <iostream>
#include <string>
#include "file_creator.hpp"

int main()
{
    std::cout << "Enter the directory where files will be managed: " << std::endl;
    std::getline(std::cin, path);

    seneca::example::file_creator creator(path);

    nlohmann::json example_json = {
        {"key", "value"},
        {"number", 42}
    };

    std::string file_name = "example.json"

    std::cout << "Creating a file with sample JSON content...\n" << std::endl;
    creator.create_file(example_json, file-name);


    std::cout << "Reading the file content...\n";
    nlohmann::json read_json = creator.read_file(file_name);

    std::cout << "Read JSON content:\n" << read_json.dump(4) << std::endl;


    return 0;
}