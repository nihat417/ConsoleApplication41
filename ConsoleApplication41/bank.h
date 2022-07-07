#pragma once
class bank {
private:
	string _location;
	vector<bankcard>bankcards;
public:
	bank() = default;
	bank(string location) {
		_location = location;
	}
	string get_location() { return _location;}
};