
#undef main
#include "System.h"
#include <sqlite3.h>
#include <vector>
#include "GameObject.h"
#include "CardGame/Card.h"
#include "CardGame/Player.h"
#include "CardGame/Create_Deck.h"
#include "DataBase/DataBase.h"

using namespace std;
//Screen dimension constant
const int SCREEN_WIDTH = 640;
const int SCREEN_HEIGHT = 480;

int main(int argc, char* argv[]) {
	std::vector<Card*> aux = DataBase::Init("cartas.db");
	if (System::GetInstance()->Init()){
		GameObject* vinnie = new GameObject("Test");
		System::GetInstance()->AddGameObject(vinnie);
		System::GetInstance()->Execute();
		delete vinnie;
	}
}
