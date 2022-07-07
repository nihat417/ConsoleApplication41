#pragma once

class group {
private:
	string _name;
	lesson _lessons;
	student _students;
public:
	group() = default;
	group(string name, lesson lessons, student students) {
		set_name(name);
		set_lessons(lessons);
		set_students(students);
	}

	void set_name(string name) {
		if (name.length() < 2)
			throw"wrong group name";
		else
			_name = name;
	}

	void set_lessons(lesson lessons) {
			_lessons = lessons;
	}

	void set_students(student students) {
			_students = students;
	}

	string get_name() { return _name; }
	lesson get_lesson() { return _lessons; }
	student get_students() { return _students; }
};