// Nomeando as portas
int redPin = 10;
int yellowPin = 9;
int greenPin = 8;

void setup() {
pinMode(redPin, OUTPUT);
pinMode(yellowPin, OUTPUT);
pinMode(greenPin, OUTPUT);
}

void loop() {
digitalWrite(redPin, HIGH); // acende o vermelho
delay(3000); // espera 3s 

digitalWrite(redPin, LOW); // apaga o vermelho  
digitalWrite(yellowPin, HIGH); // acende o amarelo
delay(3000); // espera 3s 

digitalWrite(greenPin, HIGH); // acende o verde
digitalWrite(yellowPin, LOW); // apaga o amarelo
delay(3000); // espera 3s 
digitalWrite(yellowPin, HIGH); // acende o amarelo
digitalWrite(greenPin, LOW); // apaga o verde  
delay(3000); // espera 3s

digitalWrite(yellowPin, LOW); // apaga o amarelo
// agora o loop se repete
}
