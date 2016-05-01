// definition of a general rocket
typedef struct GeneralMissile {
  unsigned long x;      // x coordinate
  unsigned long y;      // y coordinate
  const unsigned char *image[2]; // two pointers to images
  unsigned long life;
	
	unsigned char width;
	unsigned char height;
	
} GeneralMissile;

// definition of a general sprite
typedef struct GeneralSprite {
  unsigned long x;      // x coordinate
  unsigned long y;      // y coordinate
  const unsigned char *image[2]; // two pointers to images
  unsigned long life; // dead when comes to 0
	unsigned long special_weapon_status; // gotta collect 5 coins
	unsigned char width;
	unsigned char height;
	
	unsigned long onScreen;
	
	GeneralMissile Missile;
	
} GeneralSprite;
