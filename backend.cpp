#include <iostream>
#include <fstream>

using namespace std;

struct Teacher {
	string name;
	string type;
	string room;
	vector<string> periods;
}

int findTeacher(const vector<Teacher>& teachers, const string& name) {
	//Returns the index of the teacher with the given name. (Junjie)
	//If not found return -1
	
}

vector<int> findSubs(const Teacher& teacher, vector<Teacher>& teachers) {
	//Returns a vector of ints containing the index of the teacher that will fill in for an absent teacher.
	//If no teacher is available to sub that period, place a -1 in the index.
	//If a period is a prep for an absent teacher, place a -2 in the index.
	//Replace teacher's preps with the phrase "SUB" to mark preps that have already been used.
	
}

int main() {
	vector<Teacher> teachers;
	//Parse spreadsheet (Henry)
	
	
	//User interface (Charles)
	while (true) {
		
	}
	
	
	
	return 0;
}
