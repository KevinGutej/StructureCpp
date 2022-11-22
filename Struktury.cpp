#include<iostream>

using namespace std;

struct Player
{
	string nickname = "";
	unsigned int level = 0;
	float money = 0.0;
	string clan = ""; 
};

struct Server
{
	Player players[128] = {};
	unsigned short int online = 0;
};

void display(Player p){
	cout << p.nickname << " " << " level: " << p.level << " money: " << p.money << " clan: " << p.clan << endl;
}

int main()
{
	Server server1;
	
	Player rex;
	Player wizard; 
	
	rex.nickname = "Rexanimus";
	rex.level = 1;
	rex.money = 100.0;
	rex.clan = "Brothers";
	
	wizard.nickname = "Wiz";
	wizard.level = 5;
	wizard.money = 650.0;
	wizard.clan = "Brothers";
	
	server1.players[0] = rex;
	server1.online = server1.online + 1;
	server1.players[1] = wizard;
	server1.online = server1.online + 1;
	
	display(server1.players[0]); 
	display(server1.players[1]);
	cout << "Online Players: " << server1.online << endl;
	return 0;
}
