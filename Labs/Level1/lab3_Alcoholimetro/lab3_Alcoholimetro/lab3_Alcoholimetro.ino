// C++ code
//

int gas = 0;
int LED_BUILTIN2 = 2;
int LED_BUILTIN3 = 3;
int LED_BUILTIN4 = 4;

void setup()
{
  Serial.begin(9600);
  pinMode(A0, INPUT);
  pinMode(LED_BUILTIN2, OUTPUT);
  pinMode(LED_BUILTIN3, OUTPUT);
  pinMode(LED_BUILTIN4, OUTPUT);
}

void loop()
{
  gas = analogRead(A0);
  if(gas > 117){
    digitalWrite(LED_BUILTIN3, HIGH);
  	digitalWrite(LED_BUILTIN2, LOW);
    
    digitalWrite(LED_BUILTIN4, HIGH);
    delay(1000); // Wait for 1000 millisecond(s)
    digitalWrite(LED_BUILTIN4, LOW);
        
  }
  else{
    digitalWrite(LED_BUILTIN3, LOW);
    digitalWrite(LED_BUILTIN2, HIGH);
    digitalWrite(LED_BUILTIN4, LOW);
  }
  
  Serial.println(gas);
}