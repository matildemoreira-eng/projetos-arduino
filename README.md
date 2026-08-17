# projetos-arduino
Projetos e circuitos de eletrónica/Arduino desenvolvidos no Tinkercad para Engenharia Eletrotécnica e de Computadores.

## Projeto 1: Monitorização de temperatura com TMP36.

Sistema de leitura de temperatura ambiente com alerta luminoso via LEDs.

### Componentes
* Arduino Uno
* Sensor de Temperatura Analógico (TMP36)
* 2x LEDs (Verde e Vermelho)
* 2x Resistores (220 Ω)
* Multímetro Virtual

### Circuito Montado
![Circuito](projeto1-temperatura.png)

### Funcionamento
* O Arduino lê a tensão do pino 'A0' vinda do TMP36 e converte-a para graus Celsius
* Se a temperatura for **superior a 25°C**, acende **LED vermelho** (alerta)
* Se a temperatura for **inferior ou igual a 25°C**, acende **LED verde** (normal)

## Projeto 2: Estação Meteorológica com ecrã LCD & Alarme Sonoro.

Evolução do sistema de monitorização de temperatura com apresentação de dados em ecrã LCD e alerta sonoro.

### Componentes
* Arduino Uno
* Sensor de Temperatura Analógico (TMP36)
* Ecrã LCD 16X2 (Interface Paralela)
* Buzzer Piezoelétrico
* 2x LEDs (Verde e Vermelho)
* 2x Resistores (220 Ω)
* 1x Resitor (1 kΩ)

### Circuito Montado
![Projeto 2- LCD e Alarme](projeto2-estação_lcd.png)

### Funcionamento
* Exibe em tempo real a temperatura atualizada no **Ecrã LCD 16x2**.
* Se a temperatura ultrapassar os **25°C**:
   * O ecrã mostra a indicação "Crítica!".
   * O **Buzzer** emite um sinal sonoro de alarme ("tone"). 
   * O **LED Vermelho** acende.
* Caso contrário, mostra "Normal", desliga o alarme e **LED Verde** acende.    

