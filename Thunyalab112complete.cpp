#include<iostream>
#include<fstream>
#include<string>
using namespace std;

int main (){
	ifstream source;
	ofstream dest;
	source.open("C:\\TempPatchCD\\text\\lab11_2564_2-master\\cheerbook.txt");
	dest.open("C:\\TempPatchCD\\text\\cheerbook_copy.txt");
	
	string haveline;
	dest << "-------------------- BOOM ---------------------";
	while (getline(source, haveline)){
		dest << "\n";
		dest << haveline << endl;
		getline(source,  haveline);
		dest <<  haveline;
	}
	dest << "-------------------- HA!! ---------------------" << endl;

    source.close();
    dest.close();
	return 0;
}
