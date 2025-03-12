void setup() {
    // Definir os pinos dos motores como saída
    pinMode(12, OUTPUT); // Motor 1
    pinMode(11, OUTPUT); // Motor 2
    pinMode(10, OUTPUT); // Motor 3
    pinMode(9, OUTPUT);  // Motor 4
    pinMode(8, OUTPUT);  // Motor 5
    pinMode(7, OUTPUT);  // LED (pino 7)
  }
  
  void loop() {
    // 1. Ligar o Motor 12
    digitalWrite(12, HIGH); // Motor 12 ligado
    delay(1000);             // Espera 1 segundo
    digitalWrite(12, LOW);  // Motor 12 desligado
    delay(1000);             // Espera 1 segundo
    
    // 2. Ligar os Motores 8, 9 e 10 ao
    mesmo tempo
    digitalWrite(8, HIGH);  // Motor 8 ligado
    digitalWrite(9, HIGH);  // Motor 9 ligado
    digitalWrite(10, HIGH); // Motor 10 ligado
    delay(2000);            // Espera 2 segundos
    digitalWrite(8, LOW);   // Motor 8 desligado
    digitalWrite(9, LOW);   // Motor 9 desligado
    digitalWrite(10, LOW);  // Motor 10 desligado
    delay(1000);            // Espera 1 segundo
  
    // 3. Ligar o LED (pino 7)
    digitalWrite(7, HIGH);  // LED ligado
    delay(1000);            // Espera 1 segundo
    digitalWrite(7, LOW);   // LED desligado
    delay(1000);            // Espera 1 segundo
    
    // 4. Ligar os Motores 8, 9 e 10 novamente
    digitalWrite(8, HIGH);  // Motor 8 ligado
    digitalWrite(9, HIGH);  // Motor 9 ligado
    digitalWrite(10, HIGH); // Motor 10 ligado
    delay(2000);            // Espera 2 segundos
    digitalWrite(8, LOW);   // Motor 8 desligado
    digitalWrite(9, LOW);   // Motor 9 desligado
    digitalWrite(10, LOW);  // Motor 10 desligado
    delay(1000);            // Espera 1 segundo
    
    // 5. Ligar o Motor 11
    digitalWrite(11, HIGH); // Motor 11 ligado
    delay(1000);            // Espera 1 segundo
    digitalWrite(11, LOW);  // Motor 11 desligado
    delay(1000);            // Espera 1 segundo
    
    // 6. Ligar os Motores 8, 9 e 10 novamente
    digitalWrite(8, HIGH);  // Motor 8 ligado
    digitalWrite(9, HIGH);  // Motor 9 ligado
    digitalWrite(10, HIGH); // Motor 10 ligado
    delay(2000);            // Espera 2 segundos
    digitalWrite(8, LOW);   // Motor 8 desligado
    digitalWrite(9, LOW);   // Motor 9 desligado
    digitalWrite(10, LOW);  // Motor 10 desligado
    delay(1000);            // Espera 1 segundo
  }
  
  