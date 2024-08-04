char buff [50];
volatile byte indx;

void setup() {
  Serial.begin(9600);

}

void loop() {
  if (Serial.available() > 0) {
    byte c = Serial.read();
    if (indx < sizeof buff) {
      buff [indx++] = c; // save data in the next index in the array buff
      if (c == '\r') { //check for the end of the word
        Serial.println(buff);
        delay(1000);
        }
    }
  }
}
