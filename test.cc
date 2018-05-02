#include "stdafx.h"
#include "9_4.h"
#include <iostream>;
#include <vector>
#include <algorithm>

using namespace std;

bool compare(const PF_Student_info & x, const PF_Student_info & y)
{
	return x.name()>y.name();
}

std::istream & PF_Student_info::read(std::istream & in)
{
	in >> n>>midterm>>final;
	in.clear();
	return in;
}



int main_94() {
	vector<PF_Student_info> students;

	PF_Student_info record;

	record.read(cin);


	//sort(students.begin(), students.end(), compare);

	if (record.pass_fail_check())
		cout << record.name()<< " has passed with a mark of :"<<record.average() << endl;
	else
		cout << record.name() << " has failed." << endl;
	return 0;

}
