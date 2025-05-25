const int sensorPatio = 2;
const int sensorManutencao = 3;
const int sensorSemOperacao = 4;

const int redPin = 9;
const int greenPin = 10;
const int bluePin = 11;

void setup() {
  pinMode(sensorPatio, INPUT);
  pinMode(sensorManutencao, INPUT);
  pinMode(sensorSemOperacao, INPUT);

  pinMode(redPin, OUTPUT);
  pinMode(greenPin, OUTPUT);
  pinMode(bluePin, OUTPUT);

  setColor(0, 0, 255);
}

void loop() {
  bool estaNoPatio = digitalRead(sensorPatio) == HIGH;
  bool estaEmManutencao = digitalRead(sensorManutencao) == HIGH;
  bool estaSemOperacao = digitalRead(sensorSemOperacao) == HIGH;

  if (estaNoPatio) {
    setColor(0, 255, 0);
  } else if (estaEmManutencao) {
    setColor(255, 255, 0);
  } else if (estaSemOperacao) {
    setColor(255, 0, 0);
  } else {
    setColor(0, 0, 255);
  }

  delay(200); 
}

void setColor(int red, int green, int blue) {
  analogWrite(redPin, red);
  analogWrite(greenPin, green);
  analogWrite(bluePin, blue);
}

