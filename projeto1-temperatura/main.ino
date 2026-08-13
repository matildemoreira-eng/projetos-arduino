/* Projeto 1: Estação de Monitorização de Temperatura com TMP36.
Descrição: Lê a temperatura ambiente através do sensor TMP36 (A0) e altera o estado dos LEDs (Vermelho = temp > 25º, Verde = temp <= 25º)
*/
void setup()
{
  pinMode(13, OUTPUT); //led vermelho
  pinMode(11, OUTPUT); //led verde
  
  Serial.begin(9600);
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
   digitalWrite(13, HIGH);//led vermelho acende
   digitalWrite(11, LOW); //led verde desliga
  }
  else
  {
    digitalWrite(11, HIGH); //led verde acende
   digitalWrite(13, LOW);  //led vermelho desliga
  }
  delay(2000); //espera 2 segundos até à próxima leitura
}
