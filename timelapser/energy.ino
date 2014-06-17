
void energyManagement()
{
  
  if(DISABLE_ADC)
  {
    ADCSRA=0;
  }
  //clear reset flags
  MCUSR=0;


  //SET WTD INTERVAL
  //reset wd
  WDTCSR= bit(WDCE) | bit(WDE);
  //set interval
  WDTCSR= bit(WDIE) | bit(WDP2) | bit(WDP1);
  
  wdt_reset();

  set_sleep_mode(SLEEP_MODE_PWR_DOWN);
  sleep_enable();

  //turn-off brown-out 
  MCUCR = bit(BODS) | bit(BODSE);
  MCUCR = bit(BODS);
  sleep_cpu();

  sleep_disable();
}



ISR (WDT_vect)
{
  wdt_disable(); 
}


