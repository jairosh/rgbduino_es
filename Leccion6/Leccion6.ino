/**
 * Ejemplo para controlar los LEDs RGB 
 * 
 * Se necesita instalar la biblioteca "Adafruit NeoPixel" 
 * 
 **/
#include <Adafruit_NeoPixel.h>

#define PIN_RGB1 12
#define PIN_RGB2 13

//Se declaran las variables para manejar los LEDs
//Parámetros en la llamada:
//  - Número de pixeles en la tira (1)
//  - Pin de Arduino en donde está el LED (PIN1/PIN2)
//  - Banderas del tipo de píxel (se dejan tal cual)
Adafruit_NeoPixel rgb1 = Adafruit_NeoPixel(1, PIN_RGB1, NEO_GRB + NEO_KHZ800);
Adafruit_NeoPixel rgb2 = Adafruit_NeoPixel(1, PIN_RGB2, NEO_GRB + NEO_KHZ800);

void setup(){    
    rgb1.begin();
    rgb2.begin();

    rgb1.setBrightness(80); // brillo al 30%

}


void loop(){
    rgb1.clear();
    rgb2.clear();

    uint16_t i, j;

    for(j=0; j<256; j++) {      
      rgb1.setPixelColor(0, Wheel((1+j) & 255));           
      rgb1.show();
      delay(50);
    }

    // Para apagar los LEDs
    rgb1.setPixelColor(0, 0);           
    rgb1.show();
    for(;;){}
}



// Acepta un valor entre 0 y 255 para obtener un valor de color
// Los colores son una transición r - g - b (y de regreso a r)
uint32_t Wheel(byte WheelPos) {
  if(WheelPos < 85) {
    return rgb1.Color(WheelPos * 3, 255 - WheelPos * 3, 0);
  } 
  else if(WheelPos < 170) {
    WheelPos -= 85;
    return rgb1.Color(255 - WheelPos * 3, 0, WheelPos * 3);
  } 
  else {
    WheelPos -= 170;
    return rgb1.Color(0, WheelPos * 3, 255 - WheelPos * 3);
  }
}
