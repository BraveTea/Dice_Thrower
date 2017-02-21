//Dice Thrower v1

const int DIM_COUNT = 6;
int ledArr[DIM_COUNT] = {2, 3, 4, 5, 6, 7};


void setup()
{
  for (int i = 0; i < 6; i++)
  {
    pinMode(ledArr[i], OUTPUT);
  }
  Serial.begin(9600);
}


void loop()
{
  int num;
  num = random(5) + 1;
  for (int i = 0; i < num; i++)
  {
    digitalWrite(ledArr[i], HIGH);
  }
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

