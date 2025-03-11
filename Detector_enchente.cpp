// C++ code
/* Projeto:Detector de Enchente
   Autor:  Leonardo Cassiano dos Santos
   Data:   22/09/2023
   V 1.0
*/
#define ledVD1   8
#define ledVD2   5
#define ledAM    4
#define ledLJ    3
#define ledVM    2
int cm = 0;

int inches = 0;

long readUltrasonicDistance(int triggerPin, int echoPin)
{
  pinMode(triggerPin, OUTPUT);  // Clear the trigger
  digitalWrite(triggerPin, LOW);
  delayMicroseconds(2);
  // Sets the trigger pin to HIGH state for 10 microseconds
  digitalWrite(triggerPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(triggerPin, LOW);
  pinMode(echoPin, INPUT);
  // Reads the echo pin, and returns the sound wave travel time in microseconds
  return pulseIn(echoPin, HIGH);
}

void setup()
{
  Serial.begin(9600);
  pinMode(ledVD1, OUTPUT);
  pinMode(ledVD2, OUTPUT);
  pinMode(ledAM, OUTPUT);
  pinMode(ledLJ, OUTPUT);
  pinMode(ledVM, OUTPUT);
}
void loop()
{
// measure the ping time in cm
  cm = 0.01723 * readUltrasonicDistance(7, 6);
  // convert to inches by dividing by 2.54

  inches = (cm / 2.54);
  Serial.print(cm);
  Serial.print("cm, ");
  Serial.print(inches);
  Serial.println("in");
  if (cm<=60)                 digitalWrite(ledVD1,HIGH);
  else                        digitalWrite(ledVD1,LOW);
  if( (cm>60)  &&  (cm<120))  digitalWrite(ledVD2,HIGH);
  else                        digitalWrite(ledVD2,LOW);
  if ((cm>120)   && (cm<180)) digitalWrite(ledAM,HIGH);
  else                        digitalWrite(ledAM,LOW);
  if((cm>180) && (cm<240))     digitalWrite(ledLJ,HIGH);
  else                        digitalWrite(ledLJ,LOW);
  if(cm>240)                 digitalWrite(ledVM,HIGH);
  else                        digitalWrite(ledVM,LOW);
 delay(100); // Wait for 100 millisecond(s)
}
