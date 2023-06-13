//Display LCD 16x2 e modulo I2C
#include <Wire.h>
#include <LiquidCrystal_I2C.h>
//Inicializa o display no endereco 0x3F gerado pelo I2c Scanner
LiquidCrystal_I2C lcd(0x3F,16,2);

// Estabeleça um nome para o pino 13:
int led = 13;
// Se executa cada vez que o Arduino inicia:
void setup() {
 // Inicializa o pino digital como saída.
 pinMode(led, OUTPUT);
 lcd.init();
}
// A função loop() continua executando a programação até que se tenha energia ou até que se aperte o botão reset.
void loop() {
 digitalWrite(led, HIGH); // Acende o LED
 delay(1000); // Aguarda um segundo (1s = 1000ms)
 digitalWrite(led, LOW); // Apaga o LED
 delay(1000); // Aguarda um segundo (1s = 1000ms)
 lcd.setBacklight(HIGH);
 lcd.setCursor(2,0);
 lcd.print("Box Didatico");
 lcd.setCursor(4,1);
 lcd.print("IFPB-CR");
 delay(1000);
 lcd.setBacklight(LOW);
 delay(1000);
}
