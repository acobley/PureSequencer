
const byte gate1 = A0;
const byte gate2 = A1;
const byte gate3 = A2;
const byte gate4 = A3;
const byte gate5 = A4;
const byte gate6 = A5;
const byte gate7 = 8;
const byte gate8 = 9;

const byte gates[]={A0,A1,A2,A3,A4,A5,8,9};
 byte States[]={false,false,false,false,false,false,false,false};

void setup() {
  for (int i=0;i<8;i++){
    
    pinMode(gates[i], OUTPUT);
  }


}

bool State=false;
bool State8=false;
void loop() {
  // put your main code here, to run repeatedly:
  
  for (int i=0;i<8;i++){
    States[i]=!States[i];
     digitalWrite(gates[i],States[i]);
     States[i]=!States[i];
     delay(200);
     digitalWrite(gates[i],States[i]);
     delay(200);
      
  }
  
}
