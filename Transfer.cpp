#include <iostream>
#include <fstream>

int main() {
    std::string sourcePath = "source_directory/source_file.txt";
    std::string destinationPath = "destination_directory/destination_file.txt";

    std::ifstream sourceFile(sourcePath, std::ios::binary);
    std::ofstream destinationFile(destinationPath, std::ios::binary);

    if (!sourceFile) {
        std::cerr << "Error: Unable to open source file." << std::endl;
        return 1;
    }

    if (!destinationFile) {
        std::cerr << "Error: Unable to open destination file." << std::endl;
        return 1;
    }

    // Transfer data
    destinationFile << sourceFile.rdbuf();

    std::cout << "File transferred successfully." << std::endl;

    return 0;
}
