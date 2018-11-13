/*

  THIS ONE!!

  
  Melody

 Plays a melody

 circuit:
 * 8-ohm speaker on digital pin 8

 created 21 Jan 2010
 modified 30 Aug 2011
 by Tom Igoe

This example code is in the public domain.

 http://www.arduino.cc/en/Tutorial/Tone

 */
#include "pitches.h"

int ledPin0 = 0;
int ledPin1 = 1;
int ledPin2 = 2;
int ledPin3 = 3;
int ledPin4 = 4;
int ledPin5 = 5;
int ledPin6 = 6;
int ledPin7 = 7;
int ledPin8 = 8;
int ledPin9 = 9;
int ledPin10 = 10;

// notes in the melody:   NOTE_C4, NOTE_G3, NOTE_G3, NOTE_A3, NOTE_G3, 0, NOTE_B3, NOTE_C4,
int melody[] = {

   NOTE_B0, NOTE_C1, NOTE_CS1, NOTE_D1, NOTE_DS1, NOTE_E1, NOTE_F1, NOTE_FS1, NOTE_G1, NOTE_GS1, 
   NOTE_A1, NOTE_AS1, NOTE_B1, NOTE_C2, NOTE_CS2, NOTE_D2, NOTE_DS2, NOTE_E2, NOTE_F2, NOTE_FS2,
   NOTE_G2, NOTE_GS2, NOTE_A2, NOTE_AS2, NOTE_B2, NOTE_C3, NOTE_CS3, NOTE_D3, NOTE_DS3, NOTE_E3,
   NOTE_F3, NOTE_FS3, NOTE_G3, NOTE_GS3, NOTE_A3, NOTE_AS3, NOTE_B3, NOTE_C4, NOTE_CS4, NOTE_D4,
   NOTE_DS4, NOTE_E4, NOTE_F4, NOTE_FS4, NOTE_G4, NOTE_GS4, NOTE_A4, NOTE_AS4, NOTE_B4, NOTE_C5,
   NOTE_CS5, NOTE_D5, NOTE_DS5, NOTE_E5, NOTE_F5, NOTE_FS5, NOTE_G5, NOTE_GS5, NOTE_A5, NOTE_AS5, 
   NOTE_B5, NOTE_C6, NOTE_CS6, NOTE_D6, NOTE_DS6, NOTE_E6, NOTE_F6, NOTE_FS6, NOTE_G6, NOTE_GS6, 
   NOTE_A6, NOTE_AS6, NOTE_B6, NOTE_C7, NOTE_CS7, NOTE_D7, NOTE_DS7, NOTE_E7, NOTE_F7, NOTE_FS7, 
   NOTE_G7, NOTE_GS7, NOTE_A7, NOTE_AS7, NOTE_B7, NOTE_C8, NOTE_CS8, NOTE_D8, NOTE_DS8
};

int noteDurationsOne[] = {
  60
};

int melody1[] = {
//  0, 0, 0, 0, 0, 0, 0, 0
  0
};

int melody2[] = {
  33, 0, 33, 0, 33, 0, 33, 0
};

int melody3[] = {
  8655, 765, 0, 8755, 0, 86654, 0, 0
};

int melody4[] = {
  7, 0, 0, 0, 0, 0, 0, 0
};

int melody5[] = {
  0, 0, 0, 0, 0, 0, 0, 0
};

int melody6[] = {
  0, 0, 0, 0, 0, 0, 0, 0
};

int melody7[] = {
  0, 0, 0, 0, 0, 0, 0, 0
};

int melody8[] = {
  0, 0, 0, 0, 0, 0, 0, 0
};

int melody9[] = {
  0, 0, 0, 0, 0, 0, 0, 0
};

// note durations: 4 = quarter note, 8 = eighth note, etc.:
int specialnoteDurations[] = {
//  4, 8, 8, 4, 4, 4, 4, 4
  4, 8, 8, 2, 2, 4, 4, 8
};


void setup() {
}

void loop() {
   // --------------------------------- PIN 10 LOOPED ---------------------------------  
    pinMode(ledPin10, OUTPUT);
  for (int thisNote = 0; thisNote < 8; thisNote++) {
//    tone(ledPin10, 765, 125);
//    int specialnoteDuration = 2000 / specialnoteDurations[thisNote];
//    tone(ledPin10, melody1[thisNote], specialnoteDuration);
    tone(ledPin10, melody[NOTE_F7], 125);
//    int pauseBetweenNotes = specialnoteDuration * 1.30;
//    delay(pauseBetweenNotes);
    digitalWrite(ledPin10, HIGH);   // turn the LED on (HIGH is the voltage level)
  }
  
  delay(200);
// --------------------------------- PIN 1 ---------------------------------  
    pinMode(ledPin1, OUTPUT);
  for (int thisNote = 0; thisNote < 89; thisNote++) {
   tone(ledPin1, 578, 125);
    noTone(ledPin1);
//    digitalWrite(ledPin1, HIGH);   // turn the LED on (HIGH is the voltage level)
  }
// --------------------------------- PIN 2 ---------------------------------  
    pinMode(ledPin2, OUTPUT);
  for (int thisNote = 0; thisNote < 89; thisNote++) {
   tone(ledPin2, melody1[thisNote], 125);
    noTone(ledPin2);
//    digitalWrite(ledPin2, HIGH);   // turn the LED on (HIGH is the voltage level)
  }
// --------------------------------- PIN 3 ---------------------------------  
    pinMode(ledPin3, OUTPUT);
  for (int thisNote = 0; thisNote < 89; thisNote++) {
   tone(ledPin3, melody3[thisNote], 125);
    noTone(ledPin3);
//    digitalWrite(ledPin3, HIGH);   // turn the LED on (HIGH is the voltage level)
  }
// --------------------------------- PIN 4 ---------------------------------  
    pinMode(ledPin4, OUTPUT);
  for (int thisNote = 0; thisNote < 89; thisNote++) {
    tone(ledPin4, melody[NOTE_GS3], 125);
    noTone(ledPin4);
//    digitalWrite(ledPin4, HIGH);   // turn the LED on (HIGH is the voltage level)
  }
// --------------------------------- PIN 5 ---------------------------------  
    pinMode(ledPin5, OUTPUT);
  for (int thisNote = 0; thisNote < 89; thisNote++) {
    tone(ledPin5, melody[NOTE_CS3], 125);
    noTone(ledPin5);
    digitalWrite(ledPin5, HIGH);   // turn the LED on (HIGH is the voltage level)
  }
// --------------------------------- PIN 6 ---------------------------------  
    pinMode(ledPin6, OUTPUT);
  for (int thisNote = 0; thisNote < 89; thisNote++) {
    tone(ledPin6, melody[NOTE_D1], 125);
    noTone(ledPin6);
//    digitalWrite(ledPin6, HIGH);   // turn the LED on (HIGH is the voltage level)
  }
// --------------------------------- PIN 7 ---------------------------------  
    pinMode(ledPin7, OUTPUT);
  for (int thisNote = 0; thisNote < 89; thisNote++) {
    tone(ledPin7, melody[NOTE_G3], 125);
    noTone(ledPin7);
//    digitalWrite(ledPin7, HIGH);   // turn the LED on (HIGH is the voltage level)
  }
// --------------------------------- PIN 8 ---------------------------------      
    pinMode(ledPin8, OUTPUT);
  for (int thisNote = 0; thisNote < 89; thisNote++) {
    tone(ledPin8, melody[NOTE_C4], 125);
    noTone(ledPin8);
//    digitalWrite(ledPin8, HIGH);   // turn the LED on (HIGH is the voltage level)
  }
// --------------------------------- PIN 9 ---------------------------------      
    pinMode(ledPin9, OUTPUT);
  for (int thisNote = 0; thisNote < 89; thisNote++) {
    tone(ledPin9, melody[NOTE_E2], 125);
    noTone(ledPin9);
//    digitalWrite(ledPin9, HIGH);   // turn the LED on (HIGH is the voltage level)
  }

}

