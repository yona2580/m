#include <iostream>

#include <fstream>
using namespace std;
int main(){
	ofstream myFile("example.txt");
	myFile<<"Hello,yona";
	myFile.close();
	ifstream readFile("example.txt");
	string text;
	getline(readFile,text);
	cout<<text<<endl;
	readFile.close();
	return 0;
	
}