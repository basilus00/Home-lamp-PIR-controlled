const int SENSOR_PIN = 4;
const int RELAY_PIN = 2;

void setup() {
  Serial.begin(9600);
   Serial.println("HOME PIR Project");
  pinMode(SENSOR_PIN, INPUT);
  pinMode(RELAY_PIN, OUTPUT);
}

void loop() {
  int motion =digitalRead(SENSOR_PIN);// read the sensor pin and stores it in "motion" variable
  // if motion is detected
  if(motion){
    Serial.println("Motion detected");
    digitalWrite(RELAY_PIN, HIGH);// Turn the relay ON
    delay(30000);//set the delay as you want I choosed this based on my preference
  }else{
     Serial.println("nothing moves");
     digitalWrite(RELAY_PIN,LOW);// Turn the relay OFF
  }
  delay(10);
  
}
