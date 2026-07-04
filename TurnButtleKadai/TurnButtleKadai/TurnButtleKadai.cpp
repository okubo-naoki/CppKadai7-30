#include<iostream>
using namespace std;

struct Character
{
	string name;
	int Attuck;
};
struct Team
{
	string name;
	int power;
	Character menber[3];

};

int main()
{
	Team Player;
	Team Enemy;
	

	Player.name = "プレイヤー";
	Player.power = 300;
	
	Enemy.name = "敵";
	Enemy.power = 300;

	int atk = rand() % 101;
	int atk2 = rand() % (101 - atk);
	int atk3 = rand() % 100 - atk - atk2;

	Player.menber[0].name = "剣士";
	Player.menber[1].name = "魔法使い";
	Player.menber[2].name = "召喚士";
	Player.menber[0].Attuck = atk;
	Player.menber[1].Attuck = atk2;
	Player.menber[2].Attuck = atk3;
	
	int enemyatk = rand() % 101;
	int enemyatk2 = rand() % (101 - enemyatk);
	int enemyatk3 = rand() % 100 - enemyatk - enemyatk2;
	
	Enemy.menber[0].name = "剣士";
	Enemy.menber[1].name = "魔法使い";
	Enemy.menber[2].name = "召喚士";
	Enemy.menber[0].Attuck = enemyatk;
	Enemy.menber[1].Attuck = enemyatk2;
	Enemy.menber[2].Attuck = enemyatk3;
}
void choiceChar()
{
	int choice;
	cout << "キャラクターを選択してください\n" << endl;
	cout << "剣士\n" <<"魔法使い\n"<<"召喚士\n" << endl;
	cin >> choice;
	
}
 int Buttle()
 {

 }