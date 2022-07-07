#pragma once

class lesson {
private:
	string _name;
public:
	lesson() = default;
	lesson(string name) {
		set_name(name);
	}

	void set_name(string name) {
		if (name.length() < 2)
			throw"this is wrong lesson name!!";
		else
			_name = name;
	}

	string get_name() { return _name; };
};