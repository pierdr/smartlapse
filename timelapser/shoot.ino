void clickPhoto(){
  if(isBulb)
  {
    pinMode(OPTO, OUTPUT);
    pinMode(LED_CLICK,  OUTPUT);
  
    digitalWrite(OPTO, HIGH);
    openShutter+=15;
    delay(constrain(openShutter,startOpenShutter,endOpenShutter));
    Serial.print("shutter open for");
    Serial.println(openShutter);
    digitalWrite(OPTO, LOW);
  
    digitalWrite(LED_CLICK,  HIGH);
    delay(50);
    digitalWrite(LED_CLICK,  LOW);
  
    pinMode(OPTO,  INPUT);
    pinMode(LED_CLICK,   INPUT);
  }
  else
  {
    pinMode(OPTO, OUTPUT);
    pinMode(LED_CLICK,  OUTPUT);
  
  
    digitalWrite(OPTO, HIGH);
    delay(150);
    digitalWrite(OPTO, LOW);
  
    digitalWrite(LED_CLICK,  HIGH);
    delay(50);
    digitalWrite(LED_CLICK,  LOW);
  
     pinMode(OPTO,  INPUT);
    pinMode(LED_CLICK,   INPUT);
  }
}

