int seconds;
int minutes;
int hours;

void setup() {
  seconds = 0;
  minutes = 0;
  hours = 0;
  Serial.begin(9600);
}

void loop() {
  Serial.println(hours + ":" + minutes + ":" + seconds);
  delay(1000);
  seconds++;
  if (seconds == 60){
    minutes++;
    seconds = 0;
  }
    if (minutes == 60)
    {
      hours++;
      minutes = 0;
    }
    if (hours == 24)
    {
      hours = 0;
    }
}
