#include "../../source/intro/imgDownSample.hpp"

int main(int argc, char** argv)
{
	int retVal = EXIT_FAILURE;

	if(argc != 3){
		std::cerr << "Incorrect arguments" << std::endl;
	}

	retVal = imgDownSample(argv[1], argv[2]);

	std::cout << "The retVal is " << retVal << std::endl;
	return retVal;
}
