int datafromUser=0;
const int ledPin1 =  13;      // the number of the LED pin
const int ledPin2 = 12;
void setup() {
  // put your setup code here, to run once:
  pinMode( ledPin1 , OUTPUT );
  pinMode( ledPin2 , OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  if(Serial.available() > 0)
  {
    datafromUser=Serial.read();
  }

  if(datafromUser == '1')
  {
    digitalWrite( ledPin1 , HIGH );
    digitalWrite( ledPin2 , LOW);
    
  }
  else 
  {
    digitalWrite( ledPin1, LOW);
    digitalWrite( ledPin2, HIGH);
    
  }
  
}
