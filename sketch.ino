int LED = 2;  // init variable for LED to correspond with Digital Port 2

void setup() {  // the setup routine runs once when you press reset:
  pinMode(LED, OUTPUT);  // initialize digital pin LED_BUILTIN as an output.
  Serial.begin(9600);  // init serial communication at 9600 bits per second
}

void loop() {  // the loop routine runs over and over again forever:
  int knobValue = analogRead(A0);  // read the inputs on analog pin 0:
  Serial.println(knobValue);  // print out the value you read
  if (knobValue >= 400) digitalWrite(LED, HIGH);  // turn on led if knob value is over 400
  else digitalWrite(LED, LOW);  // turn off led if knob value is under 400
}
