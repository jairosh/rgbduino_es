
void setup(){
    pinMode(7, OUTPUT);     // Configura el pin 7 como salida digital
}


void loop(){
    digitalWrite(7, HIGH);  // "Enciende" el pin 7
    delay(1000);            // Espera 1 segundo
    digitalWrite(7, LOW);   // "Apaga" el pin 7
    delay(1000);            // Espera 1 segundo
}
