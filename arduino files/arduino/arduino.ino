const int trigPin = 2;    
const int echoPin = 3;    
const int distanceThreshold = 10;

void setup() {
  Serial.begin(9600);     
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
}

void loop() {
  long duration;
  long distance;
  
 
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);
  
  
  duration = pulseIn(echoPin, HIGH);
  distance = duration * 0.034 / 2;
  
  
  if (distance < distanceThreshold) {
    Serial.println(1); 
  } else {
    Serial.println(0); 
  }
  
  delay(100);
}
