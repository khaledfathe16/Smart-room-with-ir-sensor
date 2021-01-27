
int Ir_sensor=7,Relay=9,counter =0,x,x2;

void setup() {
  pinMode(Ir_sensor,INPUT); //SENSOR DECLERATION
  pinMode(Relay,OUTPUT);//SENSOR DECLERATION

  
}

void loop() {

  x = digitalRead(Ir_sensor); //The input read of ir sensor

if(x2!=x){ 
 if(x2==0){
   counter++;
  }
  }
if(counter%2==0){
  digitalWrite(Relay,1);
  }else{digitalWrite(Relay,0);}
 
  x2=x;
}
