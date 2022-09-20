// C++ code
//
void setup()
{
  Serial.begin(9600);
  pinMode(4,INPUT);
  pinMode(7,OUTPUT);
 }

void loop()
{ 
  // TEMPRATURE SENSOR
  
  double a=analogRead(A2);
  double v=(((a/1024)*5)*100);
  Serial.print("ROOM TEMPERATURE IS:");
  Serial.println(v);
  delay(1000);
  
  // Buzzer for Temperature sensor
  
  if(v>=37)
  {
  for (int i=0; i<=5 ; i=i+1) 
  {
     tone(13,i);
     delay(1000);
     noTone(13);
  }
  }
  
  // PIR SENSOR
  
    int B=digitalRead(4);
    Serial.print("MOTION:");
    Serial.println(B);
  
  if(B==0)
    
  {
    
  Serial.println("DETECTED");
  digitalWrite(7,HIGH);
    
  }
  else
    
  {
    
  Serial.println("NOT DETECTED");
  digitalWrite(7,LOW
               
  }
}