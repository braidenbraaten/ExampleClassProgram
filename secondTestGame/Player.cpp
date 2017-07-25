#include "Player.h"
#include <iostream>

using namespace std;
Player::Player()
{
	m_weaponStats.m_Fists = Fists::BARE;
	m_weaponStats.m_Pistols = Pistols::NONE;
	m_weaponStats.m_WeaponCatagory = WeaponCatagory::FISTS;

}


Player::~Player()
{
}


void Player::setHealth(int newHp)
{
	m_health = newHp;
}

void Player::changeWeapons(WeaponCatagory wc, int index)
{
	


	switch (wc)
	{
	case FISTS:
		if (index > MAX_FIST_SIZE)
		{
			cout << "outside fist enum size, make sure index is within the range of the enum" << endl;
			system("pause");
		}
		m_weaponStats.m_Fists = (Fists)index;
		break;
	case PISTOLS:
		m_weaponStats.m_Pistols = (Pistols)index;
		break;
	case AR:
		m_weaponStats.m_ar = (AssaultRifle)index;
		break;

		/*  WILL ADD IN LATER */
	case SEMI:
		break;
	case SMG:
		break;
	case LMG:
		break;
	case RIFLE:
		break;
	default:
		break;
	}


	switch ((WeaponCatagory)index)
	{
	case FISTS:
		cout << "This works!" << endl;

	default:
		break;
	}
}

void Player::attack()
{
	//changeWeapons((WeaponCatagory)1, 0);
}

int Player::getHealth()
{
	return m_health;
}
