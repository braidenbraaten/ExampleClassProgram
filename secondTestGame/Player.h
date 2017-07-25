#pragma once

/*
Things to talk about
-classes
-can hold variables, functions, and can have protective layers (public, protected, private)
-constructors & destructors
-inheritance
-virtual functions and there purpose



*/

//the catagory of weapon (only things up to AR are in)
enum WeaponCatagory {FISTS, PISTOLS, AR, SEMI, SMG, LMG, RIFLE };

//Make sure that this is set to the last value in each enum 


//sub catagories of weapons
enum Fists        {BARE  , BRASS , SPIKED, ELECTRIC    };
enum Pistols      {NONE ,MAGNUM, M9    , GLOCK , DESERT_EAGLE};
enum AssaultRifle {EMPTY ,M19   , SCAR_L, SCAR_H              };

const int MAX_FIST_SIZE = ELECTRIC;
const int MAX_PISTOL_SIZE = DESERT_EAGLE;
const int MAX_AR_SIZE = SCAR_H;


//int getFistTypeByIndex(int index);




struct WeaponStats
{
	int damage;
	int range;
	int clipSize;
	float reloadSpeed;
	WeaponCatagory m_WeaponCatagory;
	Fists m_Fists;
	Pistols m_Pistols;
	AssaultRifle m_ar;
	//add in the other weapon types later
};



class Player
{
private:
	int m_health;
	int m_shield;
	bool isAlive;
	WeaponStats m_weaponStats;
	
	


protected:
	void setHealth(int newHealth);
	void changeWeapons(WeaponCatagory wc, int index);

public:
	Player();
	~Player();

	void attack();

	//gets the players health value even though it is a private variable
	int getHealth();


};

