// C++ code
//
// Función que se realiza ao iniciar o Arduino
void setup()
{
  // Configura o pin 13 como pin de saída
  pinMode(LED_BUILTIN, OUTPUT);
  // Configura o pin 12 como pin de saída
  pinMode(12, OUTPUT);
  // Configura o pin 11 como pin de saída
  pinMode(11, OUTPUT);
}

// Función que se repite unha e outra vez mentres
// suministremos electricidade ao Arduino
void loop()
{
  // Asocia un valor ALTO ao pin 13
  digitalWrite(LED_BUILTIN, HIGH);
  // Establecemos una demora de 10000 milisegundos (10s)
  // antes de seguir coa seguinte instrucción
  delay(10000);
  // Asocia un valor BAIXO ao pin 13
  digitalWrite(LED_BUILTIN, LOW);
  // Establecemos una demora de 4000 milisegundos (4s)
  // antes de seguir coa seguinte instrucción
  delay(4000);
  // Asocia un valor ALTO ao pin 12
  digitalWrite(12, HIGH);
  // Asocia un valor ALTO ao pin 11
  digitalWrite(11, HIGH);
  // Establecemos una demora de 10000 milisegundos (10s)
  // antes de seguir coa seguinte instrucción
  delay(10000);
  // Asocia un valor BAIXO ao pin 12
  digitalWrite(12, LOW);
  // Asocia un valor BAIXO ao pin 11
  digitalWrite(11, LOW);
  // Establecemos una demora de 4000 milisegundos (4s)
  // antes de seguir coa seguinte instrucción
  delay(4000);
}
