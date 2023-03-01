unsigned long tempo1;
int distancia1;
int distancia2;
void setup() {
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode (11, OUTPUT);
  pinMode (12, OUTPUT);
  pinMode (5, OUTPUT);
  pinMode (8, INPUT);
  pinMode(6, OUTPUT);
  pinMode(7, INPUT);
  Serial.begin (9600);
  digitalWrite (5, LOW);
 digitalWrite(6, LOW);
  
}

void loop() {
//sensor1
digitalWrite (5, HIGH);
delayMicroseconds(10);
digitalWrite (5, LOW);
tempo1 = pulseIn (8, HIGH);
distancia1 = tempo1/58;

Serial.println (distancia1);
distancia1 = distancia1;
delay(100);
// sensor 2
digitalWrite (6, HIGH);
delayMicroseconds(10);
digitalWrite (6, LOW);
tempo1 = pulseIn (7, HIGH);
distancia2 = tempo1/58;
Serial.println (distancia2);
distancia2 = distancia2;
delay(100);

if (distancia1 > 19){
  digitalWrite(9, LOW);
  digitalWrite(10, HIGH); //motor direito foward
  digitalWrite(11, HIGH); //motor esquerdo foward
  digitalWrite(12, LOW);
  
  }
  
  if (distancia1 < 19)
  {
  digitalWrite(9, LOW);
  digitalWrite(10, LOW);
  digitalWrite(11, LOW);
  digitalWrite(12, HIGH);
  }
  //proximo sensor
  if (distancia2 < 19)
  {
  digitalWrite(9, LOW);
  digitalWrite(10, LOW);
  digitalWrite(11, LOW);
  digitalWrite(12, HIGH);
  }
  
  
 
  

}
