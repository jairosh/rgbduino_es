/**
 * Código para reproducir una melodía en el Buzzer de la placa
 * Debe estar habilitado el buzzer con el switch que está junto a él
 * */
//  3ra Octava
#define Do3    131  // C3
#define Dos3  139   // C#3 (sostenido)
#define Reb3  139   // Db3 (bemol)
#define Re3    147  // D3
#define Res3  156   // D#3 (sostenido)
#define Mib3  156   // Eb3 (bemol)
#define Mi3    165  // E3
#define Fa3    175  // F3
#define Fas3  185   // F#3 (sostenido)
#define Solb3 185   // Gb3 (bemol)
#define Sol3   196  // G3
#define Sols3 208   // G#3 (sostenido)
#define Lab3  208   // Ab3 (bemol)
#define La3    220  // A3
#define Las3  233   // A#3 (sostenido)
#define Sib3  233   // Bb3 (bemol)
#define Si3    245  // B3

//  4ta Octava
#define Do4    262  // C4
#define Dos4  277   // C#4 (sostenido)
#define Reb4  277   // Db4 (bemol)
#define Re4    294  // D4
#define Res4  311   // D#4 (sostenido)
#define Mib4  311   // Eb4 (bemol)
#define Mi4    330  // E4
#define Fa4    349  // F4
#define Fas4  370   // F#4 (sostenido)
#define Solb4 370   // Gb4 (bemol)
#define Sol4   392  // G4
#define Sols4 415   // G#4 (sostenido)
#define Lab4  415   // Ab4 (bemol)
#define La4    440  // A4
#define Las4  466   // A#4 (sostenido)
#define Sib4  466   // Bb4 (bemol)
#define Si4    493  // B4

//  5ta Octava
#define Do5    523  // C5
#define Dos5  554   // C#5 (sostenido)
#define Reb5  554   // Db5 (bemol)
#define Re5    587  // D5
#define Res5  622   // D#5 (sostenido)
#define Mib5  622   // Eb5 (bemol)
#define Mi5    659  // E5
#define Fa5    698  // F5
#define Fas5  740   // F#5 (sostenido)
#define Solb5 740   // Gb5 (bemol)
#define Sol5   784  // G5
#define Sols5 830   // G#5 (sostenido)
#define Lab5  830   // Ab5 (bemol)
#define La5    880  // A5
#define Las5  932   // A#5 (sostenido)
#define Sib5  932   // Bb5 (bemol)
#define Si5    988  // B5

#define REST 0

//Duración de las notas
#define ENTERA 1.0
#define MEDIA  0.5
#define CUART  0.25
#define OCTAV  0.125
#define DIECI  0.0625

/*
// Himno a la alegría, L. van Beethoven
int MELODIA[] = {
    Mi4, Mi4, Fa4, Sol4,
    Sol4,Fa4, Mi4, Re4,    
    Do4, Do4, Re4, Mi4,
    Mi4, Re4, Re4,
    
    Mi4, Mi4, Fa4, Sol4,
    Sol4,Fa4, Mi4, Re4,
    Do4, Do4, Re4, Mi4,
    Re4, Do4, Do4,

    Re4, Re4, Mi4,  Do4,
    Re4, Mi4, Fa4,  Mi4, Do4,
    Re4, Mi4, Fa4,  Mi4, Re4,
    Do4, Re4, Sol3,

    Mi4, Mi4, Fa4, Sol4,
    Sol4,Fa4, Mi4, Re4,
    Do4, Do4, Re4, Mi4,
    Re4, Do4, Do4
};

float DURACION[] = {
  ENTERA, ENTERA, ENTERA, ENTERA,
  ENTERA, ENTERA, ENTERA, ENTERA,
  ENTERA, ENTERA, ENTERA, ENTERA,
  ENTERA+MEDIA, MEDIA, ENTERA+ENTERA,
  
  ENTERA, ENTERA, ENTERA, ENTERA,
  ENTERA, ENTERA, ENTERA, ENTERA,
  ENTERA, ENTERA, ENTERA, ENTERA,
  ENTERA+MEDIA, MEDIA, ENTERA+ENTERA,
  
  ENTERA, ENTERA, ENTERA, ENTERA,  
  ENTERA, MEDIA, MEDIA, ENTERA, ENTERA,
  ENTERA, MEDIA, MEDIA, ENTERA, ENTERA,
  ENTERA, ENTERA, ENTERA, ENTERA,
  
  ENTERA, ENTERA, ENTERA, ENTERA,
  ENTERA, ENTERA, ENTERA, ENTERA,
  ENTERA, ENTERA, ENTERA, ENTERA,
  ENTERA+MEDIA, MEDIA, ENTERA+ENTERA,
};

*/


int MELODIA[] = {
    // Tema de Super Mario Bros 
    // https://musescore.com/user/2123/scores/2145
    Mi5, Mi5, REST, Mi5, REST, Do5, Mi5, //1
  Sol5, REST, Sol4, REST, 
  Do5, Sol4, REST, Mi4, // 3
  La4, Si4, Las4, La4,
  Sol4, Mi5, Sol5, Las5, Fa5, Sol5,
  REST, Mi5,Do5, Re5, Si4,
  Do5, Sol4, REST, Mi4, // repeats from 3
  La4, Si4, Las4, La4,
  Sol4, Mi5, Sol5, Las5, Fa5, Sol5,
  REST, Mi5,Do5, Re5, Si4,
  
  REST, Sol5, Fas5, Fa5, Res5, Mi5,//7
  REST, Sols4, La4, Do4, REST, La4, Do5, Re5,
  REST, Res5, REST, Re5,
  Do5, REST,

  REST, Sol5, Fas5, Fa5, Res5, Mi5,//repeats from 7
  REST, Sols4, La4, Do4, REST, La4, Do5, Re5,
  REST, Res5, REST, Re5,
  Do5, REST,

  Do5, Do5, Do5, REST, Do5, Re5,//11
  Mi5, Do5, La4, Sol4,

  Do5, Do5, Do5, REST, Do5, Re5, Mi5,//13
  REST, 
  Do5, Do5, Do5, REST, Do5, Re5,
  Mi5, Do5, La4, Sol4,
  Mi5, Mi5, REST, Mi5, REST, Do5, Mi5,
  Sol5, REST, Sol4, REST, 
  Do5, Sol4, REST, Mi4, // 19
  
  La4, Si4, Las4, La4,
  Sol4, Mi5, Sol5, Las5, Fa5, Sol5,
  REST, Mi5, Do5, Re5, Si4,

  Do5, Sol4, REST, Mi4, // repeats from 19
  La4, Si4, Las4, La4,
  Sol4, Mi5, Sol5, Las5, Fa5, Sol5,
  REST, Mi5, Do5, Re5, Si4,

  Mi5, Do5, Sol4, REST, Sols4,//23
  La4, Fa5, Fa5, La4,
  Re5, Las5, Las5, Las5, Sol5, Fa5,
  
  Mi5, Do5, La4, Sol4, //26
  Mi5, Do5, Sol4, REST, Sols4,
  La4, Fa5, Fa5, La4,
  Si4, Fa5, Fa5, Fa5, Mi5, Re5,
  Do5, Mi4, Mi4, Do4,

  Mi5, Do5, Sol4, REST, Sols4,//repeats from 23
  La4, Fa5, Fa5, La4,
  Re5, Las5, Las5, Las5, Sol5, Fa5,
  
  Mi5, Do5, La4, Sol4, //26
  Mi5, Do5, Sol4, REST, Sols4,
  La4, Fa5, Fa5, La4,
  Si4, Fa5, Fa5, Fa5, Mi5, Re5,
  Do5, Mi4, Mi4, Do4,
  Do5, Do5, Do5, REST, Do5, Re5, Mi5,
  REST,

  Do5, Do5, Do5, REST, Do5, Re5, //33
  Mi5, Do5, La4, Sol4,
  Mi5, Mi5, REST, Mi5, REST, Do5, Mi5,
  Sol5, REST, Sol4, REST, 
  Mi5, Do5, Sol4, REST, Sols4,
  La4, Fa5, Fa5, La4,
  Re5, Las5, Las5, Las5, Sol5, Fa5,
  
  Mi5, Do5, La4, Sol4, //40
  Mi5, Do5, Sol4, REST, Sols4,
  La4, Fa5, Fa5, La4,
  Si4, Fa5, Fa5, Fa5, Mi5, Re5,
  Do5, Mi4, Mi4, Do4,
  
  //game over sound
  Do5, Sol4, Mi4, //45
  La4, Si4, La4, Sols4, Las4, Sols4,
  Sol4, Re4, Mi4  
};

float DURACION[] = {
    MEDIA,   MEDIA,  MEDIA,  MEDIA, MEDIA, MEDIA, MEDIA, //1
  ENTERA,   ENTERA,  MEDIA,  ENTERA, 
  ENTERA+MEDIA,  MEDIA,  ENTERA, ENTERA+MEDIA, // 3
  ENTERA,   ENTERA,  MEDIA,  ENTERA,
  MEDIA+CUART, MEDIA+CUART, MEDIA+CUART,  ENTERA, MEDIA, MEDIA,
  MEDIA,   ENTERA,  MEDIA,  MEDIA, ENTERA+MEDIA,
  ENTERA+MEDIA,  MEDIA,  ENTERA, ENTERA+MEDIA, // repeats from 3
  ENTERA,   ENTERA,  MEDIA,  ENTERA,
  MEDIA+CUART, MEDIA+CUART, MEDIA+CUART,  ENTERA, MEDIA, MEDIA,
  MEDIA,   ENTERA,  MEDIA,  MEDIA, ENTERA+MEDIA,

  
  ENTERA, MEDIA, MEDIA, MEDIA, ENTERA, MEDIA,//7
  MEDIA, MEDIA, MEDIA, MEDIA, MEDIA, MEDIA, MEDIA, MEDIA,
  ENTERA, ENTERA, MEDIA, ENTERA+MEDIA,
  ENTERA+ENTERA, ENTERA+ENTERA,

  ENTERA, MEDIA, MEDIA, MEDIA, ENTERA, MEDIA,//repeats from 7
  MEDIA, MEDIA, MEDIA, MEDIA, MEDIA, MEDIA, MEDIA, MEDIA,
  ENTERA, ENTERA, MEDIA, ENTERA+MEDIA,
  ENTERA+ENTERA, ENTERA+ENTERA,

  MEDIA, ENTERA, MEDIA, MEDIA, MEDIA, ENTERA,//11
  MEDIA, ENTERA, MEDIA, ENTERA+ENTERA,

  MEDIA, ENTERA, MEDIA, MEDIA, MEDIA, MEDIA, MEDIA,//13
  4*ENTERA, 
  MEDIA, ENTERA, MEDIA, MEDIA, MEDIA, ENTERA,
  MEDIA, ENTERA, MEDIA, ENTERA+ENTERA,
  MEDIA, MEDIA, MEDIA, MEDIA, MEDIA, MEDIA, ENTERA,
  ENTERA, ENTERA, ENTERA, ENTERA, 
  ENTERA+MEDIA, MEDIA, ENTERA, ENTERA+MEDIA, // 19
  
  ENTERA, ENTERA, MEDIA, ENTERA,
  MEDIA+CUART, MEDIA+CUART, MEDIA+CUART, ENTERA, MEDIA, MEDIA,
  MEDIA, ENTERA, MEDIA, MEDIA, ENTERA+MEDIA,

  ENTERA+MEDIA, MEDIA, ENTERA, ENTERA+MEDIA, // repeats from 19
  ENTERA, ENTERA, MEDIA, ENTERA,
  MEDIA+CUART, MEDIA+CUART, MEDIA+CUART, ENTERA, MEDIA, MEDIA,
  MEDIA, ENTERA, MEDIA, MEDIA, ENTERA+MEDIA,

  MEDIA, ENTERA, MEDIA, ENTERA, ENTERA,//ENTERA+ENTERA3
  MEDIA, ENTERA, MEDIA, ENTERA+ENTERA,
  MEDIA+CUART, MEDIA+CUART, MEDIA+CUART, MEDIA+CUART, MEDIA+CUART, MEDIA+CUART,
  
  MEDIA, ENTERA, MEDIA, ENTERA+ENTERA, //ENTERA+ENTERA6
  MEDIA, ENTERA, MEDIA, ENTERA, ENTERA,
  MEDIA, ENTERA, MEDIA, ENTERA+ENTERA,
  MEDIA, ENTERA, MEDIA, MEDIA+CUART, MEDIA+CUART, MEDIA+CUART,
  MEDIA, ENTERA, MEDIA, ENTERA+ENTERA,

  MEDIA, ENTERA, MEDIA, ENTERA, ENTERA,//repeats from ENTERA+ENTERA3
  MEDIA, ENTERA, MEDIA, ENTERA+ENTERA,
  MEDIA+CUART, MEDIA+CUART, MEDIA+CUART, MEDIA+CUART, MEDIA+CUART, MEDIA+CUART,
  
  MEDIA, ENTERA, MEDIA, ENTERA+ENTERA, //ENTERA+ENTERA6
  MEDIA, ENTERA, MEDIA, ENTERA, ENTERA,
  MEDIA, ENTERA, MEDIA, ENTERA+ENTERA,
  MEDIA, ENTERA, MEDIA, MEDIA+CUART, MEDIA+CUART, MEDIA+CUART,
  MEDIA, ENTERA, MEDIA, ENTERA+ENTERA,
  MEDIA, ENTERA, MEDIA, MEDIA, MEDIA, MEDIA, MEDIA,
  4*ENTERA,

  MEDIA, ENTERA, MEDIA, MEDIA, MEDIA, ENTERA, //33
  MEDIA, ENTERA, MEDIA, ENTERA+ENTERA,
  MEDIA, MEDIA, MEDIA, MEDIA, MEDIA, MEDIA, ENTERA,
  ENTERA, ENTERA, ENTERA, ENTERA, 
  MEDIA, ENTERA, MEDIA, ENTERA, ENTERA,
  MEDIA, ENTERA, MEDIA, ENTERA+ENTERA,
  MEDIA+CUART, MEDIA+CUART, MEDIA+CUART, MEDIA+CUART, MEDIA+CUART, MEDIA+CUART,
  
  MEDIA, ENTERA, MEDIA, ENTERA+ENTERA, //ENTERA0
  MEDIA, ENTERA, MEDIA, ENTERA, ENTERA,
  MEDIA, ENTERA, MEDIA, ENTERA+ENTERA,
  MEDIA, ENTERA, MEDIA, MEDIA+CUART, MEDIA+CUART, MEDIA+CUART,
  MEDIA, ENTERA, MEDIA, ENTERA+ENTERA,
  
  //game over sound
  ENTERA+MEDIA, ENTERA+MEDIA, ENTERA, //ENTERA5
  MEDIA+CUART, MEDIA+CUART, MEDIA+CUART, MEDIA+CUART, MEDIA+CUART, MEDIA+CUART,
  MEDIA, MEDIA, ENTERA+ENTERA+ENTERA,  
}; 
 

int length;
int BUZZER = 8; // El buzzer se encuentra conectado al pin D8
int TEMPO = 250;

void setup(){
  pinMode(BUZZER,OUTPUT);
  length = sizeof(MELODIA)/sizeof(MELODIA[0]); // Cuantas notas hay en la melodía
}

void loop(){
  for(int t=0; t<length; t++){
    tone(BUZZER, MELODIA[t]);
    delay(TEMPO * DURACION [t]);   
    noTone(BUZZER);
  }
  
  delay(2000);
}
