int pinLEDRed = 3;
int pinLEDGreen = 5;
int pinLEDBlue = 6;

int pinPot = A0;

int redAmmount = 220;
int greenAmmount = 21;
int blueAmmount = 234;

void setup()
{
  Serial.begin(115200);
  pinMode(pinLEDRed, OUTPUT);
  pinMode(pinLEDGreen, OUTPUT);
  pinMode(pinLEDBlue, OUTPUT);
  pinMode(pinPot, INPUT);
}

void loop()
{
  int inputColor = analogRead(pinPot);

  Serial.println(inputColor);

  inputColor = map(inputColor, 0, 1023, 0, 255);

  analogWrite(pinLEDRed, inputColor);
  analogWrite(pinLEDGreen, inputColor);
  analogWrite(pinLEDBlue, inputColor);
}