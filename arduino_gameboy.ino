#include <MaxMatrix.h>
#include <avr/pgmspace.h>
#include <LedControl.h>

PROGMEM const unsigned char CH[] = {
  3, 8, B00000000, B00000000, B00000000, B00000000, B00000000, // space
  1, 8, B01011111, B00000000, B00000000, B00000000, B00000000, // !
  3, 8, B00000011, B00000000, B00000011, B00000000, B00000000, // "
  5, 8, B00010100, B00111110, B00010100, B00111110, B00010100, // #
  4, 8, B00100100, B01101010, B00101011, B00010010, B00000000, // $
  5, 8, B01100011, B00010011, B00001000, B01100100, B01100011, // %
  5, 8, B00110110, B01001001, B01010110, B00100000, B01010000, // &
  1, 8, B00000011, B00000000, B00000000, B00000000, B00000000, // '
  3, 8, B00011100, B00100010, B01000001, B00000000, B00000000, // (
  3, 8, B01000001, B00100010, B00011100, B00000000, B00000000, // )
  5, 8, B00101000, B00011000, B00001110, B00011000, B00101000, // *
  5, 8, B00001000, B00001000, B00111110, B00001000, B00001000, // +
  2, 8, B10110000, B01110000, B00000000, B00000000, B00000000, // ,
  4, 8, B00001000, B00001000, B00001000, B00001000, B00000000, // -
  2, 8, B01100000, B01100000, B00000000, B00000000, B00000000, // .
  4, 8, B01100000, B00011000, B00000110, B00000001, B00000000, // /
  4, 8, B00111110, B01000001, B01000001, B00111110, B00000000, // 0
  3, 8, B01000010, B01111111, B01000000, B00000000, B00000000, // 1
  4, 8, B01100010, B01010001, B01001001, B01000110, B00000000, // 2
  4, 8, B00100010, B01000001, B01001001, B00110110, B00000000, // 3
  4, 8, B00011000, B00010100, B00010010, B01111111, B00000000, // 4
  4, 8, B00100111, B01000101, B01000101, B00111001, B00000000, // 5
  4, 8, B00111110, B01001001, B01001001, B00110000, B00000000, // 6
  4, 8, B01100001, B00010001, B00001001, B00000111, B00000000, // 7
  4, 8, B00110110, B01001001, B01001001, B00110110, B00000000, // 8
  4, 8, B00000110, B01001001, B01001001, B00111110, B00000000, // 9
  2, 8, B01010000, B00000000, B00000000, B00000000, B00000000, // :
  2, 8, B10000000, B01010000, B00000000, B00000000, B00000000, // ;
  3, 8, B00010000, B00101000, B01000100, B00000000, B00000000, // <
  3, 8, B00010100, B00010100, B00010100, B00000000, B00000000, // =
  3, 8, B01000100, B00101000, B00010000, B00000000, B00000000, // >
  4, 8, B00000010, B01011001, B00001001, B00000110, B00000000, // ?
  5, 8, B00111110, B01001001, B01010101, B01011101, B00001110, // @
  4, 8, B01111110, B00010001, B00010001, B01111110, B00000000, // A
  4, 8, B01111111, B01001001, B01001001, B00110110, B00000000, // B
  4, 8, B00111110, B01000001, B01000001, B00100010, B00000000, // C
  4, 8, B01111111, B01000001, B01000001, B00111110, B00000000, // D
  4, 8, B01111111, B01001001, B01001001, B01000001, B00000000, // E
  4, 8, B01111111, B00001001, B00001001, B00000001, B00000000, // F
  4, 8, B00111110, B01000001, B01001001, B01111010, B00000000, // G
  4, 8, B01111111, B00001000, B00001000, B01111111, B00000000, // H
  3, 8, B01000001, B01111111, B01000001, B00000000, B00000000, // I
  4, 8, B00110000, B01000000, B01000001, B00111111, B00000000, // J
  4, 8, B01111111, B00001000, B00010100, B01100011, B00000000, // K
  4, 8, B01111111, B01000000, B01000000, B01000000, B00000000, // L
  5, 8, B01111111, B00000010, B00001100, B00000010, B01111111, // M
  5, 8, B01111111, B00000100, B00001000, B00010000, B01111111, // N
  4, 8, B00111110, B01000001, B01000001, B00111110, B00000000, // O
  4, 8, B01111111, B00001001, B00001001, B00000110, B00000000, // P
  4, 8, B00111110, B01000001, B01000001, B10111110, B00000000, // Q
  4, 8, B01111111, B00001001, B00001001, B01110110, B00000000, // R
  4, 8, B01000110, B01001001, B01001001, B00110010, B00000000, // S
  5, 8, B00000001, B00000001, B01111111, B00000001, B00000001, // T
  4, 8, B00111111, B01000000, B01000000, B00111111, B00000000, // U
  5, 8, B00001111, B00110000, B01000000, B00110000, B00001111, // V
  5, 8, B00111111, B01000000, B00111000, B01000000, B00111111, // W
  5, 8, B01100011, B00010100, B00001000, B00010100, B01100011, // X
  5, 8, B00000111, B00001000, B01110000, B00001000, B00000111, // Y
  4, 8, B01100001, B01010001, B01001001, B01000111, B00000000, // Z
  2, 8, B01111111, B01000001, B00000000, B00000000, B00000000, // [
  4, 8, B00000001, B00000110, B00011000, B01100000, B00000000, // \ backslash
  2, 8, B01000001, B01111111, B00000000, B00000000, B00000000, // ]
  3, 8, B00000010, B00000001, B00000010, B00000000, B00000000, // hat
  4, 8, B01000000, B01000000, B01000000, B01000000, B00000000, // _
  2, 8, B00000001, B00000010, B00000000, B00000000, B00000000, // `
  4, 8, B00100000, B01010100, B01010100, B01111000, B00000000, // a
  4, 8, B01111111, B01000100, B01000100, B00111000, B00000000, // b
  4, 8, B00111000, B01000100, B01000100, B00101000, B00000000, // c
  4, 8, B00111000, B01000100, B01000100, B01111111, B00000000, // d
  4, 8, B00111000, B01010100, B01010100, B00011000, B00000000, // e
  3, 8, B00000100, B01111110, B00000101, B00000000, B00000000, // f
  4, 8, B10011000, B10100100, B10100100, B01111000, B00000000, // g
  4, 8, B01111111, B00000100, B00000100, B01111000, B00000000, // h
  3, 8, B01000100, B01111101, B01000000, B00000000, B00000000, // i
  4, 8, B01000000, B10000000, B10000100, B01111101, B00000000, // j
  4, 8, B01111111, B00010000, B00101000, B01000100, B00000000, // k
  3, 8, B01000001, B01111111, B01000000, B00000000, B00000000, // l
  5, 8, B01111100, B00000100, B01111100, B00000100, B01111000, // m
  4, 8, B01111100, B00000100, B00000100, B01111000, B00000000, // n
  4, 8, B00111000, B01000100, B01000100, B00111000, B00000000, // o
  4, 8, B11111100, B00100100, B00100100, B00011000, B00000000, // p
  4, 8, B00011000, B00100100, B00100100, B11111100, B00000000, // q
  4, 8, B01111100, B00001000, B00000100, B00000100, B00000000, // r
  4, 8, B01001000, B01010100, B01010100, B00100100, B00000000, // s
  3, 8, B00000100, B00111111, B01000100, B00000000, B00000000, // t
  4, 8, B00111100, B01000000, B01000000, B01111100, B00000000, // u
  5, 8, B00011100, B00100000, B01000000, B00100000, B00011100, // v
  5, 8, B00111100, B01000000, B00111100, B01000000, B00111100, // w
  5, 8, B01000100, B00101000, B00010000, B00101000, B01000100, // x
  4, 8, B10011100, B10100000, B10100000, B01111100, B00000000, // y
  3, 8, B01100100, B01010100, B01001100, B00000000, B00000000, // z
  3, 8, B00001000, B00110110, B01000001, B00000000, B00000000, // {
  1, 8, B01111111, B00000000, B00000000, B00000000, B00000000, // |
  3, 8, B01000001, B00110110, B00001000, B00000000, B00000000, // }
  4, 8, B00001000, B00000100, B00001000, B00000100, B00000000, // ~
};

#define MAX_GAMES 3

#define DIN  12   // DIN pin of MAX7219 module
#define CLK  10   // CLK pin of MAX7219 module
#define CS 11    // CS pin of MAX7219 module
#define maxInUse 1


// Joystick pins
int joyX = A0;
int joyY = A1;
int joyButton = 2;

char sel = 0;
char selection = 0; // 1-up, 2-down, 3-select, 4-right, 5-left
char game_val = 0;
int joyXVal = 0;
int joyYVal = 0;
char stop_game = 0;

// Game variables
int snakeX[64], snakeY[64];
int snakeLength = 3;
int snakeDirection = 0; // 0 = up, 1 = right, 2 = down, 3 = left
int foodX, foodY;
int score = 0;

MaxMatrix m(DIN, CS, CLK, maxInUse);
LedControl lc = LedControl(DIN, CLK, CS, maxInUse);

byte buffer[10];

char text[]= "Welcome player     "; // Scrolling text
char sel_game[] = "Select your game     ";

// Variables
int playerPosition = 3;  // Initial player position (column on LED matrix)
int obstacleRow = 0;     // Row where obstacles appear
int obstaclePosition = 0;  // Position of the obstacle
int obs_score = 0;           // Player's score
bool gameRunning = false;  // Flag to indicate if game is running

char gameOverMessage[10][8]={
  {0x00,0x3c,0x40,0x40,0x48,0x44,0x38,0x00},// G
  {0x00,0x38,0x44,0x7c,0x44,0x44,0x44,0x00},// A
  {0x00,0x44,0x6c,0x54,0x44,0x44,0x44,0x00},// M
  {0x00,0x7c,0x40,0x78,0x40,0x40,0x7c,0x00},// E
  {0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},//  (space)
  {0x00,0x38,0x44,0x44,0x44,0x44,0x38,0x00},// O
  {0x00,0x44,0x44,0x44,0x44,0x28,0x10,0x00},// V
  {0x00,0x7c,0x40,0x78,0x40,0x40,0x7c,0x00},// E
  {0x00,0x30,0x48,0x48,0x70,0x48,0x44,0x00},// R
  {0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},//  (space)
};

char startNewGameMessage[15][8]={
  {0x00,0x3c,0x40,0x38,0x04,0x44,0x38,0x00},// S
  {0x00,0x7c,0x10,0x10,0x10,0x10,0x10,0x00},// T
  {0x00,0x38,0x44,0x7c,0x44,0x44,0x44,0x00},// A
  {0x00,0x30,0x48,0x48,0x70,0x48,0x44,0x00},// R
  {0x00,0x7c,0x10,0x10,0x10,0x10,0x10,0x00},// T
  {0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},//  (space)
  {0x00,0x44,0x64,0x54,0x4c,0x44,0x44,0x00},// N
  {0x00,0x7c,0x40,0x78,0x40,0x40,0x7c,0x00},// E
  {0x00,0x00,0x44,0x54,0x54,0x54,0x38,0x00},// W
  {0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},//  (space)
  {0x00,0x3c,0x40,0x40,0x48,0x44,0x38,0x00},// G
  {0x00,0x38,0x44,0x7c,0x44,0x44,0x44,0x00},// A
  {0x00,0x44,0x6c,0x54,0x44,0x44,0x44,0x00},// M
  {0x00,0x7c,0x40,0x78,0x40,0x40,0x7c,0x00},// E
  {0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},//  (space)
};

// Grid
byte EMPTY_GRID[8] = {
  B00000000,
  B00000000,
  B00000000,
  B00000000,
  B00000000,
  B00000000,
  B00000000,
  B00000000,
};

// Rockets
const int MAX_NUMBER_OF_ROCKETS = 20;
const int ALL_ROCKETS_HAVE_BEEN_USED = -1;
bool GAME_OVER = true;

struct Rocket {
   int coordX;
   int coordY;
   long unsigned updateTime;

   bool doesHitTarget(int, int);
};

Rocket ROCKET_NONE = {0, 0, 0};
Rocket activeRockets[MAX_NUMBER_OF_ROCKETS] = {};

int findRocketID() {
  for (int i = 0; i < MAX_NUMBER_OF_ROCKETS; i++) {
    if (isRocketNone(activeRockets[i])) {
      return i;
    }
  }

  return ALL_ROCKETS_HAVE_BEEN_USED;
}

bool isRocketNone(Rocket rocket) {
  return (
    rocket.coordX == ROCKET_NONE.coordX &&
    rocket.coordY == ROCKET_NONE.coordY &&
    rocket.updateTime == ROCKET_NONE.updateTime
  );
}

void deleteRocket(int rocketID) {
  activeRockets[rocketID] = ROCKET_NONE;
}

bool Rocket::doesHitTarget(int targetCoordX, int targetCoordY) {
  return (
    coordX == targetCoordX &&
    coordY == targetCoordY
  );
}

// Spaceship
class Spaceship {
  public:
    int coordX;
    int movementSpeed;
    int gunReloadingSpeed;

    int score = 0;

    bool canMoveLeft();
    bool canMoveRight();
    bool canShoot();

    bool isTouchingCoords(int, int);

    void moveLeft();
    void moveRight();
    void shootLeft();
    void shootRight();

  private:
    long unsigned int lastMovementTime;
    long unsigned int lastGunReloadingTime;
};

bool Spaceship::canMoveLeft() {
  return (
    coordX > 1 &&
    (millis() - lastMovementTime) > movementSpeed
  );
}

bool Spaceship::canMoveRight() {
  return (
    coordX < 6 &&
    (millis() - lastMovementTime) > movementSpeed
  );
}

bool Spaceship::canShoot() {
  return (millis() - lastGunReloadingTime) > gunReloadingSpeed;
}

void Spaceship::shootLeft() {
  int rocketID = findRocketID();

  if (rocketID != ALL_ROCKETS_HAVE_BEEN_USED) {
    activeRockets[rocketID] = (Rocket){coordX - 1, 2, millis()};
  }

  lastGunReloadingTime = millis();
}

void Spaceship::shootRight() {
  int rocketID = findRocketID();

  if (rocketID != ALL_ROCKETS_HAVE_BEEN_USED) {
    activeRockets[rocketID] = (Rocket){coordX + 1, 2, millis()};
  }

  lastGunReloadingTime = millis();
}

bool Spaceship::isTouchingCoords(int placeCoordX, int placeCoordY) {
  bool isTouchingRightSide = (
    placeCoordX == coordX + 1 &&
    (placeCoordY == 1 || placeCoordY == 2)
  );
  bool isTouchingLeftSide = (
    placeCoordX == coordX - 1 &&
    (placeCoordY == 1 || placeCoordY == 2)
  );
  bool isTouchingFrontSide = (placeCoordX == coordX && placeCoordY == 1);

  return isTouchingRightSide || isTouchingLeftSide  || isTouchingFrontSide;
}

void Spaceship::moveLeft() {
  if (coordX > 1) {
    coordX -= 1;
  }
  lastMovementTime = millis();
}

void Spaceship::moveRight() {
  if (coordX < 6) {
    coordX += 1;
  }
  lastMovementTime = millis();
}

Spaceship spaceship;

// Meteor
const int MAX_NUMBER_OF_METEORS = 64;
const int ALL_MOTEORS_HAVE_BEEN_USED = -1;

class Meteor {
  public:
    int coordX;
    int coordY = 7;  // Always starts from the top part of the screen

    int movementSpeed = 2000;

    bool canMove();
    void moveForward();

  private:
    long unsigned int lastMovementTime = 0;
};

bool Meteor::canMove() {
  return (millis() - lastMovementTime) > movementSpeed;
}

Meteor liveMeteors[MAX_NUMBER_OF_METEORS] = {};
bool occupiedMeteorPlace[MAX_NUMBER_OF_METEORS] = {};

void Meteor::moveForward() {
  int newCoordX = coordX + random(1);  // Move +1 forward or do not move at all
  int newCoordY = coordY + random(2) - 1;  // Move left, right or do not move at all

  bool isNewPositionOccupied = false;
  Meteor meteor;

  for (int meteorID = 0; meteorID < MAX_NUMBER_OF_METEORS; meteorID++) {
    if (occupiedMeteorPlace[meteorID]) {
      meteor = liveMeteors[meteorID];

      if (meteor.coordX == newCoordX && meteor.coordY == newCoordY) {
        isNewPositionOccupied = true;
        break;
      }
    }
  }

  if (!isNewPositionOccupied) {
    coordX = newCoordX;
    coordY = newCoordY;
    lastMovementTime = millis();
  }
}

// Other

long lastCreatedMeteorTime = millis();
int createMeteorSpeed = 1000;

void createMeteor() {
  if ((millis() - lastCreatedMeteorTime) < createMeteorSpeed) {
    return;
  }
  
  Meteor meteor;
  meteor.coordX = random(8);

  for (int meteorID = 0; meteorID < MAX_NUMBER_OF_METEORS; meteorID++) {
    if (!occupiedMeteorPlace[meteorID]) {
      occupiedMeteorPlace[meteorID] = true;
      liveMeteors[meteorID] = meteor;
      break;
    }
  }
}

// Game
byte currentGrid[8] = {};
byte meteorGrid[8] = {};
int gameSpeed = 500;

void drawGrid(byte * grid) {
  for (int row = 0; row < 8; row++) {
    lc.setColumn(0, row, grid[row]);
  }
}

void drawSpaceship(int coord) {
  int shift = coord - 1;
  currentGrid[1] = B10100000 >> shift;
  currentGrid[0] = B11100000 >> shift;
}

void drawRockets() {
  Rocket rocket;
  
  for (int rocketID = 0; rocketID < MAX_NUMBER_OF_ROCKETS; rocketID++) {
    rocket = activeRockets[rocketID];

    if (!isRocketNone(rocket)) {
      lc.setLed(0, rocket.coordX, rocket.coordY, true);

      if (rocket.coordY < 8) {
        activeRockets[rocketID].coordY += 1;
        activeRockets[rocketID].updateTime = millis();
      } else {
        deleteRocket(rocketID);
      }
    }
  }
}

void drawMeteors() {
  for (int meteorID = 0; meteorID < MAX_NUMBER_OF_METEORS; meteorID++) {
    Meteor meteor = liveMeteors[meteorID];
    
    if (occupiedMeteorPlace[meteorID]) {
      lc.setLed(0, meteor.coordX, meteor.coordY, true);

      if (meteor.canMove()) {
        liveMeteors[meteorID].moveForward();

        if (meteor.coordX < 0 || meteor.coordX > 7 || meteor.coordY < 0) {
          occupiedMeteorPlace[meteorID] = false;
        }
      }
    }
  }
}

void blinkScreen(int nTimes) {
  for (int i = 0; i < nTimes; i++) {
    for (int row = 0; row < 8; row++) {
      lc.setColumn(0, row, B11111111);
    }
    delay(50);
    
    for (int row = 0; row < 8; row++) {
      lc.setColumn(0, row, B00000000);
    }
    delay(50);
  }
}

void checkIfMeteorTouchedSpaceship() {
  for (int meteorID = 0; meteorID < MAX_NUMBER_OF_METEORS; meteorID++) {
    Meteor meteor = liveMeteors[meteorID];
    
    if (occupiedMeteorPlace[meteorID] && spaceship.isTouchingCoords(meteor.coordX, meteor.coordY)) {
      resetGame();

      blinkScreen(6);
      
      for (int i = 0; i < 10; i++) {
        for (int row = 0; row < 8; row++) {
          lc.setColumn(0, row, gameOverMessage[i][7 - row]);
        }
  
        delay(250);
      }
    }
  }
}

void checkIfSpaceshipHitMeteor() {
  Rocket rocket;
  Meteor meteor;
  
  for (int rocketID = 0; rocketID < MAX_NUMBER_OF_ROCKETS; rocketID++) {
    rocket = activeRockets[rocketID];

    if (!isRocketNone(rocket)) {
      for (int meteorID = 0; meteorID < MAX_NUMBER_OF_METEORS; meteorID++) {
        meteor = liveMeteors[meteorID];
        
        if (occupiedMeteorPlace[meteorID] && rocket.doesHitTarget(meteor.coordX, meteor.coordY)) {
          occupiedMeteorPlace[meteorID] = false;
        }
      } // meteor loop end
    }
}  // rocket loop end 
}

void resetGame() {
  GAME_OVER = true;
  
  drawGrid(EMPTY_GRID);

  // Set up default position for the spaceship
  spaceship.coordX = 4;
  spaceship.movementSpeed = 50;  // The lower - the faster.
  spaceship.gunReloadingSpeed = 200;  // The lower - the faster.

  // Clear all meteors
  for (int meteorID = 0; meteorID < MAX_NUMBER_OF_METEORS; meteorID++) {
    occupiedMeteorPlace[meteorID] = false;
  }

  // Clear all spaceship rockets
  for (int rocketID = 0; rocketID < MAX_NUMBER_OF_ROCKETS; rocketID++) {
    deleteRocket(rocketID);
  }
}

char check_selection()
{
  char flag = 0;
  joyYVal = analogRead(joyX);
  joyXVal = analogRead(joyY);
  while((joyYVal > 300) && (joyYVal <700) && (joyXVal > 300) && (joyXVal <700) && (flag == 0)){
    joyYVal = analogRead(joyX);
    joyXVal = analogRead(joyY);
    if (digitalRead(joyButton) == LOW){
      selection = 3;
      flag = 1;
    }
    else if(joyYVal < 300)
      selection = 2;
    else if (joyYVal >700)
      selection = 1;
    else if(joyXVal < 300)
      selection = 5;
    else if (joyXVal >700)
      selection = 4;
  }
  return selection;
}

void Initiate_Games()
{
  sel = 0;
  while(game_val == 0){
  stop_game = 0;
  switch(sel){
    case 0:
      printStringWithShift("Snake          ", 80); // (text, scrolling speed)
      selection = check_selection();
      game_val = (selection == 3)?1:0;
      break;
    case 1:
      printStringWithShift("Shooting          ", 80); // (text, scrolling speed)
      selection = check_selection();
      game_val = (selection == 3)?2:0;
      break;
    case 2:
      printStringWithShift("Obstacle          ", 80); // (text, scrolling speed)
      selection = check_selection();
      game_val = (selection == 3)?3:0;
      break;
  }
  //if(selection == 3){
  //    printStringWithShift("Game Selected          ", 100); // (text, scrolling speed)
  //}
    sel = (sel + 1);
    if(sel >= MAX_GAMES)
      sel = 0;
  }
  switch(game_val){
    case 1:
      snake_game();
      game_val = 0;
      break;
    case 2:
      shooting_game();
      game_val = 0;
      break;
    case 3:
      obstacle_game();
      game_val = 0;
      break;
  }
}


void setup() {
  pinMode(joyButton, INPUT_PULLUP);
  m.init(); // module initialize
  m.setIntensity(15); // dot matix intensity 0-15
  printStringWithShift(text, 80); // (text, scrolling speed)
  printStringWithShift(sel_game, 50); // (text, scrolling speed)
}

void loop() {

  Initiate_Games();

}
// Display=the extracted characters with scrolling
void printCharWithShift(char c, int shift_speed) {
  if (c < 32) return;
  c -= 32;
  memcpy_P(buffer, CH + 7 * c, 7);
  m.writeSprite(32, 0, buffer);
  m.setColumn(32 + buffer[0], 0);

  for (int i = 0; i < buffer[0] + 1; i++)
  {
    delay(shift_speed);
    m.shiftLeft(false, false);
  }
}
// Extract the characters from the text string
void printStringWithShift(char* s, int shift_speed) {
  while (*s != 0) {
    printCharWithShift(*s, shift_speed);
    s++;
  }
}

void snake_game() {
  placeFood();
  while(!stop_game){
  // Clear the display
  lc.clearDisplay(0);

  // Read joystick input
  int joyXVal = analogRead(joyX);
  int joyYVal = analogRead(joyY);
  bool joyButtonPressed = digitalRead(joyButton) == LOW;

  // Update snake direction based on joystick input
  if (joyXVal < 300) {
    snakeDirection = 1; // left
  } else if (joyXVal > 700) {
    snakeDirection = 3; // right
  } else if (joyYVal < 300) {
    snakeDirection = 2; // up
  } else if (joyYVal > 700) {
    snakeDirection = 0; // down
  }

  // Move the snake
  for (int i = snakeLength; i > 0; i--) {
    snakeX[i] = snakeX[i - 1];
    snakeY[i] = snakeY[i - 1];
  }

  switch (snakeDirection) {
    case 0:
      snakeY[0]--;
      break;
    case 1:
      snakeX[0]++;
      break;
    case 2:
      snakeY[0]++;
      break;
    case 3:
      snakeX[0]--;
      break;
  }

  // Check for collisions
  if (snakeX[0] < 0 || snakeX[0] >= 8 || snakeY[0] < 0 || snakeY[0] >= 8) {
    resetSnakeGame();
  }

  for (int i = 1; i < snakeLength; i++) {
    if (snakeX[0] == snakeX[i] && snakeY[0] == snakeY[i]) {
      resetSnakeGame();
    }
  }

  // Check for food
  if (snakeX[0] == foodX && snakeY[0] == foodY) {
    snakeLength++;
    placeFood();
    score++;
  }

  // Draw the snake and food
  for (int i = 0; i < snakeLength; i++) {
    lc.setLed(0, snakeY[i], snakeX[i], true);
  }
  lc.setLed(0, foodY, foodX, true);

  delay(500);
  }
}

void placeFood() {
  foodX = random(0, 8);
  foodY = random(0, 8);
}

char post_game_notify()
{
  printStringWithShift("Start?        ", 50); // (text, scrolling speed)
  stop_game = (check_selection() == 4)?1:0;
  return stop_game;
}

void resetSnakeGame() {
  snakeLength = 3;
  snakeDirection = 0;
  snakeX[0] = 3;
  snakeY[0] = 3;
  snakeX[1] = 3;
  snakeY[1] = 4;
  snakeX[2] = 3;
  snakeY[2] = 5;
  score = 0;
  post_game_notify();
  placeFood();
}


void shooting_game() {
  char shoot = 0;
  resetGame();
  while(!stop_game){
  if (!GAME_OVER) {
    
  // Read joystick input
    joyXVal = analogRead(joyX);
    joyYVal = analogRead(joyY);

    if ((joyYVal > 700) && spaceship.canMoveLeft()) {
      spaceship.moveLeft();
    }
  
    if ((joyYVal < 300) && spaceship.canMoveRight()) {
      spaceship.moveRight();
    }
  
    shoot ^= 1;
    if (shoot && spaceship.canShoot()) {
      spaceship.shootLeft();
    }
  
    if (!shoot && spaceship.canShoot()) {
      spaceship.shootRight();
    }
  
    if (random(10) < 3) {
      createMeteor();
    }
  
    memcpy(currentGrid, EMPTY_GRID, 8);

    drawSpaceship(spaceship.coordX);
    drawGrid(currentGrid);
    drawRockets();
    drawMeteors();
  
    checkIfMeteorTouchedSpaceship();
    checkIfSpaceshipHitMeteor();

  } else {
    for (int i = 0; i < 15; i++) {
      for (int row = 0; row < 8; row++) {
        lc.setColumn(0, row, startNewGameMessage[i][7 - row]);
      }

        joyXVal = analogRead(joyX);
        joyYVal = analogRead(joyY);

      if ((joyXVal < 300) || (joyXVal > 700) || (joyYVal < 300) || (joyYVal > 700)) {
        GAME_OVER = false;
      if(joyYVal > 700)
      {
        stop_game = 1;
        break;
      }

        blinkScreen(3);

        break;
      }
      if(stop_game)
        break;

      delay(250);
    }
  }
  }
}


void obstacle_game() {
      lc.setLed(0, 7, playerPosition, true);   // Display player at new position
      while(!stop_game){
  if (!gameRunning) {
    // Start game
    startGame();
  }
  
  // Move obstacles down the track
  moveObstacles();
  
  // Check for player input
  checkInput();
  
  // Check collision
  checkCollision();

  // Delay for smoother animation
  delay(100);
      }
}

void startGame() {
  // Reset variables
  playerPosition = 3;
  obstacleRow = 0;
  obstaclePosition = random(0, 8);  // Random initial obstacle position
  obs_score = 0;
  
  // Clear display
  lc.clearDisplay(0);
  
  // Display player at starting position
  lc.setLed(0, 7, playerPosition, true);
  
  // Set game running flag to true
  gameRunning = true;
}

void moveObstacles() {
  // Clear previous obstacle position
  lc.setLed(0, obstacleRow, obstaclePosition, false);
  
  // Move obstacle down
  obstacleRow++;
  
  // Check if obstacle reached bottom
  if (obstacleRow > 7) {
    // Reset obstacle position and increment score
    obstacleRow = 0;
    obstaclePosition = random(0, 8);
    obs_score++;
  }
  
  // Display obstacle at new position
  lc.setLed(0, obstacleRow, obstaclePosition, true);
}

void checkInput() {
  // Read joystick input
  int joystickX = analogRead(joyX);
  
  // Check joystick movement
  if (joystickX > 700) {
    // Move player left
    if (playerPosition < 7) {
      lc.setLed(0, 7, playerPosition, false);  // Clear current position
      playerPosition--;  // Move left
      lc.setLed(0, 7, playerPosition, true);   // Display player at new position
    }
  } else if (joystickX < 300) {
    // Move player right
    if (playerPosition > 0) {
      lc.setLed(0, 7, playerPosition, false);  // Clear current position
      playerPosition++;  // Move right
      lc.setLed(0, 7, playerPosition, true);   // Display player at new position
    }
  }
}

void checkCollision() {
  // Check if player and obstacle are in the same position
  if (obstacleRow == 7 && obstaclePosition == playerPosition) {
    // Game over
    gameRunning = false;
    post_game_notify();
    
    // Delay before restarting
    delay(2000);
  }
}
