#include<string>
using namespace std;
class cricketTeam {
private:
	string* memberNames;
	int no_of_members;
	char * teamName;
	int scoreinlast10matches[10];
	int rank;
	string captain;
public:
	cricketTeam();
	cricketTeam(string teamName, int no_of_members);
	cricketTeam(string);
	void setCaptain(string);
	void setRank(int);
	void setNoOfMembers(int);
	void setTeamName(string);
	string getCaptain();
	int getRank();
	int getNoOfMembers();
	string getTeamName();
	void inputTeamMember(string name);
	void inputScore(int score);
};

