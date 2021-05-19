# rgbduino_es
Código de ejemplo para RGBDuino en español

El sitio principal del fabricante se encuentra en [RGBDuino](https://github.com/RGBduino/RGBDuino).

Pasos:
1. Si no se instala automáticamente el driver, instala el controlador CH341SER del repositorio del fabricante
2. Una vez instalado el driver, se selecciona en Arduino IDE: `Herramientas -> Placa -> Arduino Uno`
3. Selecciona el puerto serial en `Herramientas -> Puerto`
4. ¡Listo! Ya se puede subir código a la placa

Este es un repositorio no oficial para mostrar como se manejan todos los dispositivos que se encuentran en la placa misma.

El código que viene de fábrica está en la carpeta `RGB_LED_test`


Resúmen de las lecciones:

1. Cómo encender un pin.
2. Encender intermitentemente un pin.
3. Uso de PWM para ajustar la intensidad de un pin (ajuste de brillo en LEDs).
4. Usar el botón de usuario (situado a un costado del botón de RESET) para encender un pin.
5. Reproductor de una melodía mediante el buzzer incorporado.
6. Control de los LEDs RGB (RGB1 y RGB2)
