#pragma once
class universe {
	string name ;
	int _universcore;
	vector<teacher> teachers;
	vector<student> students;
public:
	universe() = default;

	void showallstudents() {
		for (size_t i = 0; i < students.size(); i++)
		{
			students[i].print();
		}
	}

	int getuniverstscore() {
		for (size_t i = 0; i < students.size(); i++)
		{
			_universcore+=students[i].get_score();
			return _universcore;
		}
	}
};