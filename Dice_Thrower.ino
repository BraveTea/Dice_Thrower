//Dice Thrower

const int DIM_COUNT = 6; //Dimension Count
int ledArr[DIM_COUNT] = {2, 3, 4, 5, 6, 7};


void setup()
{
  for (int i = 0; i < 6; i++)
  {
    pinMode(ledArr[i], OUTPUT);
  }
  Serial.begin(9600);
  randomSeed(analogRead(A0)); //creates a more random start so the sequence isn't the same every single run
}


void loop()
{
  int num;
  int mapChange;
  num = random(9999) + 1; // I'm not really sure why I did this
  mapChange = map(num, 1, 10000, 1, 6); // a higher random makes for a more random experience. by mapping it will create more randomness.
  for (int i = 0; i < mapChange; i++)
  {
    digitalWrite(ledArr[i], HIGH);
  }
  Serial.print(mapChange);
  Serial.print("\t mapped from: ");
  Serial.println(num);
  delay(2000);
  allOff();
}


void allOff()
{
  for (int i = 0; i < 6; i++)
  {
    digitalWrite(ledArr[i], LOW);
  }
  delay(1000);
}

