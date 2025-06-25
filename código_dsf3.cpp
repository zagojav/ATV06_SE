int numeroSecreto;
String entradaUsuario = "";

void setup() {
  Serial.begin(9600);
  randomSeed(analogRead(A0));
  numeroSecreto = random(1, 101);
  Serial.println("Tente adivinhar o número entre 1 e 100:");
}

void loop() {
  if (Serial.available()) {
    entradaUsuario = Serial.readStringUntil('\n');
    int palpite = entradaUsuario.toInt();

    if (palpite < numeroSecreto) {
      Serial.println("Maior");
    } else if (palpite > numeroSecreto) {
      Serial.println("Menor");
    } else {
      Serial.println("Acertou!");
      numeroSecreto = random(1, 101);
      Serial.println("Novo número gerado. Tente adivinhar:");
    }
  }
}
