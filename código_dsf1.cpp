
const float raio = 50.0;

float angulo = 0.0;

const int intervalo = 100;

void setup() {
  Serial.begin(9600);

  randomSeed(analogRead(A0));
}

void loop() {
  float x = raio * cos(angulo);
  float y = raio * sin(angulo);

  Serial.print("X: ");
  Serial.print(x);
  Serial.print(" | Y: ");
  Serial.println(y);

  angulo += 0.1;

  delay(intervalo);
}
