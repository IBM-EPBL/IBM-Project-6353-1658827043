// C++ code
//
void setup()
{
  Serial.begin(9600);
  pinMode(4,OUTPUT);
  pinMode(2,OUTPUT);
}

void loop()
{  
  double t=analogRead(A4);
  double a=(((t/1024)*5)*100);
   Serial.print("TEMPRATURE IS:");
   Serial.println(a);
   

   if(a>=35)
  {
    for(int i=0; i<=5; i=i+1)
    {
      tone(4,i);
      delay(1000);
      noTone(4);
      
    }
  }
  
  //PIR SENSOR
   int s=digitalRead(6);
  Serial.print("MOTION IS DETECTED:");
  Serial.println(s);
  if(s==1)
  {
    Serial.println("YES");
    digitalWrite(2,HIGH);
  }
  else
  {
    Serial.println("NO");
    digitalWrite(2,LOW);
  }
  
}
   

  