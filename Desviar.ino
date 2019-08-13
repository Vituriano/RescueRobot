void Desviar()
{
  parar();
  delay(1000);
  volta(50, 50);
  delay(100);
  viraEsquerda(100, 100);
  delay(450);
  parar();
  delay(1000);
  while (valorDM() < preto && valorEM() < preto && valorE() < preto && valorD() < preto)
  {
    frente(45, 65);
    delay(500);
    frente(30, 75);
    delay(1500);
  }
  if (valorDM() >= preto || valorEM() >= preto || valorE() >= preto || valorD() >= preto)
  {
    viraEsquerda(100, 85);
    delay(100);
  }
}
