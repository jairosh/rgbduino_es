/**
 * En este ejemplo se configura y usa PWM para ajustar el brillo o intensidad de un LED
 * */

int LED = 3;            // Se usará el pin 3
int brillo = 0;         // Brillo del LED
int fadeAmount = 5;     // Cuanto cambiará el brillo en cada paso

void setup(){
    pinMode(LED, OUTPUT);
}

void loop(){
    analogWrite(LED, brillo);            // Escribir el valor para ajustar el brillo (debe ser entre 0 y 255)
    brillo = brillo + fadeAmount;
    if (brillo <= 0 || brillo >= 255) {  // Si está fuera de los limites, cambiar el brillo
        fadeAmount = -fadeAmount;   
    }
    delay(30);                           // Espera 30 mili segundos
}
