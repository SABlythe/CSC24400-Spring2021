#include <fstream>
#include <iostream>

//using namespace std;

int main(int argc, char *argv[])
{
	std::cout << "Enter name of input file: ";
	std::string fname;
	std::cin >> fname;
	
	
	std::ifstream inputFile( fname.c_str() );
	std::ofstream outStream("numbers.txt");
	
	int myVal;
	inputFile >> myVal;
	
	while (inputFile)
	{
		outStream << "myVal=" << myVal 
		          << std::endl;
		inputFile >> myVal;
	}
	
	outStream.close();
	inputFile.close();
		
	return 0;
}
