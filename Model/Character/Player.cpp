#include "Player.h"

Player::Player(std::string name) : Player(name, 0, 0, 0, 0, 0, 0, 0, 0, 0)
{

}
Player::Player(std::string n, int s, double hR, int e, int mH, 
		int h, int d, int i, int mM, int m) : 
		Character(n,s,hR,e,mH,h,d,i,mM,m)
{
}
Player::~Player()
{
}
