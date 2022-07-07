#pragma once

class teacher {
private:
	string _name;
	string _surname;
	size_t _salary;
	group _groups;
	bankcard _bankcards;
	int _age;
public:
	teacher() = default;
	teacher(string name, string surname, size_t salary, group groups, bankcard bankcards, int age) {
		set_name(name);
		set_surname(surname);
		set_groups(groups);
		set_bankcards(bankcards);
	}

	void set_name(string name) {
		if (name.length() < 2)
			throw"this is wrong lesson name!!";
		else
			_name = name;
	}

	void set_surname(string surname) {
		if (surname.length() < 2)
			throw"this is wrong  surname!";
		else
			_surname = surname;
	}

	void set_salary(size_t salary) {
		if (salary < 0)
			throw"wrong salary";
		else
			_salary = salary;
	}

	void set_groups(group groups) {
		_groups = groups;
	}

	void set_bankcards(bankcard bankcards) {
		_bankcards = bankcards;
	}

	string get_name() { return _name; }
	string get_surname() { return _surname; }
	size_t get_salary() { return _salary; }
	group get_groups() { return _groups; }
	bankcard get_bankcards() { return _bankcards; }


	void print() {
		cout << "\nname:"<<get_name();
		cout << "\nsurname:"<<get_surname();
		cout << "\nsalary:"<<get_salary();
	}

};