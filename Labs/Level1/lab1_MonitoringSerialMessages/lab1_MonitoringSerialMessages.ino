/*
<Robotica>
 - Nivel: 1 
 - Grupo E
 - Prof. Claudio Ibañéz
 - Adrian
<Homework-1>
 - Lab Monitoring Serial Messages and turn on integrated Arduino's LED
 - We will interact with Arduino's integrated LED taken this code from 
   [Errores comunes, Arduino IDE 2.0](https://www.youtube.com/watch?v=bUiNEKXVCuI&t=127s)
*/
int DP13 = 13;

void setup() {
  //Comunicar Arduino con una computadora.
  Serial.begin(9600);
  //Set pin 13 as OUTPUT
  pinMode(DP13, OUTPUT);
  
}

void loop() {
  Serial.println("\nHi Arduino this is Homework Lab1.......(◔ ◡ ◔)/");
  Serial.println("\nArduino says: estoy en Loop");
  delay(4000);
  Serial.println("Arduino says: LED ON");
  digitalWrite(DP13, HIGH);
  delay(2000);
  Serial.println("Arduino says: LED OFF");
  digitalWrite(DP13, LOW);
  delay(1000);
} 