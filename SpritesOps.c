// definition of a general rocket
typedef struct GeneralMissile {
  unsigned long x;      // x coordinate
  unsigned long y;      // y coordinate
  const unsigned char *image[2]; // two pointers to images
  unsigned long life;
	unsigned long firePermission;
	
	unsigned char width;
	unsigned char height;
	
} GeneralMissile;

// definition of a general sprite
typedef struct GeneralSprite {
  unsigned long x;      // x coordinate
  unsigned long y;      // y coordinate
  const unsigned char *image[2]; // two pointers to images
  unsigned long life; // dead when comes to 0. MAX 3
	unsigned long special_weapon_status; // gotta collect 5 coins
	unsigned char width;
	unsigned char height;
	
	GeneralMissile Missile;
	
} GeneralSprite;

const unsigned long numberOfEnemies = 2;

// define enemies
GeneralSprite Enemy[numberOfEnemies];
// define main ship
GeneralSprite Ship;

void InitSprites(void){
	int i;
  
	Ship.x = 0;
	Ship.image[0] = _my_PlayerShip2_00;
	Ship.image[1] = _my_PlayerShip2_01;
	Ship.life = 3;
	Ship.special_weapon_status = 2;
	Ship.width  = _my_PlayerShip2_00[18];
	Ship.height = _my_PlayerShip2_00[22];
	Ship.Missile.image[0] = _my_Missile_01;
	Ship.Missile.image[1] = _my_Missile_02;
	Ship.Missile.life = 0;
	Ship.Missile.firePermission = 0x0;
	Ship.Missile.width  = _my_Missile_01[18];
	Ship.Missile.height = _my_Missile_01[22];
	
	for(i=0; i<numberOfEnemies; i++){
    Enemy[i].x = 66;
    Enemy[i].y = 22 + 15*i;
    Enemy[i].image[0] = SmallEnemy30PointA;
    Enemy[i].image[1] = SmallEnemy30PointB;
    Enemy[i].life = 1;
		Enemy[i].width  = SmallEnemy30PointA[18];
		Enemy[i].height = SmallEnemy30PointA[22];
    Enemy[i].Missile.y = 22 + 15*i - 3;
		Enemy[i].Missile.image[0] = _my_Enemy_Missile_01;
		Enemy[i].Missile.image[1] = _my_Enemy_Missile_01;
		Enemy[i].Missile.firePermission = 0x0;
		Enemy[i].Missile.width  = _my_Enemy_Missile_01[18];
		Enemy[i].Missile.height = _my_Enemy_Missile_01[22];
   }
}

void Move(void){
	int i;
  for(i=0;i<4;i++){
    if(Enemy[i].x < 72){
      Enemy[i].x += 2; // move to right
    }else{
      Enemy[i].life = 0;
    }
  }
}

/*
void Draw(void){
	int i;
  Nokia5110_ClearBuffer();
  for(i=0;i<4;i++){
    if(Enemy[i].life > 0){
     Nokia5110_PrintBMP(Enemy[i].x, Enemy[i].y, Enemy[i].image[FrameCount], 0);
    }
  }
  Nokia5110_DisplayBuffer();      // draw buffer
  FrameCount = (FrameCount+1)&0x01; // 0,1,0,1,...
}
*/
