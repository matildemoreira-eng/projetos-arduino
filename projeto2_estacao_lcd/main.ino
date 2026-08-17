/* Projeto 1: Estação de Monitorização de Temperatura com TMP36
Descrição: Lê a temperatura ambiente através do sensor TMP36 (A0) e altera o estado dos LEDs (Vermelho = temp > 25º, Verde = temp <= 25º)
*/
#include <LiquidCrystal.h> //incluir biblioteca LC

LiquidCrystal lcd(2,3,4,5,6,7);
void setup()
{
  pinMode(13, OUTPUT); //led vermelho
  pinMode(11, OUTPUT); //led verde
  pinMode(10, OUTPUT); // alarme (buzzer)
  
  Serial.begin(9600);
  lcd.begin(16,2); 
 
}

void loop()
{
  int leitura =analogRead(A0);
  float volt =leitura *(5.0/1024.0); //converte para volts
  float temp= (volt-0.5)*100; //converte para Celsius
  
  Serial.print("Temperatura: ");
  Serial.print(temp);
  Serial.println(" C");
  
  if(temp>25)
  {
    lcd.clear();
    tone(10,1000,1500);
    lcd.setCursor(0,0); 
    lcd.print("Temp:");
    lcd.setCursor(6,0);
    lcd.print(temp);
    lcd.setCursor(12,0);
    lcd.print("C");
    lcd.setCursor(0,1); 
    lcd.print("Critica!");
 
   digitalWrite(13, HIGH);//led vermelho acende
   digitalWrite(11, LOW); //led verde desliga
    
  }
  else
  {
    lcd.clear();
    noTone(10);
    lcd.setCursor(0,0); 
    lcd.print("Temp:");
    lcd.setCursor(6,0);
    lcd.print(temp);
    lcd.setCursor(12,0);
    lcd.print("C");
    lcd.setCursor(0,1); 
    lcd.print("Normal");
    digitalWrite(11, HIGH); //led verde acende
   digitalWrite(13, LOW);  //led vermelho desliga
  }
  delay(2000); //espera 2 segundos até à próxima leitura
}
