unsigned long const sound_Shoot_Count = 4080;

const unsigned char sound_Shoot[sound_Shoot_Count] = {
  8, 6, 6, 10, 13, 8, 2, 7, 13, 7, 3, 6, 9, 14, 10, 4, 5, 10, 12, 6, 
  5, 8, 13, 8, 3, 6, 8, 13, 10, 5, 5, 8, 12, 7, 4, 8, 13, 9, 4, 7, 
  9, 11, 7, 3, 8, 13, 8, 5, 7, 13, 15, 6, 3, 5, 10, 7, 2, 5, 9, 13, 
  12, 12, 12, 7, 6, 1, 0, 5, 10, 7, 8, 15, 15, 15, 7, 0, 0, 0, 0, 0, 
  6, 15, 15, 15, 15, 15, 12, 0, 0, 0, 1, 11, 10, 9, 15, 15, 15, 11, 2, 0, 
  0, 1, 0, 4, 10, 15, 15, 15, 15, 15, 4, 0, 0, 3, 4, 3, 8, 13, 15, 15, 
  15, 9, 3, 1, 0, 0, 1, 9, 13, 13, 15, 15, 15, 13, 0, 0, 0, 1, 1, 2, 
  8, 15, 15, 15, 15, 15, 9, 0, 0, 0, 5, 4, 5, 11, 15, 15, 15, 15, 9, 3, 
  0, 0, 1, 7, 5, 8, 13, 15, 15, 15, 9, 4, 0, 0, 0, 0, 9, 10, 10, 14, 
  15, 15, 15, 5, 0, 0, 0, 0, 0, 5, 13, 14, 14, 15, 15, 15, 7, 0, 0, 0, 
  5, 4, 3, 8, 13, 15, 15, 15, 14, 7, 3, 0, 0, 0, 7, 8, 6, 12, 15, 15, 
  15, 14, 9, 5, 0, 0, 0, 6, 6, 6, 11, 15, 15, 15, 15, 12, 7, 0, 0, 0, 
  3, 8, 7, 8, 14, 15, 15, 15, 15, 6, 3, 0, 0, 0, 1, 8, 13, 10, 12, 15, 
  15, 15, 12, 1, 0, 0, 0, 0, 3, 10, 13, 12, 13, 15, 15, 15, 9, 5, 1, 0, 
  0, 0, 7, 9, 7, 11, 15, 15, 15, 15, 13, 8, 0, 0, 0, 2, 5, 5, 8, 13, 
  15, 15, 15, 15, 15, 8, 0, 0, 0, 2, 2, 2, 7, 12, 15, 15, 15, 15, 15, 14, 
  2, 0, 0, 0, 3, 3, 4, 8, 13, 15, 15, 15, 15, 15, 14, 2, 0, 0, 0, 1, 
  2, 6, 11, 15, 14, 14, 15, 15, 15, 9, 2, 0, 0, 0, 0, 1, 6, 12, 12, 11, 
  15, 15, 15, 15, 13, 3, 0, 0, 0, 0, 0, 4, 9, 15, 12, 12, 15, 15, 15, 15, 
  9, 3, 0, 0, 0, 0, 2, 7, 13, 10, 10, 14, 15, 15, 15, 13, 9, 4, 1, 0, 
  0, 0, 6, 8, 7, 10, 11, 15, 15, 15, 14, 15, 14, 5, 0, 0, 0, 0, 1, 3, 
  8, 13, 13, 11, 15, 15, 15, 14, 13, 9, 5, 0, 0, 0, 0, 6, 7, 7, 11, 14, 
  13, 13, 15, 15, 15, 13, 7, 3, 1, 0, 0, 0, 6, 6, 7, 10, 13, 15, 15, 14, 
  15, 15, 14, 9, 4, 1, 0, 0, 0, 3, 6, 7, 9, 12, 14, 12, 14, 15, 15, 15, 
  11, 9, 5, 1, 0, 0, 0, 4, 5, 7, 10, 12, 15, 13, 13, 15, 15, 15, 13, 9, 
  4, 2, 0, 0, 0, 1, 6, 7, 9, 11, 13, 15, 14, 13, 15, 15, 15, 12, 7, 2, 
  0, 0, 0, 0, 2, 8, 8, 9, 11, 12, 14, 15, 14, 13, 15, 15, 14, 9, 3, 0, 
  0, 0, 0, 0, 4, 10, 11, 10, 11, 11, 13, 15, 14, 13, 14, 15, 13, 8, 3, 1, 
  0, 0, 0, 0, 5, 10, 10, 10, 11, 13, 14, 12, 12, 14, 15, 15, 12, 9, 7, 3, 
  0, 0, 0, 1, 4, 5, 8, 10, 13, 13, 11, 10, 12, 15, 14, 13, 13, 13, 13, 7, 
  1, 0, 0, 0, 0, 1, 6, 10, 11, 10, 11, 12, 14, 11, 11, 13, 13, 15, 13, 11, 
  10, 7, 4, 0, 0, 0, 0, 1, 3, 7, 10, 13, 13, 11, 10, 11, 13, 12, 11, 12, 
  14, 13, 11, 9, 5, 3, 0, 0, 0, 0, 3, 5, 7, 10, 11, 13, 12, 10, 11, 12, 
  12, 11, 12, 13, 14, 11, 9, 8, 6, 4, 0, 0, 0, 0, 4, 6, 7, 10, 12, 12, 
  11, 10, 11, 12, 11, 10, 12, 12, 13, 13, 10, 10, 9, 6, 2, 0, 0, 0, 0, 1, 
  4, 7, 10, 13, 12, 11, 11, 12, 10, 9, 10, 11, 13, 12, 11, 11, 12, 10, 8, 6, 
  4, 2, 0, 0, 0, 2, 5, 7, 8, 10, 12, 13, 11, 11, 11, 11, 11, 9, 10, 11, 
  13, 11, 10, 11, 11, 11, 8, 5, 3, 2, 1, 0, 0, 1, 4, 8, 9, 9, 11, 11, 
  12, 12, 10, 10, 10, 11, 9, 9, 10, 12, 12, 11, 10, 10, 11, 9, 7, 5, 4, 1, 
  0, 0, 2, 3, 3, 5, 8, 11, 11, 11, 11, 12, 11, 10, 9, 10, 10, 9, 8, 9, 
  11, 12, 11, 10, 10, 10, 10, 8, 7, 6, 4, 1, 0, 1, 1, 3, 4, 5, 7, 9, 
  11, 12, 12, 11, 11, 11, 11, 10, 9, 9, 9, 9, 8, 9, 10, 11, 11, 10, 10, 9, 
  9, 9, 8, 7, 6, 3, 3, 2, 1, 2, 3, 4, 5, 6, 8, 9, 11, 12, 11, 11, 
  11, 11, 10, 9, 9, 9, 9, 9, 8, 8, 9, 9, 10, 10, 10, 11, 9, 9, 9, 8, 
  9, 7, 7, 6, 5, 3, 2, 2, 3, 3, 4, 5, 6, 7, 9, 10, 10, 11, 11, 11, 
  11, 10, 10, 10, 10, 9, 9, 9, 9, 8, 8, 8, 9, 9, 9, 9, 10, 10, 10, 9, 
  9, 8, 9, 8, 7, 7, 7, 7, 6, 4, 3, 3, 3, 3, 4, 4, 5, 7, 7, 7, 
  9, 10, 11, 11, 11, 11, 11, 10, 10, 10, 10, 10, 9, 9, 9, 9, 9, 8, 8, 8, 
  9, 8, 8, 8, 8, 9, 9, 9, 9, 9, 9, 9, 8, 8, 8, 8, 7, 7, 7, 8, 
  7, 5, 3, 1, 0, 0, 3, 6, 9, 10, 13, 15, 15, 11, 5, 4, 3, 7, 14, 13, 
  5, 4, 4, 7, 15, 13, 5, 4, 4, 8, 15, 13, 5, 4, 4, 7, 15, 13, 5, 4, 
  4, 7, 15, 13, 5, 4, 4, 7, 15, 13, 5, 4, 4, 6, 15, 14, 5, 4, 4, 6, 
  15, 14, 5, 3, 4, 6, 14, 15, 6, 3, 4, 5, 13, 15, 7, 3, 3, 5, 11, 15, 
  9, 3, 4, 4, 10, 15, 10, 3, 3, 4, 9, 15, 12, 4, 3, 3, 7, 15, 13, 5, 
  3, 3, 6, 15, 15, 6, 3, 3, 5, 13, 15, 8, 3, 4, 4, 10, 15, 11, 3, 3, 
  3, 8, 15, 13, 4, 3, 3, 6, 15, 15, 6, 3, 4, 5, 12, 15, 9, 3, 3, 3, 
  9, 15, 13, 4, 3, 3, 6, 15, 15, 6, 3, 3, 4, 12, 15, 10, 3, 3, 4, 8, 
  15, 13, 4, 3, 3, 6, 14, 15, 7, 3, 3, 4, 10, 15, 12, 3, 3, 3, 6, 15, 
  15, 6, 3, 3, 4, 11, 15, 11, 3, 3, 3, 7, 15, 15, 5, 3, 3, 5, 11, 15, 
  11, 3, 3, 4, 7, 15, 15, 6, 3, 3, 4, 11, 15, 11, 3, 3, 3, 6, 15, 15, 
  7, 3, 3, 4, 10, 15, 13, 4, 2, 3, 6, 13, 15, 9, 3, 3, 3, 8, 15, 15, 
  5, 3, 3, 4, 10, 15, 12, 3, 3, 3, 6, 13, 15, 9, 3, 3, 4, 8, 15, 15, 
  6, 3, 3, 4, 10, 15, 13, 4, 3, 3, 5, 12, 15, 10, 3, 3, 4, 6, 14, 15, 
  8, 3, 3, 4, 8, 15, 15, 6, 2, 3, 4, 9, 15, 14, 4, 3, 3, 5, 10, 15, 
  13, 3, 3, 3, 5, 12, 15, 11, 3, 3, 4, 6, 13, 15, 10, 3, 3, 4, 6, 14, 
  15, 9, 3, 3, 4, 7, 14, 15, 8, 3, 3, 4, 7, 14, 15, 8, 2, 3, 4, 7, 
  15, 15, 8, 3, 3, 4, 7, 14, 15, 7, 3, 3, 4, 7, 14, 15, 8, 3, 3, 4, 
  7, 14, 15, 8, 3, 3, 4, 7, 13, 15, 10, 3, 3, 4, 6, 12, 15, 11, 3, 3, 
  4, 6, 11, 15, 12, 4, 2, 3, 5, 9, 15, 13, 4, 2, 3, 5, 9, 15, 15, 5, 
  3, 3, 5, 8, 15, 15, 7, 3, 3, 4, 7, 13, 15, 10, 3, 3, 4, 6, 11, 15, 
  13, 4, 3, 3, 5, 9, 15, 15, 6, 3, 3, 5, 7, 13, 15, 9, 3, 3, 4, 6, 
  10, 15, 13, 4, 3, 4, 5, 9, 15, 15, 7, 3, 3, 4, 7, 12, 15, 11, 3, 3, 
  3, 6, 9, 15, 15, 6, 3, 3, 5, 7, 12, 15, 11, 3, 3, 4, 6, 9, 15, 15, 
  6, 3, 3, 5, 7, 12, 15, 12, 4, 3, 3, 5, 8, 15, 15, 7, 3, 3, 4, 7, 
  10, 15, 13, 4, 3, 3, 5, 7, 13, 15, 10, 3, 3, 4, 6, 9, 15, 15, 7, 3, 
  3, 4, 6, 10, 15, 14, 4, 3, 3, 5, 7, 11, 15, 12, 4, 3, 3, 6, 8, 13, 
  15, 10, 3, 3, 4, 6, 8, 14, 15, 8, 3, 3, 4, 6, 9, 15, 15, 6, 3, 3, 
  5, 6, 9, 15, 15, 5, 3, 3, 5, 6, 10, 15, 14, 5, 3, 3, 5, 7, 10, 15, 
  14, 5, 3, 3, 5, 7, 10, 15, 14, 5, 3, 3, 5, 7, 10, 15, 14, 6, 3, 3, 
  5, 7, 9, 15, 15, 7, 3, 3, 5, 6, 9, 14, 15, 8, 3, 3, 4, 6, 8, 13, 
  15, 9, 3, 3, 4, 6, 8, 12, 15, 11, 4, 3, 4, 5, 7, 10, 15, 13, 4, 3, 
  3, 5, 7, 9, 15, 15, 7, 3, 3, 4, 7, 8, 13, 15, 10, 4, 3, 4, 6, 7, 
  11, 15, 13, 5, 3, 3, 5, 7, 9, 14, 15, 8, 3, 3, 4, 6, 8, 11, 15, 12, 
  4, 3, 4, 6, 7, 9, 15, 15, 8, 4, 3, 4, 6, 7, 11, 15, 12, 5, 3, 4, 
  5, 7, 9, 14, 15, 9, 3, 3, 4, 6, 7, 10, 15, 14, 6, 3, 4, 5, 6, 8, 
  11, 15, 12, 4, 3, 4, 5, 7, 9, 13, 15, 10, 4, 3, 4, 6, 7, 9, 14, 15, 
  9, 4, 3, 4, 6, 7, 10, 15, 15, 7, 3, 4, 4, 6, 7, 10, 15, 14, 6, 3, 
  3, 4, 6, 7, 10, 15, 14, 6, 3, 3, 4, 7, 8, 10, 15, 14, 6, 3, 3, 4, 
  7, 8, 10, 15, 14, 7, 3, 3, 4, 6, 8, 10, 14, 15, 8, 3, 3, 4, 6, 7, 
  9, 13, 15, 10, 4, 3, 4, 6, 7, 9, 12, 15, 11, 4, 3, 4, 5, 7, 8, 11, 
  15, 14, 6, 4, 4, 4, 7, 8, 10, 14, 15, 9, 4, 3, 4, 6, 7, 9, 12, 15, 
  12, 5, 3, 4, 5, 7, 8, 10, 14, 15, 8, 4, 4, 4, 6, 7, 8, 11, 15, 12, 
  5, 3, 4, 5, 7, 8, 9, 13, 15, 10, 4, 3, 4, 6, 7, 8, 10, 15, 14, 7, 
  4, 3, 4, 6, 8, 9, 11, 15, 13, 5, 3, 3, 4, 6, 8, 9, 12, 15, 11, 4, 
  3, 4, 5, 7, 8, 9, 12, 15, 11, 4, 3, 4, 5, 7, 8, 9, 13, 15, 11, 4, 
  3, 4, 5, 7, 8, 9, 12, 15, 11, 4, 3, 4, 5, 7, 8, 9, 12, 15, 12, 5, 
  3, 4, 5, 7, 8, 9, 11, 15, 13, 6, 4, 4, 5, 6, 7, 8, 10, 14, 15, 8, 
  4, 3, 4, 6, 7, 8, 9, 12, 15, 11, 4, 3, 4, 5, 7, 8, 9, 10, 15, 14, 
  6, 4, 3, 4, 6, 7, 8, 9, 12, 15, 11, 4, 3, 4, 5, 7, 8, 8, 10, 14, 
  14, 8, 4, 3, 4, 6, 7, 8, 9, 11, 15, 13, 6, 4, 3, 5, 6, 7, 8, 9, 
  12, 15, 12, 5, 3, 4, 5, 7, 7, 8, 9, 13, 15, 11, 4, 3, 4, 5, 7, 8, 
  9, 9, 12, 15, 11, 4, 3, 4, 5, 7, 7, 9, 9, 12, 15, 12, 5, 3, 4, 5, 
  6, 7, 8, 9, 11, 15, 13, 6, 3, 3, 5, 6, 7, 8, 9, 10, 14, 15, 8, 4, 
  3, 4, 6, 7, 8, 9, 10, 12, 15, 11, 5, 3, 3, 5, 7, 7, 8, 9, 11, 14, 
  14, 8, 4, 3, 4, 6, 7, 8, 9, 9, 12, 15, 13, 6, 4, 4, 4, 6, 7, 8, 
  9, 9, 12, 15, 11, 5, 3, 4, 4, 6, 7, 8, 9, 9, 12, 15, 10, 4, 3, 3, 
  5, 6, 7, 8, 9, 9, 12, 15, 11, 4, 4, 4, 5, 6, 7, 8, 9, 9, 12, 15, 
  12, 5, 3, 4, 5, 6, 7, 8, 9, 9, 11, 14, 13, 8, 4, 3, 4, 6, 7, 8, 
  9, 9, 10, 12, 15, 11, 5, 3, 4, 5, 7, 8, 8, 9, 9, 11, 14, 14, 8, 4, 
  3, 4, 6, 7, 8, 8, 9, 9, 11, 15, 13, 7, 3, 3, 4, 6, 7, 8, 9, 9, 
  9, 11, 15, 12, 6, 4, 3, 4, 6, 7, 8, 9, 9, 9, 11, 14, 13, 7, 4, 3, 
  4, 6, 7, 8, 8, 9, 9, 10, 13, 14, 9, 4, 3, 4, 5, 7, 8, 8, 9, 9, 
  9, 12, 14, 12, 6, 3, 3, 5, 6, 7, 8, 9, 9, 9, 10, 12, 14, 10, 4, 3, 
  3, 5, 7, 7, 8, 9, 9, 9, 10, 13, 14, 9, 4, 3, 4, 5, 7, 8, 8, 9, 
  9, 9, 10, 13, 14, 10, 4, 3, 4, 5, 6, 8, 8, 9, 9, 9, 10, 12, 14, 11, 
  6, 3, 3, 4, 6, 7, 8, 9, 9, 9, 9, 10, 13, 14, 9, 4, 3, 4, 5, 6, 
  7, 8, 9, 9, 9, 9, 11, 13, 12, 8, 4, 3, 4, 6, 7, 7, 8, 9, 9, 9, 
  9, 11, 13, 13, 8, 4, 3, 4, 5, 7, 8, 8, 9, 9, 9, 9, 10, 12, 13, 10, 
  4, 3, 4, 5, 6, 7, 8, 9, 9, 9, 9, 9, 11, 13, 12, 7, 4, 3, 4, 6, 
  7, 8, 8, 9, 9, 9, 9, 9, 11, 13, 12, 7, 4, 3, 4, 6, 7, 8, 9, 9, 
  9, 9, 9, 9, 11, 13, 12, 8, 4, 3, 4, 5, 7, 8, 8, 9, 9, 9, 9, 9, 
  10, 12, 13, 10, 6, 3, 3, 5, 6, 7, 8, 8, 9, 9, 9, 9, 9, 10, 12, 13, 
  10, 5, 4, 3, 5, 6, 7, 8, 9, 9, 9, 9, 9, 9, 9, 11, 13, 11, 7, 4, 
  3, 4, 6, 7, 8, 8, 9, 9, 9, 9, 9, 9, 10, 11, 13, 10, 5, 3, 3, 4, 
  6, 7, 8, 8, 9, 9, 9, 9, 9, 8, 9, 11, 13, 10, 6, 3, 3, 5, 6, 7, 
  8, 8, 9, 9, 9, 9, 9, 9, 8, 10, 12, 12, 9, 5, 3, 3, 5, 6, 7, 8, 
  9, 9, 9, 9, 9, 9, 9, 9, 10, 12, 12, 10, 5, 4, 3, 5, 6, 7, 8, 9, 
  9, 9, 9, 9, 9, 9, 9, 9, 10, 12, 12, 9, 5, 3, 4, 5, 6, 7, 8, 9, 
  9, 9, 9, 9, 9, 9, 8, 9, 9, 11, 12, 10, 6, 4, 3, 5, 6, 7, 8, 8, 
  9, 9, 9, 9, 9, 8, 9, 8, 8, 9, 11, 12, 10, 6, 4, 3, 5, 6, 7, 8, 
  8, 9, 9, 9, 9, 9, 9, 9, 8, 8, 8, 10, 11, 12, 9, 5, 4, 3, 5, 6, 
  7, 8, 8, 9, 9, 9, 9, 9, 9, 9, 8, 8, 8, 9, 10, 11, 11, 8, 5, 3, 
  4, 5, 6, 7, 8, 9, 9, 9, 9, 9, 8, 9, 9, 8, 8, 8, 8, 9, 10, 11, 
  10, 7, 4, 3, 4, 5, 7, 7, 9, 9, 9, 9, 9, 9, 9, 8, 8, 8, 8, 8, 
  8, 8, 9, 11, 11, 10, 7, 4, 4, 4, 6, 7, 8, 8, 9, 9, 9, 9, 9, 9, 
  8, 8, 8, 8, 8, 8, 8, 8, 9, 10, 11, 10, 7, 4, 3, 4, 5, 7, 7, 8, 
  9, 9, 9, 9, 9, 9, 8, 8, 8, 8, 8, 8, 8, 8, 8, 9, 10, 10, 11, 9, 
  6, 4, 4, 5, 6, 7, 8, 8, 9, 9, 9, 9, 9, 9, 9, 8, 8, 8, 8, 8, 
  8, 8, 8, 8, 8, 9, 10, 11, 10, 7, 5, 4, 4, 5, 6, 8, 8, 8, 9, 9, 
  9, 9, 9, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 9, 10, 10, 11, 
  9, 6, 5, 4, 5, 6, 7, 8, 8, 9, 9, 9, 9, 9, 9, 9, 8, 8, 8, 8, 
  8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 9, 10, 10, 10, 8, 6, 4, 4, 5, 
  6, 7, 8, 8, 9, 9, 9, 9, 9, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 
  8, 8, 8, 8, 8, 8, 8, 8, 8, 9, 10, 10, 10, 8, 6, 5, 4, 4, 6, 7, 
  8, 8, 9, 9, 9, 9, 9, 9, 9, 9, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 
  8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 9, 10, 10, 10, 9, 8, 6, 5, 
  4, 4, 6, 7, 8, 8, 9, 9, 9, 9, 9, 9, 9, 8, 9, 8, 8, 8, 8, 8, 
  8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 
  8, 8, 8, 8, 9, 9, 9, 9, 9, 8, 7, 6, 5, 4, 5, 6, 7, 8, 8, 9, 
  9, 9, 9, 9, 9, 9, 8, 10, 11, 7, 6, 7, 7, 7, 8, 10, 8, 6, 8, 7, 
  8, 10, 7, 6, 8, 7, 9, 10, 7, 7, 8, 7, 8, 10, 8, 6, 8, 7, 8, 10, 
  8, 6, 8, 7, 8, 10, 7, 7, 8, 7, 8, 10, 7, 6, 8, 7, 8, 10, 7, 7, 
  8, 7, 8, 10, 7, 7, 8, 7, 8, 10, 8, 7, 8, 7, 8, 9, 8, 8, 8, 7, 
  8, 9, 9, 8, 7, 7, 7, 8, 10, 8, 7, 8, 7, 8, 10, 8, 6, 8, 7, 8, 
  10, 7, 7, 8, 7, 8, 10, 8, 7, 8, 7, 8, 9, 9, 8, 7, 8, 7, 8, 10, 
  7, 6, 8, 7, 8, 10, 7, 7, 8, 7, 8, 9, 8, 8, 7, 7, 8, 8, 10, 8, 
  7, 8, 7, 8, 10, 7, 7, 8, 7, 8, 9, 8, 8, 7, 7, 7, 8, 10, 8, 7, 
  8, 7, 8, 10, 8, 7, 8, 7, 8, 9, 9, 8, 7, 8, 7, 8, 10, 7, 7, 8, 
  7, 8, 9, 9, 8, 7, 7, 7, 8, 10, 8, 7, 8, 7, 8, 9, 9, 8, 7, 8, 
  7, 8, 10, 7, 7, 8, 7, 8, 9, 9, 8, 7, 7, 7, 8, 10, 7, 7, 8, 7, 
  8, 8, 10, 8, 7, 8, 7, 8, 10, 8, 8, 8, 7, 8, 8, 10, 8, 7, 8, 7, 
  8, 9, 9, 8, 7, 7, 7, 8, 10, 8, 7, 8, 7, 8, 8, 10, 7, 7, 8, 7, 
  8, 9, 10, 8, 7, 8, 7, 8, 9, 8, 8, 7, 7, 7, 8, 10, 7, 7, 8, 7, 
  8, 8, 10, 8, 7, 8, 7, 8, 9, 10, 8, 7, 8, 7, 8, 9, 9, 8, 7, 7, 
  7, 8, 9, 8, 8, 7, 7, 8, 8, 10, 8, 8, 8, 7, 7, 8, 10, 8, 8, 8, 
  7, 8, 8, 10, 8, 7, 8, 7, 8, 8, 10, 7, 7, 8, 7, 8, 8, 10, 7, 7, 
  8, 7, 8, 8, 10, 7, 7, 8, 7, 8, 8, 10, 7, 7, 8, 8, 8, 8, 10, 8, 
  8, 8, 7, 8, 8, 10, 8, 8, 8, 7, 8, 8, 9, 8, 8, 8, 7, 8, 8, 9, 
  9, 8, 7, 7, 8, 8, 8, 9, 8, 7, 7, 8, 8, 8, 10, 8, 7, 8, 7, 7, 
  8, 10, 7, 7, 8, 7, 8, 8, 9, 8, 8, 8, 7, 8, 8, 9, 9, 8, 7, 7, 
  8, 8, 8, 10, 8, 7, 8, 8, 8, 8, 10, 8, 7, 8, 7, 8, 8, 9, 9, 8, 
  7, 7, 8, 7, 8, 10, 7, 7, 8, 7, 8, 8, 9, 8, 8, 8, 7, 8, 8, 8, 
  10, 8, 7, 8, 7, 8, 8, 9, 8, 8, 8, 7, 8, 8, 8, 10, 7, 7, 8, 7, 
  8, 8, 9, 8, 8, 8, 7, 8, 8, 8, 10, 7, 7, 8, 7, 8, 8, 9, 9, 8, 
  8, 7, 8, 8, 8, 9, 8, 8, 8, 7, 8, 8, 8, 10, 8, 7, 8, 7, 8, 8, 
  9, 9, 8, 8, 7, 8, 8, 8, 9, 8, 8, 8, 7, 8, 7, 8, 9, 7, 8, 8, 
  7, 8, 8, 8, 10, 8, 8, 8, 7, 8, 8, 8, 9, 8, 8, 8, 8, 8, 8, 8, 
  9, 8, 8, 7, 8, 8, 8, 9, 9, 8, 8, 8, 8, 8, 8, 9, 9, 8, 8, 8, 
  8, 8, 8, 8, 9, 8, 8, 8, 8, 8, 8, 9, 9, 8, 8, 8, 8, 8, 8, 9, 
  9, 8, 8, 8, 8, 8, 8, 8, 9, 8, 7, 7, 7, 8, 8, 8, 9, 7, 7, 8, 
  7, 8, 8, 8, 9, 7, 8, 8, 7, 8, 8, 8, 9, 8, 8, 8, 7, 8, 8, 8, 
  9, 8, 8, 8, 8, 8, 8, 8, 8, 9, 8, 8, 8, 8, 8, 8, 8, 9, 8, 8, 
  8, 8, 8, 8, 8, 8, 9, 8, 8, 8, 8, 8, 8, 8, 9, 7, 8, 8, 8, 8, 
  8, 8, 8, 9, 8, 8, 8, 8, 8, 8, 8, 9, 7, 8, 8, 8, 8, 8, 8, 8, 
  9, 8, 8, 8, 8, 8, 8, 8, 9, 8, 8, 8, 8, 8, 8, 8, 8, 9, 7, 8, 
  8, 8, 8, 8, 8, 8, 9, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 
  8, 8, 8, 9, 8, 8, 8, 8, 8, 8, 8, 8, 9, 8, 8, 8, 8, 8, 8, 8, 
  8, 9, 8, 8, 8, 8, 8, 8, 8, 8, 9, 8, 8, 8, 7, 8, 8, 8, 8, 9, 
  8, 8, 8, 8, 8, 8, 8, 8, 9, 8, 8, 8, 7, 8, 8, 8, 8, 8, 8, 8, 
  8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 9, 8, 8, 8, 
  8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 9, 8, 8, 8, 8, 
  8, 8, 8, 8, 9, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 
  8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 
  8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 
  8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 
  8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 
  8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 
  8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 
  8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 
  8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 
  8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 
  8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 
  8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 
  8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8};

	unsigned long const fastinvader4_Count = 1098;
	
	const unsigned char fastinvader4[fastinvader4_Count] = {
  8, 8, 8, 8, 8, 8, 8, 8, 9, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 
  8, 8, 8, 8, 8, 8, 6, 5, 3, 2, 1, 1, 1, 2, 3, 4, 6, 6, 8, 9, 
  10, 12, 13, 14, 14, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 14, 
  14, 13, 13, 12, 12, 10, 10, 9, 8, 8, 8, 7, 7, 6, 5, 5, 4, 4, 4, 4, 
  4, 4, 5, 6, 6, 6, 6, 6, 5, 4, 3, 3, 2, 1, 0, 0, 0, 0, 0, 0, 
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 2, 2, 
  3, 4, 5, 5, 6, 7, 8, 8, 9, 9, 10, 11, 12, 13, 13, 14, 14, 15, 15, 15, 
  15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 
  15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 14, 14, 
  14, 13, 13, 12, 12, 10, 8, 7, 5, 4, 3, 2, 2, 2, 3, 3, 4, 5, 6, 7, 
  7, 8, 8, 9, 9, 9, 10, 10, 10, 10, 10, 10, 9, 9, 9, 9, 8, 8, 8, 7, 
  7, 6, 5, 5, 4, 3, 3, 2, 2, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 
  2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 11, 12, 13, 14, 15, 15, 15, 15, 15, 15, 
  15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 
  15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 
  15, 15, 15, 15, 15, 13, 11, 9, 8, 7, 6, 6, 7, 7, 8, 8, 9, 9, 10, 11, 
  12, 13, 13, 13, 14, 14, 14, 14, 14, 14, 14, 13, 13, 13, 13, 12, 12, 11, 10, 9, 
  9, 8, 8, 7, 6, 6, 5, 4, 3, 3, 2, 2, 1, 0, 0, 0, 0, 0, 0, 0, 
  0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
  1, 2, 3, 4, 4, 5, 6, 7, 8, 9, 9, 10, 11, 12, 13, 13, 14, 14, 15, 15, 
  15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 
  15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 
  14, 14, 13, 12, 11, 9, 8, 6, 5, 4, 4, 4, 4, 5, 6, 7, 7, 8, 9, 9, 
  10, 11, 12, 12, 12, 12, 13, 12, 13, 12, 12, 12, 11, 11, 10, 10, 9, 9, 8, 8, 
  7, 7, 6, 5, 4, 4, 3, 2, 2, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 2, 3, 
  4, 4, 6, 6, 7, 8, 9, 10, 11, 12, 12, 13, 14, 15, 15, 15, 15, 15, 15, 15, 
  15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 
  15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 
  15, 15, 14, 13, 11, 9, 8, 7, 6, 5, 6, 5, 6, 7, 8, 8, 9, 10, 11, 11, 
  12, 13, 13, 13, 14, 14, 14, 14, 13, 13, 13, 12, 12, 11, 10, 10, 9, 9, 8, 8, 
  7, 6, 6, 5, 4, 3, 3, 2, 2, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
  0, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 2, 3, 4, 
  4, 6, 6, 7, 8, 9, 10, 10, 11, 12, 13, 14, 14, 15, 15, 15, 15, 15, 15, 15, 
  15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 
  15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 14, 
  14, 14, 13, 13, 12, 12, 12, 11, 11, 10, 10, 9, 9, 9, 8, 8, 8, 8, 8, 7, 
  7, 7, 6, 6, 6, 5, 5, 5, 5, 4, 4, 4, 4, 4, 3, 3, 3, 3, 2, 2, 
  3, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 
  2, 2, 2, 2, 2, 2, 2, 3, 2, 3, 3, 3, 3, 3, 3, 3, 3, 4, 3, 4, 
  4, 4, 4, 4, 4, 4, 5, 5, 5, 5, 5, 5, 6, 6, 6, 6, 7, 6, 7, 7, 
  7, 7, 7, 7, 7, 7, 8, 8, 7, 8, 8, 8, 8, 8, 8, 8, 8, 8, 9, 8, 
  9, 9, 9, 9, 9, 9, 9, 9, 10, 9, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 
  10, 10, 11, 11, 10, 11, 10, 11, 10, 11, 10, 11, 11, 11, 11, 11, 11, 11, 11, 11, 
  11, 11, 11, 11, 10, 11, 11, 10, 11, 11, 11, 10, 11, 11, 11, 10, 10, 10, 10, 10, 
  10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 9, 9, 10, 9, 10, 9, 9, 
  9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 8, 9, 9, 9, 8, 
  9, 9, 9, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 
  8, 7, 7, 8, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 
  7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7};

	unsigned long const invaderkilled_Count = 3377;
	const unsigned char invaderkilled[invaderkilled_Count] = {
  8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 
  8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 
  8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 
  8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 
  8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 9, 10, 9, 7, 
  6, 6, 6, 7, 8, 8, 7, 7, 8, 10, 10, 7, 6, 9, 12, 7, 5, 10, 13, 7, 
  1, 6, 13, 12, 4, 6, 12, 11, 6, 0, 7, 15, 9, 1, 9, 15, 6, 0, 8, 15, 
  8, 0, 7, 14, 7, 0, 9, 15, 6, 0, 10, 15, 7, 0, 4, 11, 15, 5, 2, 13, 
  11, 3, 4, 13, 11, 1, 7, 15, 7, 1, 6, 13, 14, 2, 5, 15, 7, 2, 4, 11, 
  15, 6, 0, 9, 15, 9, 1, 4, 11, 15, 5, 0, 11, 15, 3, 3, 13, 12, 5, 0, 
  9, 15, 9, 1, 4, 12, 13, 2, 5, 14, 10, 5, 0, 8, 15, 8, 0, 9, 15, 6, 
  0, 9, 15, 11, 4, 0, 10, 15, 4, 2, 12, 14, 2, 5, 14, 10, 4, 0, 9, 15, 
  6, 0, 10, 15, 6, 0, 10, 15, 6, 0, 8, 15, 12, 5, 0, 8, 15, 8, 0, 6, 
  12, 14, 6, 0, 8, 15, 10, 3, 3, 13, 11, 1, 6, 13, 13, 3, 2, 12, 13, 5, 
  0, 8, 15, 8, 0, 7, 14, 11, 1, 7, 15, 7, 0, 7, 14, 13, 3, 3, 12, 15, 
  5, 0, 11, 15, 2, 3, 12, 14, 5, 0, 7, 15, 11, 2, 6, 15, 6, 0, 7, 13, 
  15, 5, 0, 9, 15, 8, 0, 9, 15, 8, 3, 1, 10, 15, 9, 1, 4, 11, 15, 4, 
  2, 12, 14, 6, 0, 8, 15, 6, 0, 11, 15, 5, 0, 11, 15, 5, 0, 10, 15, 7, 
  0, 7, 15, 6, 0, 8, 14, 13, 4, 2, 11, 15, 5, 0, 7, 15, 8, 0, 8, 13, 
  12, 4, 0, 10, 15, 6, 0, 9, 15, 8, 2, 3, 12, 15, 4, 1, 13, 13, 3, 2, 
  13, 12, 3, 4, 12, 15, 4, 1, 12, 14, 5, 0, 9, 15, 8, 2, 6, 13, 13, 3, 
  2, 12, 15, 6, 0, 9, 15, 5, 0, 12, 15, 4, 1, 13, 14, 3, 3, 13, 12, 2, 
  5, 14, 11, 2, 6, 13, 12, 5, 0, 9, 15, 7, 0, 11, 15, 5, 0, 7, 15, 10, 
  2, 7, 13, 13, 5, 0, 8, 15, 10, 3, 4, 14, 10, 0, 9, 14, 10, 3, 0, 12, 
  15, 4, 1, 12, 15, 3, 2, 12, 15, 5, 0, 7, 15, 13, 3, 6, 13, 10, 3, 0, 
  12, 14, 4, 2, 12, 15, 4, 1, 11, 15, 8, 0, 7, 15, 6, 0, 8, 15, 12, 1, 
  8, 14, 8, 3, 1, 11, 15, 7, 0, 9, 15, 5, 0, 10, 15, 8, 2, 6, 13, 11, 
  4, 0, 10, 15, 7, 1, 6, 11, 15, 6, 0, 8, 14, 10, 3, 5, 13, 11, 4, 2, 
  11, 15, 7, 1, 3, 10, 15, 6, 0, 11, 15, 7, 1, 6, 15, 8, 1, 10, 15, 6, 
  0, 10, 15, 8, 1, 6, 13, 11, 4, 1, 11, 15, 6, 0, 10, 14, 11, 3, 1, 12, 
  14, 5, 0, 9, 15, 8, 2, 8, 14, 9, 2, 5, 14, 8, 1, 8, 13, 12, 2, 4, 
  13, 11, 4, 0, 10, 15, 6, 0, 9, 13, 11, 5, 0, 11, 15, 8, 1, 7, 13, 10, 
  4, 0, 11, 15, 5, 1, 12, 15, 4, 0, 11, 15, 6, 0, 10, 15, 7, 2, 3, 12, 
  15, 4, 1, 11, 15, 7, 0, 9, 14, 9, 2, 6, 12, 12, 4, 0, 12, 15, 4, 1, 
  11, 15, 6, 0, 11, 15, 4, 2, 12, 15, 5, 0, 8, 15, 6, 2, 8, 14, 12, 3, 
  3, 13, 13, 4, 1, 12, 14, 4, 1, 11, 15, 6, 0, 10, 15, 5, 0, 9, 13, 13, 
  4, 0, 12, 15, 4, 2, 12, 15, 5, 0, 9, 15, 8, 3, 2, 11, 15, 6, 0, 9, 
  13, 9, 4, 0, 12, 15, 4, 1, 12, 15, 7, 1, 3, 11, 15, 4, 0, 12, 15, 5, 
  0, 8, 14, 11, 4, 3, 12, 15, 3, 1, 12, 15, 4, 0, 11, 15, 7, 3, 2, 12, 
  15, 4, 0, 12, 15, 8, 3, 2, 11, 15, 5, 0, 9, 13, 12, 5, 0, 11, 15, 5, 
  1, 10, 15, 6, 1, 11, 15, 6, 1, 7, 14, 7, 2, 8, 13, 13, 2, 5, 13, 10, 
  3, 3, 13, 11, 2, 7, 14, 8, 2, 9, 15, 6, 2, 8, 13, 13, 4, 0, 11, 15, 
  5, 0, 10, 14, 6, 2, 6, 13, 12, 2, 7, 13, 10, 4, 0, 12, 15, 7, 3, 3, 
  13, 14, 4, 1, 11, 15, 6, 1, 6, 12, 14, 4, 0, 12, 15, 5, 1, 5, 12, 15, 
  4, 0, 12, 15, 4, 0, 12, 15, 4, 2, 13, 13, 4, 2, 11, 15, 4, 1, 12, 14, 
  3, 2, 13, 13, 3, 4, 13, 11, 3, 3, 12, 15, 4, 0, 10, 15, 6, 1, 8, 12, 
  13, 4, 0, 11, 15, 8, 2, 7, 13, 9, 3, 5, 13, 12, 3, 5, 14, 10, 3, 5, 
  12, 15, 5, 0, 11, 15, 4, 1, 11, 15, 5, 2, 8, 12, 15, 4, 0, 11, 14, 4, 
  1, 10, 15, 8, 3, 7, 12, 14, 4, 0, 11, 14, 9, 3, 2, 13, 13, 4, 0, 10, 
  15, 10, 2, 8, 14, 7, 3, 3, 12, 15, 4, 1, 11, 15, 9, 2, 6, 12, 11, 3, 
  1, 13, 15, 4, 0, 9, 15, 9, 2, 10, 15, 5, 3, 5, 12, 15, 4, 0, 12, 15, 
  7, 3, 3, 12, 15, 4, 0, 12, 15, 4, 1, 12, 15, 5, 1, 7, 13, 12, 3, 3, 
  13, 14, 3, 2, 13, 15, 3, 1, 12, 15, 7, 2, 3, 12, 15, 3, 0, 9, 15, 10, 
  2, 8, 14, 7, 2, 6, 13, 10, 2, 6, 14, 7, 1, 11, 15, 7, 2, 7, 14, 9, 
  2, 8, 15, 5, 1, 12, 15, 6, 3, 5, 13, 15, 3, 0, 13, 15, 3, 0, 10, 15, 
  8, 3, 7, 12, 15, 3, 0, 11, 14, 9, 3, 0, 13, 15, 4, 0, 11, 14, 11, 3, 
  1, 14, 13, 2, 5, 13, 12, 3, 3, 14, 11, 2, 6, 13, 15, 4, 0, 11, 14, 3, 
  1, 10, 15, 9, 2, 6, 13, 15, 4, 0, 8, 14, 9, 2, 9, 14, 8, 3, 3, 13, 
  15, 2, 4, 14, 10, 3, 6, 13, 13, 3, 1, 13, 15, 5, 0, 10, 15, 5, 2, 7, 
  13, 13, 2, 4, 13, 12, 3, 0, 13, 15, 4, 0, 11, 15, 5, 2, 9, 13, 14, 3, 
  0, 11, 15, 8, 1, 6, 13, 10, 3, 0, 13, 15, 3, 2, 14, 14, 3, 1, 12, 15, 
  4, 2, 9, 14, 11, 1, 8, 13, 9, 2, 2, 13, 14, 3, 0, 14, 15, 2, 4, 13, 
  14, 3, 0, 12, 14, 9, 2, 4, 14, 9, 3, 5, 14, 13, 2, 5, 14, 10, 2, 3, 
  13, 15, 2, 0, 14, 13, 3, 2, 13, 15, 3, 0, 11, 15, 6, 2, 9, 13, 9, 2, 
  6, 13, 11, 3, 1, 14, 13, 2, 6, 14, 11, 3, 0, 12, 15, 6, 2, 9, 14, 6, 
  2, 6, 13, 13, 2, 2, 13, 15, 4, 0, 10, 14, 6, 2, 8, 14, 10, 2, 5, 14, 
  12, 2, 2, 14, 12, 2, 5, 14, 10, 2, 8, 13, 9, 2, 3, 14, 10, 3, 4, 13, 
  15, 2, 1, 13, 14, 2, 0, 11, 15, 7, 2, 10, 13, 11, 3, 0, 13, 15, 6, 1, 
  7, 14, 7, 2, 9, 14, 9, 3, 3, 13, 15, 3, 0, 11, 13, 8, 3, 0, 13, 15, 
  3, 2, 11, 14, 10, 2, 3, 13, 13, 1, 5, 14, 7, 3, 5, 13, 15, 2, 2, 14, 
  12, 3, 2, 12, 15, 5, 1, 10, 14, 5, 2, 7, 14, 13, 2, 4, 14, 13, 2, 1, 
  12, 15, 9, 3, 0, 13, 15, 3, 2, 10, 14, 10, 2, 5, 14, 10, 3, 3, 13, 15, 
  2, 1, 11, 14, 11, 2, 2, 14, 12, 2, 4, 13, 15, 2, 0, 13, 15, 3, 2, 14, 
  14, 2, 1, 14, 15, 5, 1, 10, 14, 4, 2, 14, 15, 4, 1, 9, 14, 6, 1, 12, 
  14, 5, 3, 5, 13, 15, 2, 0, 11, 13, 10, 2, 3, 14, 11, 2, 3, 14, 14, 1, 
  4, 14, 12, 3, 1, 13, 15, 4, 3, 7, 13, 15, 2, 0, 13, 14, 5, 1, 9, 13, 
  8, 3, 2, 13, 15, 4, 2, 13, 14, 3, 2, 7, 13, 15, 2, 1, 14, 14, 3, 1, 
  10, 14, 8, 3, 7, 14, 11, 1, 8, 13, 8, 3, 2, 13, 15, 5, 2, 11, 13, 8, 
  3, 2, 13, 15, 4, 2, 13, 14, 3, 1, 10, 14, 6, 2, 11, 14, 4, 3, 8, 13, 
  13, 1, 1, 14, 12, 2, 5, 13, 12, 2, 2, 14, 13, 2, 4, 14, 11, 3, 4, 12, 
  15, 4, 1, 10, 13, 8, 3, 5, 14, 12, 1, 7, 13, 11, 3, 0, 13, 15, 4, 3, 
  13, 14, 3, 1, 12, 14, 5, 3, 8, 14, 10, 3, 5, 13, 15, 4, 1, 11, 13, 3, 
  3, 9, 15, 11, 3, 5, 13, 14, 2, 1, 13, 13, 2, 3, 14, 14, 2, 2, 14, 13, 
  2, 2, 13, 14, 8, 3, 2, 14, 13, 2, 4, 14, 12, 2, 3, 12, 14, 7, 2, 6, 
  12, 11, 2, 3, 14, 11, 3, 4, 12, 15, 8, 3, 2, 13, 14, 1, 3, 14, 13, 3, 
  1, 10, 14, 7, 4, 6, 13, 15, 3, 2, 7, 13, 15, 2, 1, 13, 14, 3, 3, 8, 
  13, 13, 2, 5, 13, 10, 2, 4, 14, 11, 3, 4, 12, 15, 6, 3, 5, 13, 14, 2, 
  1, 13, 13, 4, 2, 9, 14, 6, 3, 12, 13, 6, 4, 4, 13, 15, 4, 3, 5, 13, 
  15, 2, 2, 9, 13, 14, 2, 1, 10, 14, 10, 3, 7, 13, 11, 2, 2, 12, 14, 5, 
  3, 10, 12, 8, 3, 6, 14, 8, 3, 11, 12, 8, 3, 3, 12, 15, 5, 3, 11, 13, 
  4, 3, 10, 12, 10, 2, 2, 14, 11, 3, 6, 14, 11, 3, 6, 13, 11, 3, 3, 12, 
  14, 3, 4, 9, 14, 11, 2, 7, 13, 8, 3, 3, 12, 15, 7, 3, 9, 13, 6, 3, 
  11, 12, 7, 3, 4, 13, 13, 2, 2, 12, 13, 5, 3, 12, 12, 3, 3, 10, 13, 5, 
  3, 12, 13, 5, 3, 9, 12, 10, 3, 2, 14, 14, 5, 3, 6, 13, 12, 2, 3, 14, 
  12, 3, 5, 13, 12, 2, 2, 11, 14, 6, 4, 6, 13, 15, 3, 3, 10, 12, 6, 3, 
  11, 12, 6, 4, 4, 13, 14, 3, 5, 13, 12, 2, 3, 9, 13, 13, 2, 3, 14, 12, 
  3, 3, 12, 13, 6, 4, 6, 13, 14, 2, 4, 13, 12, 3, 2, 11, 13, 8, 4, 7, 
  13, 11, 3, 4, 14, 10, 3, 5, 13, 13, 3, 3, 10, 12, 8, 4, 4, 12, 14, 4, 
  4, 13, 12, 3, 3, 13, 12, 4, 3, 9, 13, 7, 4, 9, 13, 9, 3, 7, 13, 9, 
  3, 6, 13, 10, 3, 6, 13, 11, 2, 7, 13, 7, 4, 5, 12, 14, 4, 4, 8, 13, 
  11, 2, 6, 13, 9, 3, 7, 12, 11, 3, 4, 14, 11, 3, 6, 13, 12, 2, 3, 9, 
  13, 12, 2, 4, 13, 12, 3, 3, 13, 12, 3, 5, 8, 14, 12, 2, 7, 12, 9, 3, 
  3, 13, 13, 4, 4, 10, 12, 7, 4, 7, 13, 11, 3, 4, 13, 12, 3, 5, 13, 11, 
  3, 3, 11, 13, 7, 4, 7, 12, 11, 3, 3, 10, 14, 8, 3, 11, 11, 6, 4, 6, 
  13, 10, 3, 6, 13, 12, 2, 3, 11, 13, 7, 4, 6, 11, 13, 4, 4, 13, 11, 4, 
  4, 7, 13, 12, 3, 5, 13, 11, 3, 4, 12, 12, 4, 4, 10, 12, 7, 4, 11, 11, 
  5, 4, 7, 13, 12, 3, 3, 12, 12, 8, 4, 5, 13, 13, 3, 3, 12, 11, 5, 5, 
  6, 13, 12, 3, 5, 13, 12, 3, 4, 11, 12, 5, 4, 12, 11, 3, 5, 13, 11, 3, 
  4, 12, 12, 6, 4, 5, 13, 12, 3, 4, 8, 13, 11, 3, 5, 13, 12, 3, 4, 11, 
  12, 5, 4, 12, 12, 5, 4, 9, 12, 7, 5, 7, 12, 13, 4, 4, 9, 12, 7, 4, 
  10, 11, 7, 4, 5, 13, 12, 4, 5, 12, 11, 3, 5, 9, 13, 11, 2, 3, 11, 12, 
  5, 5, 6, 12, 13, 3, 5, 7, 12, 12, 3, 5, 9, 13, 8, 4, 6, 12, 12, 4, 
  4, 7, 12, 10, 3, 8, 11, 9, 4, 4, 13, 12, 5, 4, 10, 11, 6, 5, 10, 12, 
  7, 5, 6, 11, 13, 4, 5, 12, 11, 4, 4, 10, 11, 6, 5, 7, 12, 13, 4, 5, 
  12, 11, 4, 5, 7, 12, 13, 4, 5, 8, 12, 11, 3, 5, 10, 12, 10, 3, 4, 13, 
  10, 4, 6, 9, 13, 9, 4, 6, 12, 12, 5, 4, 7, 12, 12, 3, 4, 13, 11, 4, 
  5, 9, 12, 11, 3, 4, 12, 11, 4, 5, 12, 10, 4, 5, 12, 11, 4, 5, 12, 11, 
  5, 5, 10, 12, 7, 4, 9, 11, 7, 5, 7, 12, 11, 3, 5, 11, 11, 6, 5, 9, 
  11, 9, 3, 6, 12, 10, 3, 5, 12, 11, 4, 5, 12, 9, 4, 6, 10, 12, 7, 5, 
  7, 12, 10, 3, 5, 12, 11, 4, 5, 7, 12, 12, 3, 4, 9, 12, 7, 4, 10, 10, 
  7, 5, 6, 12, 12, 4, 5, 12, 10, 4, 5, 11, 11, 6, 5, 10, 11, 8, 4, 7, 
  12, 7, 5, 7, 11, 12, 7, 4, 7, 11, 8, 4, 6, 12, 11, 4, 6, 12, 10, 4, 
  5, 9, 12, 8, 4, 10, 11, 5, 5, 10, 12, 7, 5, 7, 11, 12, 4, 5, 9, 11, 
  10, 3, 4, 12, 11, 6, 5, 6, 12, 11, 4, 5, 11, 11, 5, 5, 8, 12, 10, 3, 
  5, 10, 11, 7, 5, 6, 11, 12, 5, 5, 9, 11, 7, 5, 7, 11, 12, 5, 5, 7, 
  12, 11, 3, 6, 12, 10, 4, 5, 10, 11, 7, 5, 9, 12, 9, 4, 5, 11, 11, 7, 
  5, 6, 12, 11, 4, 5, 8, 12, 11, 3, 5, 11, 11, 6, 5, 11, 10, 5, 5, 7, 
  12, 10, 4, 6, 11, 11, 7, 4, 6, 12, 10, 4, 6, 12, 10, 5, 6, 12, 10, 5, 
  5, 10, 11, 8, 5, 7, 12, 8, 5, 7, 12, 10, 4, 5, 8, 12, 10, 4, 7, 11, 
  10, 4, 5, 10, 11, 8, 5, 6, 9, 12, 8, 4, 5, 10, 11, 7, 5, 8, 11, 8, 
  5, 7, 11, 10, 4, 6, 11, 11, 7, 5, 6, 11, 11, 5, 6, 12, 10, 5, 6, 8, 
  11, 10, 4, 6, 12, 10, 4, 5, 11, 10, 5, 6, 9, 12, 10, 4, 5, 11, 10, 5, 
  6, 9, 11, 8, 5, 7, 12, 10, 5, 6, 10, 11, 7, 5, 8, 11, 9, 4, 6, 9, 
  12, 10, 3, 5, 12, 10, 4, 6, 10, 11, 7, 6, 10, 10, 7, 5, 8, 11, 8, 5, 
  8, 11, 9, 4, 6, 11, 11, 5, 6, 9, 11, 8, 4, 7, 12, 8, 5, 6, 9, 12, 
  9, 5, 8, 10, 8, 4, 5, 10, 11, 7, 6, 8, 11, 8, 5, 7, 12, 9, 5, 7, 
  11, 10, 5, 6, 9, 11, 8, 5, 7, 9, 12, 8, 4, 6, 11, 10, 5, 6, 8, 12, 
  10, 4, 6, 9, 11, 9, 5, 6, 11, 10, 5, 6, 10, 11, 8, 5, 7, 11, 9, 4, 
  6, 12, 9, 5, 7, 11, 9, 5, 6, 10, 10, 6, 6, 10, 10, 6, 5, 9, 10, 6, 
  6, 7, 10, 11, 6, 6, 8, 11, 10, 4, 5, 10, 10, 7, 6, 8, 11, 9, 5, 6, 
  11, 9, 5, 6, 10, 10, 6, 6, 7, 9, 12, 7, 5, 8, 10, 7, 5, 9, 10, 7, 
  6, 9, 10, 8, 5, 7, 11, 9, 5, 6, 11, 10, 7, 6, 7, 11, 9, 5, 7, 10, 
  10, 6, 6, 9, 10, 6, 6, 9, 11, 8, 5, 7, 9, 12, 9, 4, 6, 10, 10, 6, 
  6, 8, 11, 10, 5, 6, 9, 10, 7, 6, 9, 11, 8, 5, 7, 9, 11, 7, 6, 9, 
  9, 7, 6, 7, 9, 12, 7, 6, 9, 10, 7, 6, 7, 11, 9, 5, 6, 8, 11, 10, 
  5, 6, 9, 10, 8, 5, 7, 11, 9, 5, 7, 9, 11, 8, 5, 6, 9, 11, 8, 5, 
  6, 11, 10, 6, 6, 7, 11, 10, 5, 7, 9, 10, 8, 5, 7, 11, 9, 5, 6, 11, 
  9, 6, 6, 9, 11, 8, 6, 7, 8, 11, 8, 5, 6, 10, 10, 6, 6, 7, 10, 9, 
  5, 7, 9, 10, 7, 6, 9, 9, 6, 6, 8, 11, 9, 5, 7, 8, 11, 10, 5, 6, 
  8, 10, 8, 5, 7, 10, 9, 6, 7, 10, 10, 7, 6, 7, 11, 10, 6, 6, 10, 9, 
  7, 6, 7, 11, 9, 6, 7, 9, 11, 8, 6, 7, 9, 11, 8, 5, 7, 11, 9, 5, 
  7, 8, 11, 10, 5, 7, 8, 11, 10, 5, 6, 9, 10, 7, 6, 9, 10, 8, 6, 7, 
  10, 9, 6, 7, 9, 10, 7, 6, 7, 10, 10, 6, 6, 7, 11, 9, 5, 7, 9, 10, 
  9, 5, 6, 10, 10, 6, 7, 9, 10, 7, 6, 7, 10, 10, 6, 7, 10, 9, 6, 7, 
  7, 9, 11, 7, 7, 7, 9, 11, 7, 6, 9, 9, 7, 6, 7, 10, 9, 6, 7, 8, 
  10, 9, 5, 7, 10, 9, 6, 7, 10, 9, 7, 7, 7, 9, 11, 8, 5, 7, 10, 8, 
  5, 7, 8, 10, 9, 6, 7, 8, 10, 9, 5, 7, 9, 9, 6, 7, 10, 9, 7, 7, 
  8, 10, 8, 6, 7, 10, 9, 6, 7, 8, 10, 9, 5, 7, 9, 10, 8, 6, 7, 9, 
  10, 8, 6, 7, 10, 9, 6, 7, 8, 10, 8, 6, 7, 9, 10, 8, 6, 7, 10, 9, 
  6, 7, 9, 10, 8, 6, 7, 10, 9, 6, 7, 9, 9, 6, 7, 9, 9, 7, 7, 9, 
  9, 7, 7, 8, 10, 9, 6, 7, 8, 10, 8, 6, 7, 9, 9, 7, 6, 8, 10, 8, 
  6, 7, 9, 11, 9, 6, 7, 9, 10, 7, 7, 8, 10, 9, 6, 8, 10, 8, 6, 8, 
  10, 7, 6, 7, 9, 10, 8, 6, 7, 9, 9, 7, 7, 9, 9, 7, 7, 7, 8, 11, 
  8, 6, 7, 9, 9, 7, 7, 8, 9, 8, 6, 7, 9, 9, 7, 7, 8, 9, 10, 7, 
  7, 8, 9, 9, 6, 7, 8, 10, 8, 6, 8, 9, 9, 7, 7, 8, 10, 9, 6, 7, 
  9, 10, 8, 7, 8, 10, 9, 6, 7, 9, 9, 8, 7, 7, 10, 9, 7, 7, 8, 9, 
  8, 7, 7, 10, 9, 7, 7, 7, 9, 9, 7, 7, 8, 10, 8, 6, 7, 9, 8, 6, 
  7, 8, 9, 9, 7, 7, 8, 9, 9, 6, 7, 8, 10, 9, 7, 7, 8, 10, 8, 6, 
  7, 8, 10, 9, 7, 7, 7, 9, 9, 7, 7, 8, 8, 10, 7, 7, 8};

	unsigned long const highpitch_Count = 1802;
		
	const unsigned char highpitch[highpitch_Count] = {
  15, 10, 6, 6, 3, 0, 3, 4, 7, 9, 10, 11, 10, 14, 14, 12, 10, 8, 5, 6, 
  2, 1, 3, 4, 7, 10, 10, 11, 11, 15, 13, 12, 9, 6, 5, 4, 1, 2, 3, 6, 
  9, 10, 11, 10, 14, 14, 13, 10, 8, 5, 6, 1, 1, 3, 4, 7, 10, 11, 10, 13, 
  15, 13, 11, 9, 5, 6, 2, 1, 3, 4, 7, 10, 10, 10, 13, 15, 13, 11, 9, 5, 
  6, 2, 1, 3, 4, 7, 10, 10, 10, 14, 15, 13, 11, 8, 6, 5, 1, 1, 3, 6, 
  8, 10, 10, 11, 15, 13, 12, 9, 6, 6, 2, 0, 3, 4, 7, 10, 10, 11, 14, 14, 
  13, 10, 7, 6, 4, 0, 2, 3, 7, 9, 10, 10, 14, 15, 13, 11, 7, 6, 4, 0, 
  2, 3, 7, 9, 10, 10, 14, 15, 13, 11, 7, 6, 3, 0, 2, 3, 7, 9, 10, 11, 
  15, 14, 13, 10, 7, 6, 1, 1, 3, 5, 7, 10, 10, 13, 15, 13, 12, 8, 7, 4, 
  0, 2, 3, 7, 9, 10, 11, 15, 14, 13, 10, 7, 5, 1, 1, 3, 6, 8, 10, 10, 
  15, 15, 13, 10, 7, 6, 1, 1, 3, 5, 8, 10, 10, 15, 15, 13, 10, 7, 6, 1, 
  1, 3, 6, 8, 10, 11, 15, 14, 13, 9, 7, 4, 0, 1, 3, 6, 9, 9, 13, 15, 
  13, 12, 8, 7, 2, 0, 2, 4, 7, 9, 9, 15, 15, 13, 10, 8, 4, 0, 1, 3, 
  6, 9, 9, 14, 15, 13, 11, 8, 6, 1, 1, 3, 6, 8, 9, 13, 15, 13, 12, 8, 
  6, 1, 0, 3, 5, 8, 9, 13, 15, 13, 11, 8, 5, 1, 0, 3, 6, 9, 9, 14, 
  15, 13, 10, 9, 4, 0, 1, 3, 7, 9, 11, 15, 15, 13, 9, 8, 2, 0, 2, 5, 
  8, 9, 13, 15, 13, 11, 9, 4, 0, 1, 4, 7, 8, 11, 15, 14, 12, 9, 6, 1, 
  0, 3, 6, 8, 10, 15, 15, 13, 9, 7, 1, 0, 3, 6, 8, 10, 15, 15, 13, 10, 
  7, 1, 0, 3, 6, 8, 11, 15, 15, 12, 9, 6, 1, 1, 3, 7, 8, 12, 15, 14, 
  11, 10, 3, 0, 2, 4, 7, 9, 14, 15, 13, 10, 8, 2, 0, 3, 6, 7, 12, 15, 
  14, 11, 9, 3, 0, 3, 4, 7, 10, 14, 15, 12, 10, 6, 1, 1, 3, 7, 8, 13, 
  15, 13, 11, 7, 1, 0, 3, 7, 8, 13, 15, 12, 11, 7, 1, 0, 3, 7, 8, 14, 
  15, 12, 11, 6, 1, 1, 3, 7, 9, 14, 15, 12, 11, 4, 0, 3, 4, 7, 11, 15, 
  14, 12, 9, 2, 0, 3, 6, 8, 14, 15, 12, 11, 5, 0, 3, 4, 7, 12, 15, 13, 
  11, 7, 1, 0, 4, 6, 10, 15, 15, 12, 9, 2, 0, 4, 6, 8, 15, 15, 12, 10, 
  2, 0, 4, 6, 8, 14, 15, 12, 10, 2, 0, 4, 6, 9, 14, 15, 11, 9, 2, 0, 
  4, 6, 10, 15, 14, 12, 7, 2, 1, 4, 6, 12, 15, 12, 12, 4, 0, 4, 5, 8, 
  14, 15, 12, 9, 3, 0, 5, 5, 12, 15, 12, 12, 4, 0, 4, 4, 9, 15, 14, 12, 
  7, 1, 2, 4, 7, 13, 15, 12, 8, 2, 0, 5, 6, 13, 15, 12, 10, 2, 0, 5, 
  6, 13, 15, 12, 10, 2, 0, 5, 6, 13, 15, 12, 9, 2, 1, 5, 6, 14, 15, 12, 
  7, 1, 2, 4, 8, 14, 14, 13, 4, 0, 5, 4, 11, 15, 12, 11, 3, 0, 4, 6, 
  13, 15, 12, 5, 0, 4, 4, 11, 15, 12, 10, 2, 1, 4, 8, 14, 14, 12, 3, 0, 
  5, 6, 13, 15, 12, 5, 0, 4, 4, 13, 15, 12, 6, 1, 4, 4, 12, 15, 12, 7, 
  1, 4, 4, 12, 15, 13, 6, 1, 4, 5, 13, 15, 12, 5, 0, 4, 7, 13, 15, 11, 
  4, 0, 4, 9, 14, 15, 9, 3, 2, 4, 12, 15, 12, 5, 1, 4, 7, 13, 15, 10, 
  4, 1, 4, 11, 15, 12, 5, 1, 4, 8, 13, 15, 8, 3, 3, 5, 12, 15, 10, 4, 
  1, 4, 11, 15, 12, 5, 1, 4, 10, 14, 13, 5, 1, 4, 9, 14, 14, 6, 1, 4, 
  9, 14, 13, 5, 1, 4, 9, 14, 13, 5, 1, 4, 11, 15, 11, 4, 2, 5, 12, 15, 
  9, 3, 2, 6, 13, 14, 6, 2, 4, 9, 14, 12, 5, 2, 5, 12, 15, 7, 2, 4, 
  8, 14, 12, 5, 2, 6, 12, 15, 6, 2, 4, 10, 15, 8, 4, 3, 8, 14, 11, 5, 
  1, 7, 12, 14, 6, 1, 6, 11, 15, 6, 2, 6, 10, 15, 6, 2, 5, 10, 15, 6, 
  3, 6, 10, 15, 6, 2, 6, 10, 15, 6, 2, 7, 11, 14, 5, 1, 8, 13, 10, 5, 
  2, 9, 15, 7, 4, 5, 10, 15, 5, 1, 9, 13, 10, 5, 3, 10, 15, 6, 2, 8, 
  12, 10, 5, 3, 10, 14, 5, 1, 9, 13, 8, 4, 6, 11, 11, 5, 3, 11, 14, 5, 
  2, 10, 14, 6, 2, 9, 12, 8, 3, 8, 12, 9, 4, 7, 12, 9, 4, 6, 12, 9, 
  4, 7, 11, 9, 4, 7, 12, 8, 3, 8, 13, 7, 3, 10, 13, 6, 3, 11, 12, 5, 
  4, 12, 10, 4, 8, 12, 6, 3, 11, 12, 5, 4, 12, 10, 3, 9, 12, 5, 3, 12, 
  10, 3, 9, 11, 5, 4, 13, 9, 3, 11, 11, 4, 6, 12, 6, 3, 13, 9, 3, 12, 
  10, 4, 9, 11, 5, 6, 12, 6, 4, 13, 7, 3, 13, 8, 3, 13, 9, 3, 12, 10, 
  4, 9, 11, 5, 6, 12, 7, 3, 12, 9, 3, 10, 11, 4, 5, 12, 8, 2, 12, 11, 
  4, 6, 12, 7, 3, 11, 12, 4, 5, 12, 9, 3, 8, 12, 6, 3, 11, 13, 5, 3, 
  12, 12, 4, 5, 12, 10, 4, 6, 12, 9, 4, 7, 12, 9, 4, 7, 12, 9, 4, 6, 
  12, 10, 5, 5, 11, 12, 5, 3, 11, 14, 5, 2, 10, 14, 7, 3, 8, 12, 10, 5, 
  3, 11, 14, 5, 2, 9, 13, 8, 5, 4, 11, 14, 5, 2, 9, 13, 11, 5, 3, 10, 
  15, 6, 4, 5, 10, 15, 5, 2, 7, 11, 14, 5, 1, 8, 12, 12, 5, 1, 9, 13, 
  12, 5, 1, 8, 13, 12, 5, 1, 8, 13, 13, 5, 1, 7, 12, 15, 5, 2, 6, 11, 
  15, 6, 3, 4, 9, 15, 9, 4, 2, 7, 13, 14, 5, 2, 5, 11, 15, 9, 3, 3, 
  7, 13, 14, 5, 2, 4, 11, 15, 10, 4, 1, 5, 13, 15, 8, 3, 3, 6, 13, 15, 
  6, 2, 4, 8, 14, 13, 5, 2, 4, 9, 14, 13, 5, 1, 4, 9, 14, 14, 6, 2, 
  4, 7, 14, 15, 7, 2, 3, 6, 14, 15, 8, 3, 2, 5, 13, 15, 11, 4, 1, 5, 
  10, 14, 14, 6, 2, 4, 6, 13, 15, 10, 3, 0, 5, 11, 14, 13, 7, 2, 3, 5, 
  13, 15, 11, 4, 1, 5, 7, 14, 15, 10, 3, 0, 5, 9, 14, 14, 9, 2, 1, 4, 
  10, 15, 14, 9, 2, 1, 5, 10, 15, 14, 10, 2, 1, 5, 9, 14, 14, 11, 3, 0, 
  5, 7, 14, 15, 11, 4, 1, 4, 5, 13, 15, 12, 9, 1, 2, 4, 9, 15, 14, 11, 
  3, 0, 5, 5, 14, 15, 12, 9, 1, 1, 5, 8, 15, 15, 12, 5, 1, 3, 4, 10, 
  15, 14, 12, 3, 1, 5, 4, 11, 15, 13, 12, 2, 0, 5, 5, 12, 15, 13, 12, 3, 
  0, 5, 5, 11, 15, 14, 12, 4, 1, 4, 5, 9, 15, 15, 11, 6, 1, 1, 5, 7, 
  14, 15, 11, 10, 1, 0, 5, 5, 12, 15, 13, 11, 5, 1, 3, 5, 7, 15, 15, 11, 
  10, 1, 0, 4, 5, 10, 15, 15, 11, 8, 1, 0, 5, 6, 12, 15, 13, 11, 6, 1, 
  1, 5, 7, 12, 15, 13, 11, 5, 1, 2, 5, 7, 13, 15, 13, 11, 6, 1, 1, 5, 
  7, 11, 15, 14, 11, 8, 1, 0, 4, 7, 9, 15, 15, 11, 10, 2, 0, 4, 5, 8, 
  14, 15, 13, 11, 5, 0, 1, 5, 7, 10, 15, 15, 11, 10, 2, 0, 4, 5, 8, 12, 
  15, 13, 11, 8, 1, 0, 4, 6, 8, 14, 15, 12, 11, 7, 0, 0, 4, 6, 8, 14, 
  15, 12, 10, 7, 0, 1, 4, 6, 8, 14, 15, 13, 11, 7, 0, 0, 4, 6, 8, 12, 
  15, 14, 11, 9, 1, 0, 3, 5, 8, 10, 15, 15, 11, 10, 5, 0, 1, 4, 7, 9, 
  13, 15, 13, 11, 8, 1, 0, 3, 5, 8, 9, 15, 15, 12, 10, 7, 0, 1, 4, 6, 
  9, 11, 15, 14, 11, 9, 6, 0, 1, 4, 7, 8, 11, 15, 14, 11, 9, 5, 0, 1, 
  4, 6, 9, 11, 15, 14, 11, 9, 6, 0, 1, 4, 6, 9, 10, 15, 15, 12, 10, 7, 
  1, 0, 3, 5, 8, 9, 13, 15, 13, 11, 8, 4, 0, 1, 4, 7, 9, 10, 15, 14, 
  12, 9, 7, 1, 0, 3, 5, 8, 9, 12, 15, 14, 11, 8, 7, 0, 1, 3, 6, 9, 
  9, 13, 15, 13, 11, 8, 6, 0, 1, 3, 6, 9, 9, 13, 15, 13, 11, 8, 6, 0, 
  1, 4, 5, 9, 9, 12, 15, 13, 11, 9, 7, 1, 0, 3, 4, 9, 9, 10, 15, 14, 
  12, 10, 7, 4, 0, 2, 4, 7, 9, 10, 13, 15, 13, 11, 8, 7, 1, 1, 3, 4, 
  8, 10, 10, 15, 14, 13, 10, 7, 6, 0, 1, 3, 5, 9, 10, 10, 15, 14, 12, 9, 
  7, 6, 0, 2, 4, 6, 9, 10, 10, 15, 14, 13, 9, 7, 6, 0, 1, 3, 5, 9, 
  10, 10, 15, 14, 13, 11, 7, 6, 1, 0, 3, 4, 8, 10, 10, 12, 15, 13, 12, 8, 
  6, 5, 0, 2, 4, 6, 9, 10, 10, 15, 14, 12, 10, 7, 6, 2, 0, 3, 4, 7, 
  9, 10, 11, 15, 13, 12, 9, 7, 6, 1, 1, 3, 4, 8, 10, 10, 11, 15, 13, 12, 
  9, 6, 6, 1, 1, 3, 4, 8, 10, 10, 11, 15, 13, 13, 10, 6, 6, 3, 0, 3, 
  4, 7, 9, 10, 10, 15, 14, 13, 11, 7, 6, 5, 0, 2, 3, 6, 9, 10, 10, 11, 
  15, 13};
