int OPD13 = 13;
int OPDDP = 9;
int OPD8G = 8;
int OPD7F = 7;
int OPD6E = 6;
int OPD5D = 5;
int OPD4C = 4;
int OPD3B = 3;
int OPD2A = 2;


void apagar(){
   // progrmcion display
  digitalWrite(OPD8G, LOW);
  digitalWrite(OPD7F, LOW);
  digitalWrite(OPD6E, LOW);
  digitalWrite(OPD5D, LOW);
  digitalWrite(OPD4C, LOW);
  digitalWrite(OPD3B, LOW);
  digitalWrite(OPD2A, LOW);
  digitalWrite(OPDDP, LOW);
}
void punto(int duracion){
   // progrmcion display
  digitalWrite(OPD8G, LOW);
  digitalWrite(OPD7F, LOW);
  digitalWrite(OPD6E, LOW);
  digitalWrite(OPD5D, LOW);
  digitalWrite(OPD4C, LOW);
  digitalWrite(OPD3B, LOW);
  digitalWrite(OPD2A, LOW);
  digitalWrite(OPDDP, HIGH);
  delay(duracion);
}

void numeroCero(int duracion){
   // progrmcion display
  digitalWrite(OPD8G, LOW);
  digitalWrite(OPD7F, HIGH);
  digitalWrite(OPD6E, HIGH);
  digitalWrite(OPD5D, HIGH);
  digitalWrite(OPD4C, HIGH);
  digitalWrite(OPD3B, HIGH);
  digitalWrite(OPD2A, HIGH);
  delay(duracion);
}
void numeroUno(int duracion){
   // progrmcion display
  digitalWrite(OPD8G, LOW);
  digitalWrite(OPD7F, LOW);
  digitalWrite(OPD6E, LOW);
  digitalWrite(OPD5D, LOW);
  digitalWrite(OPD4C, HIGH);
  digitalWrite(OPD3B, HIGH);
  digitalWrite(OPD2A, LOW);
  delay(duracion);
}

void numeroDos(int duracion){
   // progrmcion display
  digitalWrite(OPD8G, HIGH);
  digitalWrite(OPD7F, LOW);
  digitalWrite(OPD6E, HIGH);
  digitalWrite(OPD5D, HIGH);
  digitalWrite(OPD4C, LOW);
  digitalWrite(OPD3B, HIGH);
  digitalWrite(OPD2A, HIGH);
  delay(duracion);
}

void numeroTres(int duracion){
   // progrmcion display
  digitalWrite(OPD8G, HIGH);
  digitalWrite(OPD7F, LOW);
  digitalWrite(OPD6E, LOW);
  digitalWrite(OPD5D, HIGH);
  digitalWrite(OPD4C, HIGH);
  digitalWrite(OPD3B, HIGH);
  digitalWrite(OPD2A, HIGH);
  delay(duracion);
}


void numeroCuatro(int duracion){
   // progrmcion display
  digitalWrite(OPD8G, HIGH);
  digitalWrite(OPD7F, HIGH);
  digitalWrite(OPD6E, LOW);
  digitalWrite(OPD5D, LOW);
  digitalWrite(OPD4C, HIGH);
  digitalWrite(OPD3B, HIGH);
  digitalWrite(OPD2A, LOW);
  delay(duracion);
}

void numeroCinco(int duracion){
   // progrmcion display
  digitalWrite(OPD8G, HIGH);
  digitalWrite(OPD7F, HIGH);
  digitalWrite(OPD6E, LOW);
  digitalWrite(OPD5D, HIGH);
  digitalWrite(OPD4C, HIGH);
  digitalWrite(OPD3B, LOW);
  digitalWrite(OPD2A, HIGH);
  delay(duracion);
}

void numeroSeis(int duracion){
   // progrmcion display
  digitalWrite(OPD8G, HIGH);
  digitalWrite(OPD7F, HIGH);
  digitalWrite(OPD6E, HIGH);
  digitalWrite(OPD5D, HIGH);
  digitalWrite(OPD4C, HIGH);
  digitalWrite(OPD3B, LOW);
  digitalWrite(OPD2A, HIGH);
  delay(duracion);
}

void numeroSiete(int duracion){
   // progrmcion display
  digitalWrite(OPD8G, LOW);
  digitalWrite(OPD7F, LOW);
  digitalWrite(OPD6E, LOW);
  digitalWrite(OPD5D, LOW);
  digitalWrite(OPD4C, HIGH);
  digitalWrite(OPD3B, HIGH);
  digitalWrite(OPD2A, HIGH);
  delay(duracion);
}

void numeroOcho(int duracion){
   // progrmcion display
  digitalWrite(OPD8G, HIGH);
  digitalWrite(OPD7F, HIGH);
  digitalWrite(OPD6E, HIGH);
  digitalWrite(OPD5D, HIGH);
  digitalWrite(OPD4C, HIGH);
  digitalWrite(OPD3B, HIGH);
  digitalWrite(OPD2A, HIGH);
  delay(duracion);
}
void numeroNueve(int duracion){
   // progrmcion display
  digitalWrite(OPD8G, HIGH);
  digitalWrite(OPD7F, HIGH);
  digitalWrite(OPD6E, LOW);
  digitalWrite(OPD5D, HIGH);
  digitalWrite(OPD4C, HIGH);
  digitalWrite(OPD3B, HIGH);
  digitalWrite(OPD2A, HIGH);
  delay(duracion);
}

void setup()
{
  pinMode(OPD13, OUTPUT);
}

void loop()
{
  // progrmacion Led on/off
  digitalWrite(OPD13, HIGH);
  delay(1000); // Wait for 1000 millisecond(s)
  digitalWrite(OPD13, LOW);
  delay(1000); // Wait for 1000 millisecond(s)
  
  int duracion = 1000;
  numeroCero(duracion);
  apagar();
  numeroUno(duracion);
  apagar();
  numeroDos(duracion);
  apagar();
  numeroTres(duracion);
  apagar();
  numeroCuatro(duracion);
  apagar();
  numeroCinco(duracion);
  apagar();
  numeroSeis(duracion);
  apagar();
  numeroSiete(duracion);
  apagar();
  numeroOcho(duracion);
  apagar();
  numeroNueve(duracion);
  apagar();
  punto(duracion);
  apagar();
 
}