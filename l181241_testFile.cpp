#include<iostream>
#include<fstream>
#include<cstring>
#include"header.h"
using namespace std;
int main()
{
	string team_name,captain_n;
	int NoOfMembers,rank_;
	cricketTeam obj;
	//ifstream fin;
	//fin.open("file.txt");
	cout << "Enter team name" << endl;
	getline(cin, team_name);
	cout << "Enter no. of members of Team" << endl;
	cin >> NoOfMembers;
	cricketTeam(team_name,NoOfMembers);
	//////////constructor with filing is remained//
	
	//////////setter///////////////
	cout<<"Ente captain Name"<<endl;
	getline(cin,captain_n);
	obj.setCaptain(captain_n);//////setter//
	cout<<"Enter rank of team"<<endl;
	cin>>rank_; 
	obj.setRank(rank_);///setter//
	obj.setTeamName(team_name);//setter///
	obj.setNoOfMembers(NoOfMembers);///setter/////
	/////input team member ////
	obj.inputTeamMember(team_name);
	
	

}

