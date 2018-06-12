#ifndef MARTIAN_H
#define MARTIAN_H

class Martian
{
private:
	int total;
	static int totalMartians;

public:
	Martian();

	int getTotal();
	static int getTotalMartians();

	void setTotal(int t);
	static void setTotalMartians(int t);
};

#endif MARTIAN_H