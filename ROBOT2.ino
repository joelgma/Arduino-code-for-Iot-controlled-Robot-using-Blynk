#define BLYNK_TEMPLATE_ID "TMPLB1dfP9dr"
#define BLYNK_TEMPLATE_NAME "ROBOT 2"
#define BLYNK_AUTH_TOKEN "svsuqB9ZDlWa5Ik91JM1Bw10RdQmvHE6"


#include <WiFi.h>
#include <WiFiClient.h>
#include <BlynkSimpleEsp32.h>

int Rot1F = 13;
int Rot1R = 12;
int Rot2F = 14;
int Rot2R = 27;
int WheelF = 26;
int WheelR = 25;
int Right = 33;
int Left = 32;
int HeadR = 35;
int HeadL = 34;
int Hand1F = 23;
int Hand1R = 22;
int Hand2F = 21;
int Hand2R = 19;
int Grip1F = 18; 
int Grip1R = 5;
int Grip2F = 4;
int Grip2R = 2;
char auth[] = "svsuqB9ZDlWa5Ik91JM1Bw10RdQmvHE6";
char ssid[] = "RedmiNote9ProMax";
char pass[] = "Joelg12345@J";



void setup() {
  pinMode(Rot1F, OUTPUT);
  pinMode(Rot1R, OUTPUT);
  pinMode(Rot2F, OUTPUT);
  pinMode(Rot2R, OUTPUT);
  pinMode(WheelF, OUTPUT);
  pinMode(WheelR, OUTPUT);
  pinMode(Right, OUTPUT);
  pinMode(Left, OUTPUT);
  pinMode(HeadR, OUTPUT);
  pinMode(HeadL, OUTPUT);
  pinMode(Hand1F, OUTPUT);
  pinMode(Hand1R, OUTPUT);

  pinMode(Hand2F, OUTPUT);
  pinMode(Hand2R, OUTPUT);

  pinMode(Grip1F, OUTPUT);
  pinMode(Grip1R, OUTPUT);

  pinMode(Grip2F, OUTPUT);
  pinMode(Grip2R, OUTPUT);
 
  Serial.begin(9600);
  Blynk.begin(auth, ssid, pass);
  

}

void loop() {
  Blynk.run();
 
}

BLYNK_WRITE(V1) {
 int pinValue1 = param.asInt();
  // set motor direction based on value from Blynk app
  if (pinValue1 == 0) {
    digitalWrite(Rot1F, HIGH);
    digitalWrite(Rot1R, LOW);
  }
  else if (pinValue1 == 255) {
    digitalWrite(Rot1F, LOW);
    digitalWrite(Rot1R, HIGH);
  }

  else  {
    digitalWrite(Rot1F, LOW);
    digitalWrite(Rot1R, LOW);
  }


}


BLYNK_WRITE(V2) {
 int pinValue1 = param.asInt();
  // set motor direction based on value from Blynk app
  if (pinValue1 == 0) {
    digitalWrite(Rot2F, HIGH);
    digitalWrite(Rot2R, LOW);
  }
  else if (pinValue1 == 255) {
    digitalWrite(Rot2F, LOW);
    digitalWrite(Rot2R, HIGH);
  }

  else  {
    digitalWrite(Rot2F, LOW);
    digitalWrite(Rot2R, LOW);
  }


}




BLYNK_WRITE(V3) {
 int pinValue1 = param.asInt();
  // set motor direction based on value from Blynk app
  if (pinValue1 == 0) {
    digitalWrite(WheelF, LOW);
    digitalWrite(WheelR, HIGH);
    digitalWrite(Right, LOW);
    digitalWrite(Left, HIGH);
    
  }
  else if (pinValue1 == 255) {
    digitalWrite(WheelF, HIGH);
    digitalWrite(WheelR, LOW);
    digitalWrite(Right, HIGH);
    digitalWrite(Left, LOW);
  }

  else  {
    digitalWrite(WheelF, LOW);
    digitalWrite(WheelR, LOW);
    digitalWrite(Right, LOW);
    digitalWrite(Left, LOW);
  }


}




BLYNK_WRITE(V4) {
 int pinValue1 = param.asInt();
  // set motor direction based on value from Blynk app
  if (pinValue1 == 0) {
    digitalWrite(WheelF, LOW);
    digitalWrite(WheelR, HIGH);
    digitalWrite(Right, HIGH);
    digitalWrite(Left, LOW);
  }
  else if (pinValue1 == 255) {
    digitalWrite(WheelF, HIGH);
    digitalWrite(WheelR, LOW);
    digitalWrite(Right, LOW);
    digitalWrite(Left, HIGH);
  }

  else  {
    digitalWrite(WheelF, LOW);
    digitalWrite(WheelR, LOW);
    digitalWrite(Right, LOW);
    digitalWrite(Left, LOW);
  }


}




BLYNK_WRITE(V5) {
 int pinValue1 = param.asInt();
  // set motor direction based on value from Blynk app
  if (pinValue1 == 0) {
    digitalWrite(HeadR, HIGH);
    digitalWrite(HeadL, LOW);
  }
  else if (pinValue1 == 255) {
    digitalWrite(HeadR, LOW);
    digitalWrite(HeadL, HIGH);
  }

  else  {
    digitalWrite(HeadR, LOW);
    digitalWrite(HeadL, LOW);
  }


}

BLYNK_WRITE(V6) {
 int pinValue1 = param.asInt();
  // set motor direction based on value from Blynk app
  if (pinValue1 == 0) {
    digitalWrite(Hand1F, HIGH);
    digitalWrite(Hand1R, LOW);
  }
  else if (pinValue1 == 255) {
    digitalWrite(Hand1F, LOW);
    digitalWrite(Hand1R, HIGH);
  }

  else  {
    digitalWrite(Hand1F, LOW);
    digitalWrite(Hand1R, LOW);
  }


}




BLYNK_WRITE(V7) {
 int pinValue1 = param.asInt();
  // set motor direction based on value from Blynk app
  if (pinValue1 == 0) {
    digitalWrite(Hand2F, HIGH);
    digitalWrite(Hand2R, LOW);
  }
  else if (pinValue1 == 255) {
    digitalWrite(Hand2F, LOW);
    digitalWrite(Hand2R, HIGH);
  }

  else {
    digitalWrite(Hand2F, LOW);
    digitalWrite(Hand2R, LOW);
  }


}





BLYNK_WRITE(V8) {
 int pinValue1 = param.asInt();
  // set motor direction based on value from Blynk app
  if (pinValue1 == 0) {
    digitalWrite(Grip1F, HIGH);
    digitalWrite(Grip1R, LOW);
  }
  else if (pinValue1 == 255) {
    digitalWrite(Grip1F, LOW);
    digitalWrite(Grip1R, HIGH);
  }

  else{
    digitalWrite(Grip1F, LOW);
    digitalWrite(Grip1R, LOW);
  }


}




BLYNK_WRITE(V9) {
 int pinValue1 = param.asInt();
  // set motor direction based on value from Blynk app
  if (pinValue1 == 0) {
    digitalWrite(Grip2F, HIGH);
    digitalWrite(Grip2R, LOW);
  }
  else if (pinValue1 == 255) {
    digitalWrite(Grip2F, LOW);
    digitalWrite(Grip2R, HIGH); 
  }

  else{
    digitalWrite(Grip2F, LOW);
    digitalWrite(Grip2R, LOW);
  }


}
