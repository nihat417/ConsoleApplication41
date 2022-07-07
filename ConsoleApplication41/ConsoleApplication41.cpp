#include <iostream>
#include<vector>
#include<string>
#include<iomanip>

using namespace std;

#include"bankcard.h"
#include"bank.h"
#include"lesson.h"
#include"students.h"
#include"group.h"
#include"exam.h"
#include"teachers.h"
#include"universe.h"


int main()
{
	

	student stud("niko","akremi","programist",18,150,bankcard("12345678912345678922213","nihat12334",1002,07.24f));

	lesson les("programming");

	group gr("4213", les, stud);

	universe univer;
	univer.showallstudents();
	

	
	
}

