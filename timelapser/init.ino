void globalInit()
{
  initPins();
  initVars();
}
void initPins()
{
  pinMode(POT,         INPUT);
  pinMode(OPTO,        INPUT);
  pinMode(LED_CLICK,   INPUT);
  pinMode(LED_BULB,    INPUT);
  pinMode(BULB,        INPUT);
}
void initVars(){
  click_int=0;
  read_val=-1;
  cyclesNum=-1;
  count=0;
  isBulb=false;
  readBulb();
}
