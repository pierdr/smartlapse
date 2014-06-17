void readBulb()
{
  Serial.println(  digitalRead(BULB));
  isBulb=(digitalRead(BULB)>0)?true:false;
  
  if(isBulb){
    pinMode(LED_BULB,OUTPUT);
    digitalWrite(LED_BULB,HIGH);
  }
  else
  {
    digitalWrite(LED_BULB,LOW);
    pinMode(LED_BULB,INPUT);
  }
}


void readInterval()
{
  read_val=analogRead(POT);
  cyclesNum=wtgInt[(int)floor(read_val/102.4)];
}

void shootUpdate(){
  
  count++;
  if(count>=cyclesNum)
  {
    clickPhoto();
    count=0;
  }
  
}

void readInputs()
{
  pinMode(SENSOR_5V,OUTPUT);
  digitalWrite(SENSOR_5V,HIGH);
  delay(10);
  
  readBulb();
  readInterval();
  
  digitalWrite(SENSOR_5V,LOW);
  pinMode(SENSOR_5V,INPUT);
}

