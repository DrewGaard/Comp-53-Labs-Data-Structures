#ifndef LINEOVERFLOW_H
#define LINEOVERFLOW_H

#include <string>
using namespace std;

class LineOverflow
{
private:
	string fileName;
public:
	LineOverflow(string n) { fileName = n; }
	bool getFileLength(string n);
};

#endif
