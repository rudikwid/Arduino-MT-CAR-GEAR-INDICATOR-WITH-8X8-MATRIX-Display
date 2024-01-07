/*
 * PROGRAM INDIKATOR GIGI MOBIL MANUAL DENGAN TAMPILAN MATRIX LED 8X8 dan LED TERPISAH
 * MCU= ARDUINO UNO/NANO
 * DISPLAY 7 PCS LED (N-1-2-3-4-5-R)
 * DISPLAY MATRIX 8X8 dengan IC MAX7219
 * DESIGN BY RUDIK WID, NGOPREK DI RUMAH YT, 7 JANUARI 2024
 */

const int BUTTON1 = A0;  //Initialize PinA0 with Button1
const int BUTTON2 = A1;  //Initialize PinA1 with Button2
const int BUTTON3 = A2;  //Initialize PinA2 with Button3
const int BUTTON4 = A3;  //Initialize PinA3 with Button4
const int BUTTON5 = A4;  //Initialize PinA4 with Button5
const int BUTTON6 = A5;  //Initialize PinA5 with Button6
const int BUTTON7 =  0;  //Initialize PinD0 with Button7

const int LED1 = 1;  //Initialize pin D1 for LED1
const int LED2 = 2;  //Initialize pin D2 for LED2
const int LED3 = 3;  //Initialize pin D3 for LED3
const int LED4 = 4;  //Initialize pin D4 for LED4
const int LED5 = 5;  //Initialize pin D5 for LED5
const int LED6 = 6;  //Initialize pin D6 for LED6
const int LED7 = 7;  //Initialize pin D7 for LED7

int BUTTONstate1 = 0; // To read the button1 state
int BUTTONstate2 = 0; // To read the button2 state
int BUTTONstate3 = 0; // To read the button3 state
int BUTTONstate4 = 0; // To read the button4 state
int BUTTONstate5 = 0; // To read the button5 state
int BUTTONstate6 = 0; // To read the button6 state
int BUTTONstate7 = 0; // To read the button7 state

#include <MAX7219DotMatrix.h>
//----------------------------
#define DIN     10
#define CS      11
#define CLK     13
MAX7219DotMatrix disp(DIN, CS, CLK);

void setup()
{
  disp.Init(15); //set brightness level 1 (1-->15)
  //disp.Clear(); delay(1000);
  
  pinMode(BUTTON1, INPUT);  //Define Button1 as input pin
  pinMode(BUTTON2, INPUT);  //Define Button2 as input pin
  pinMode(BUTTON3, INPUT);  //Define Button3 as input pin
  pinMode(BUTTON4, INPUT);  //Define Button4 as input pin
  pinMode(BUTTON5, INPUT);  //Define Button5 as input pin
  pinMode(BUTTON6, INPUT);  //Define Button6 as input pin
  pinMode(BUTTON7, INPUT);  //Define Button7 as input pin
  
  pinMode(LED1, OUTPUT);  //Define LED1 as output pin
  pinMode(LED2, OUTPUT);  //Define LED2 as output pin
  pinMode(LED3, OUTPUT);  //Define LED3 as output pin
  pinMode(LED4, OUTPUT);  //Define LED4 as output pin
  pinMode(LED5, OUTPUT);  //Define LED5 as output pin
  pinMode(LED6, OUTPUT);  //Define LED6 as output pin
  pinMode(LED7, OUTPUT);  //Define LED7 as output pin
}

void loop()
{
  BUTTONstate1 = digitalRead(BUTTON1);  //Membaca status BUTTON1
  if (BUTTONstate1 == LOW)
  {
    digitalWrite(LED1, HIGH);   // Hidupkan LED1, kemudian tampilkan huruf N di Matrix 8x8
    disp.Letter('N');
  } 
  else{
    digitalWrite(LED1, LOW);    // Jika Button1 tidak dipencet, tidak ada tampilan di Matrix 8x8
  }
  BUTTONstate2 = digitalRead(BUTTON2);  //Membaca status BUTTON2
  if (BUTTONstate2 == LOW)
  {
    digitalWrite(LED2, HIGH);   // Hidupkan LED2, kemudian tampilkan angka "1" di Matrix 8x8
    disp.Number(1);
  } 
  else{
    digitalWrite(LED2, LOW);    // Turn LED2 ON
  }
  BUTTONstate3 = digitalRead(BUTTON3);  //Membaca status BUTTON3
  if (BUTTONstate3 == LOW)
  {
    digitalWrite(LED3, HIGH);  //Hidupkan LED3, kemudian tampilkan angka "2" di Matrix 8x8
    disp.Number(2);
  } 
  else{
    digitalWrite(LED3, LOW);   // Jika Button3 tidak dipencet, tidak ada tampilan di Matrix 8x8
  }
  
  BUTTONstate4 = digitalRead(BUTTON4); //Membaca status BUTTON4
  if (BUTTONstate4 == LOW)
  {
    digitalWrite(LED4, HIGH);  //Hidupkan LED4, kemudian tampilkan angka "3" di Matrix 8x8
    disp.Number(3);
  } 
  else{
    digitalWrite(LED4, LOW);// // //Membaca status BUTTON4
  }
  BUTTONstate5 = digitalRead(BUTTON5); //Membaca status BUTTON5
  if (BUTTONstate5 == LOW)
  {
    digitalWrite(LED5, HIGH); //Hidupkan LED5, kemudian tampilkan angka "4" di Matrix 8x8
    disp.Number(4);
  } 
  else{
    digitalWrite(LED5, LOW); //Jika Button5 tidak dipencet, tidak ada tampilan di Matrix 8x8
  }
  BUTTONstate6 = digitalRead(BUTTON6);  //Membaca status BUTTON6
  if (BUTTONstate6 == LOW)
  {
    digitalWrite(LED6, HIGH);  //Hidupkan LED5, kemudian tampilkan angka "5" di Matrix 8x8
    disp.Number(5);
  } 
  else{
    digitalWrite(LED6, LOW);  // Jika Button7 tidak dipencet, tidak ada tampilan di Matrix 8x8
 }
  BUTTONstate7 = digitalRead(BUTTON7); //Membaca status BUTTON7
  if (BUTTONstate7 == LOW)
  {
    digitalWrite(LED7, HIGH);  //Hidupkan LED7, kemudian tampilkan huruf "R" di Matrix 8x8
    disp.Letter('R');
  } 
  else{
    digitalWrite(LED7, LOW);  // Jika Button7 tidak dipencet, tidak ada tampilan di Matrix 8x8
    disp.Clear();   
  }
}

//EoF ; Rudik Wid / 7-1-24
