const int botao1 = 2;
const int botao2 = 3;

int var1;
int var2;

unsigned long lastDebounceTime1 = 0;
unsigned long lastDebounceTime2 = 0;
unsigned long debounceDelay = 100;
  
 void setup()
 { 
    pinMode(botao1, INPUT);
  	pinMode(botao2, INPUT); 
   	Serial.begin(9600);
 }
 
 void loop()
 {
    var1 = digitalRead(botao1);
   	var2 = digitalRead(botao2);
   	
   if ((millis() - lastDebounceTime1) > debounceDelay && var1) {
     Serial.println("botao 1 apertado");
     lastDebounceTime1 = millis();
   }
   if ((millis() - lastDebounceTime2) > debounceDelay && !var2) {
     Serial.println("botao 2 apertado");
     lastDebounceTime2 = millis();
   }
 }