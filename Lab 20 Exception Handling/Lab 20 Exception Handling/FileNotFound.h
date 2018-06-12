#ifndef FileNotFound_H
#define FileNotFound_H

#include <string>
using namespace std;

class FileNotFound
{
private:
	string fileName;
public:
	FileNotFound(string n) { fileName = n; }
	string getName() { return fileName; }
};

#endif
