//sensores infravermelho laterais
int valorE()
{
  leitura = analogRead(Esquerda);
  return leitura;
}
int valorD()
{
  leitura = analogRead(Direita);
  return leitura;
}
//Sensores infravermelho centrais
int valorEM()
{
  leitura = analogRead(meio_esquerda);
  return leitura;
}
int valorDM()
{
  leitura = analogRead(meio_direita);
  return leitura;
}
//Sensores de ultrassom
long dis_frente()
{

  //seta o pino 12 com um pulso baixo "LOW" ou desligado ou ainda 0
  digitalWrite(trigPin_frente, LOW);
  //delay de 2 microssegundos
  delayMicroseconds(2);
  //seta o pino 12 com pulso alto "HIGH" ou ligado ou ainda 1
  digitalWrite(trigPin_frente, HIGH);
  //delay de 10 microssegundos
  delayMicroseconds(10);
  //seta o pino 12 com um pulso baixo novamente
  digitalWrite(trigPin_frente, LOW);
  //pulseInt lê o tempo entre a chamada e o pino entrar em high
  long duration = pulseIn(echoPin_frente, HIGH);
  //Esse calculo é baseado em s = v. t, lembrando quye o tempo vem dobrado
  //porque é o tempo de ida e volta do ultrassom
  long distancia = duration / 29 / 2;
  //Serial.print("Distancia em CM: ");
  //Serial.println(distancia);
  return distancia;
}
long dis_lado()
{

  //seta o pino 12 com um pulso baixo "LOW" ou desligado ou ainda 0
  digitalWrite(trigPin_lado, LOW);
  //delay de 2 microssegundos
  delayMicroseconds(2);
  //seta o pino 12 com pulso alto "HIGH" ou ligado ou ainda 1
  digitalWrite(trigPin_lado, HIGH);
  //delay de 10 microssegundos
  delayMicroseconds(10);
  //seta o pino 12 com um pulso baixo novamente
  digitalWrite(trigPin_lado, LOW);
  //pulseInt lê o tempo entre a chamada e o pino entrar em high
  long duration = pulseIn(echoPin_lado, HIGH);
  //Esse calculo é baseado em s = v. t, lembrando quye o tempo vem dobrado
  //porque é o tempo de ida e volta do ultrassom
  long distancia = duration / 29 / 2;
  //Serial.print("Distancia em CM: ");
  //Serial.println(distancia);
  return distancia;
}

void D_color()
{
  //Rotina que le o valor das cores
  digitalWrite(D_s2, LOW);
  digitalWrite(D_s3, LOW);
  //count OUT, pRed, RED
  D_red = pulseIn(D_out, digitalRead(D_out) == HIGH ? LOW : HIGH);
  digitalWrite(D_s3, HIGH);
  //count OUT, pBLUE, BLUE
  D_blue = pulseIn(D_out, digitalRead(D_out) == HIGH ? LOW : HIGH);
  digitalWrite(D_s2, HIGH);
  //count OUT, pGreen, GREEN
  D_green = pulseIn(D_out, digitalRead(D_out) == HIGH ? LOW : HIGH);

  D_SENSOR_R = map(D_red, 0, 1023, 0, 255);
  D_SENSOR_G = map(D_green, 0, 1023, 0, 255);
  D_SENSOR_B = map(D_blue, 0, 1023, 0, 255);
}

void E_color()
{
  //Rotina que le o valor das cores
  digitalWrite(E_s2, LOW);
  digitalWrite(E_s3, LOW);
  //count OUT, pRed, RED
  E_red = pulseIn(E_out, digitalRead(E_out) == HIGH ? LOW : HIGH);
  digitalWrite(E_s3, HIGH);
  //count OUT, pBLUE, BLUE
  E_blue = pulseIn(E_out, digitalRead(E_out) == HIGH ? LOW : HIGH);
  digitalWrite(E_s2, HIGH);
  //count OUT, pGreen, GREEN
  E_green = pulseIn(E_out, digitalRead(E_out) == HIGH ? LOW : HIGH);

  E_SENSOR_R = map(E_red, 0, 1023, 0, 255);
  E_SENSOR_G = map(E_green, 0, 1023, 0, 255);
  E_SENSOR_B = map(E_blue, 0, 1023, 0, 255);
}

void mostra()
{
  Serial.print("Esquerda: ");
  Serial.print(analogRead(Esquerda));
  Serial.print('\t');
  Serial.print("Esquerda do meio: ");
  Serial.print(analogRead(meio_esquerda));
  Serial.print('\t');
  Serial.print("Direita do meio: ");
  Serial.print(analogRead(meio_direita));
  Serial.print('\t');
  Serial.print("Direita: ");
  Serial.print(analogRead(Direita));
  Serial.print('\t');
  Serial.print("Distancia em CM: ");
  Serial.println(dis_frente());
  Serial.println("-----------------------------------------------------------------------------------------------------");
  delay(800);
}
