#include <stdio.h>

   int mus = 7;
    int doh = 262;
    int mi = 330;
    int sol = 392;
    int si = 439;
    int var;
    int poten = A5;
    int tempo = 200;



void setup() {
  // put your setup code here, to run once:
    pinMode(mus, OUTPUT);
    pinMode(poten, INPUT);
    Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:
    var = analogRead(poten);
    Serial.println(var);
    if(var<250){
      tone(mus, doh, tempo);
  }
    else if (var> 250 && var<500){
      tone(mus, mi, tempo);
    }
  
      else if (var>=500 && var<750){
        tone(mus, sol, tempo);
      }

      else if (var>=750){
        tone(mus, si, tempo);
      }

    delay(tempo);

}
