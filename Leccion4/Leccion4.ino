/**
 * En este ejemplo se utiliza el botón de usuario para cambiar el estado de un LED
 * */

// Variables a usar
int LED = 4;
int boton = 2;

void setup(){
    pinMode(LED, OUTPUT);
    pinMode(boton, INPUT_PULLUP);
}


void loop(){
    if (digitalRead(Button) == LOW)             // Si el boton está presionado
        digitalWrite(LED, HIGH);                //  prende el LED
    else if (digitalRead(Button) == HIGH)       // Si el botón no está presionado
        digitalWrite(LED, LOW);                 //  apaga el LED
}
