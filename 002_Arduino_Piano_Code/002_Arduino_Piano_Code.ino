#define Tone_C 262 // Define Tone C
#define Tone_D 294 // Define Tone D
#define Tone_E 330 // Define Tone E
#define Tone_F 349 // Define Tone F
#define Tone_G 392 // Define Tone G
#define Tone_A 440 // Define Tone A
#define Tone_B 494 // Define Tone B

const int C = 4; // Assign C to Pin 10
const int D = 5; // Assign D to Pin 9
const int E = 6; // Assign E to Pin 8
const int F = 7; // Assign F to Pin 7
const int G = 8; // Assign G to Pin 6
const int A = 9; // Assign A to Pin 5
const int B = 10; // Assign B to Pin 4

const int Sound = 11; // For the speakers - sound will occur on Pin 11
const int LED = 13; // LED assigned to Pin 13 but we can opt out jumper wires

void setup()
{
  pinMode(LED, OUTPUT); // LED functionality to behave as an output 
  pinMode(C, INPUT); // C or Pin 10 functionality to behave as an input 
  digitalWrite(C, HIGH); // When button is not pressed for C or Pin 10
  
  pinMode(D, INPUT); // D or Pin 9 functionality to behave as an input 
  digitalWrite(D, HIGH); // When button is not pressed for D or Pin 9
  
  pinMode(E, INPUT); // E or Pin 8 functionality to behave as an input 
  digitalWrite(E, HIGH); // When button is not pressed for E or Pin 8
  
  pinMode(F, INPUT); // F or Pin 7 functionality to behave as an input 
  digitalWrite(F, HIGH); // When button is not pressed for F or Pin 7
  
  pinMode(G, INPUT); // G or Pin 6 functionality to behave as an input 
  digitalWrite(G, HIGH); // When button is not pressed for G or Pin 6
  
  pinMode(A, INPUT); // A or Pin 5 functionality to behave as an input 
  digitalWrite(A, HIGH); // When button is not pressed for A or Pin 5
  
  pinMode(B, INPUT); // B or Pin 4 functionality to behave as an input 
  digitalWrite(B, HIGH); // When button is not pressed for B or Pin 4

  digitalWrite(LED, LOW); // Turn built-in LED Off
}

void loop()
{
  while(digitalRead(C) == LOW) // When button is pressed for C or Pin 10
  {
    tone(Sound, Tone_C); // Tone to play out of speaker. This Tone is C
    digitalWrite(LED, HIGH); // Turn built-in LED on 
  }

  while(digitalRead(D) == LOW) // When button is pressed for D or Pin 9
  {
    tone(Sound, Tone_D); // Tone to play out of speaker. This Tone is D
    digitalWrite(LED, HIGH); // Turn built-in LED on 
  }

  while(digitalRead(E) == LOW) // When button is pressed for E or Pin 8
  {
    tone(Sound, Tone_E); // Tone to play out of speaker. This Tone is E
    digitalWrite(LED, HIGH); // Turn built-in LED on
  }

  while(digitalRead(F) == LOW) // When button is pressed for F or Pin 7
  {
    tone(Sound, Tone_F); // Tone to play out of speaker. This Tone is F
    digitalWrite(LED, HIGH); // Turn built-in LED on 
  }

  while(digitalRead(G) == LOW) // When button is pressed for G or Pin 6
  {
    tone(Sound, Tone_G); // Tone to play out of speaker. This Tone is G
    digitalWrite(LED, HIGH); // Turn built-in LED on 
  }

  while(digitalRead(A) == LOW) // When button is pressed for A or Pin 5
  {
    tone(Sound, Tone_A); // Tone to play out of speaker. This Tone is A
    digitalWrite(LED, HIGH); // Turn built-in LED on 
  }

  while(digitalRead(B) == LOW) // When button is pressed for B or Pin 4
  {
    tone(Sound, Tone_B); // Tone to play out of speaker. This Tone is B
    digitalWrite(LED, HIGH); // Turn built-in LED on 
  }

  noTone(Sound); // No Sound
  digitalWrite(LED, LOW); // When no sound or when button not pressed LED off

}
