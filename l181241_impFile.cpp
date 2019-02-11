#include"header.h"
////constructor 1//////
cricketTeam::cricketTeam()
{
	memberNames = 0;
	no_of_members = 0;
	teamName = 0;
	scoreinlast10matches[10]= 0;
	rank = 0;
}
///constructor 2////////
cricketTeam::cricketTeam(string team_name, int No_of_members)
{
	int a = 1;
	for ( a = 1; team_name[a] != '\0'; a++);
	teamName = new char[a-1];
	for (int i = 0; i < a; i++)
	{
		teamName[i] = team_name[i];
	}
	if (No_of_members >=0)
	{
		no_of_members = No_of_members;
	}
	else
	{
		no_of_members = 0;
	}
}
///constructor 3/////
/*cricketTeam(string f)
{
	ifstream fin;
	fin.open("file.txt");
	 
}*/
//////////setter 1///
void cricketTeam::setCaptain(string captain_n)
{
	captain=captain_n;
}
//////////setter 2///
void cricketTeam::setRank(int rank_)
{
	rank=rank_;
}
//////////setter 3///
void cricketTeam::setNoOfMembers(int NoOfMembers)
{
	no_of_members=NoOfMembers;
}
//////////setter 4///
void cricketTeam:: setTeamName(string team_name)
{
	int a = 1;
	for ( a = 1; team_name[a] != '\0'; a++);
	teamName = new char[a-1];
	for (int i = 0; i < a; i++)
	{
		teamName[i] = team_name[i];
	}
}
/////////getter 1///
string getCaptain()
{
	return captain;
}
/////////getter 2///
int getRank()
{
	return rank;
}
/////////getter 3///
int getNoOfMembers()
{
	return no_of_members;
}
/////////getter 4///
string getTeamName()
{
	return teamName;
}

/////Input team member function////

void inputTeamMember(string name)
{
	memberNames=new string[no_of_members];
	cout<<"Enter name of members"<<endl;
	for(int i=0;i<no_of_members;i++)
	{
		getline(cin,memberNames[i]);
	}

}

