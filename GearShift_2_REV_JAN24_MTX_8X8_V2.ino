/*
CAR GEAR INDICATOR V3 MAX7219 TO 8X8 MATRIX DISPLAY
BY RUDIK WID, NGOPREK DI RUMAH YT YOUTUBE CHANNEL
MADE 6 JAN 2024
*/

#include <MAX7219DotMatrix.h>
#define DIN     10
#define CS      11
#define CLK     13
MAX7219DotMatrix disp(DIN, CS, CLK);

void setup() {
disp.Init(15); //set brightness level 1 (1-->15)
disp.Clear(); delay(1000);

pinMode(2, INPUT); // NETRAL,
pinMode(3, INPUT); // 1st gear, 
pinMode(4, INPUT); // 2nd gear,
pinMode(5, INPUT); // 3rd gear, 
pinMode(6, INPUT); // 4rd gear, 
pinMode(7, INPUT); // 5rd gear, 
pinMode(8, INPUT); // REVERSE,

digitalWrite(2, HIGH); // pull-up the internal resistor
digitalWrite(3, HIGH); // pull-up the internal resistor
digitalWrite(4, HIGH); // pull-up the internal resistor
digitalWrite(5, HIGH); // pull-up the internal resistor
digitalWrite(6, HIGH); // pull-up the internal resistor
digitalWrite(7, HIGH); // pull-up the internal resistor
digitalWrite(8, HIGH); // pull-up the internal resistor
}


void loop() {
                                                          
if (digitalRead(2) == LOW) disp.Letter('N');  // NETRAL
else
if (digitalRead(3) == LOW) disp.Number(1);  // 1st gear
else
if (digitalRead(4) == LOW) disp.Number(2);  // 2nd gear
else
if (digitalRead(5) == LOW) disp.Number(3);  // 3rd gear
else
if (digitalRead(6) == LOW) disp.Number(4);  // 4rd gear
else
if (digitalRead(7) == LOW) disp.Number(5);  // 5rd gear
else
if (digitalRead(8) == LOW) disp.Letter('R');  // REVERSE
else
if (digitalRead(8) == LOW)
 {
 }
}

//EOF 06JAN24
