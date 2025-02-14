#include <iostream>
#include <fstream>
#include <sstream>
#include <string>

int main(){ 
    //initialize variables
    std::ifstream fin;
    std::string currentLine;
    std::string text;
    std::string snum1;
    int num1;
    std::string snum2;
    int num2;
    std::stringstream ss;
    std::stringstream converter;
    
    //opens data file
    fin.open("data.csv");
    //as long as there is a line to get, the loop will continue
    while (getline(fin, currentLine)){
    	//clear the streams
	ss.clear();
	converter.clear();
	
	//the stream is made up of the string currentLine
	ss.str(currentLine);

	//assigns each num/word into its own string
	getline(ss, snum1, ',');
	getline(ss, snum2, ',');
	getline(ss, text);

	//std::cout << snum1 << snum2 << text << std::endl;
    }
}
