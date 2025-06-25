void setup() {
  Serial.begin(9600);
  randomSeed(analogRead(A0));
}

void loop() {
  float temperatura = random(200, 350) / 10.0;
  float umidade = random(300, 900) / 10.0;

  String mensagem = "Status Atual -> Temperatura: ";
  mensagem += temperatura;
  mensagem += " °C | Umidade: ";
  mensagem += umidade;
  mensagem += " %";

  Serial.println(mensagem);
  delay(1000);
}
