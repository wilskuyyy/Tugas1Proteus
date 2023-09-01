const int led =13;
const int button = 2; 
int sttb = LOW;
bool ledNyala = false; 

void setup() 
{
  pinMode(led, OUTPUT);
  pinMode(button, INPUT_PULLUP);
  
}

void loop() 
{
if (digitalRead(button) == LOW){
delay(50);
if (digitalRead(button) == LOW){
  ledNyala = !ledNyala;
      digitalWrite(led, ledNyala ? HIGH : LOW);
      while (digitalRead(button) == LOW);
  }
}
}