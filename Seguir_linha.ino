void seguir_linha()
{
  int velocidade = 90;
  int velocidade_F = 90;
  frente(velocidade_F, velocidade_F);
  delay(50);
  parar();
  delay(50);
  if (valorDM() < pretoM && valorEM() < pretoM && valorE() < preto && valorD() < preto)
  {
    Serial.println("FRENTE 1");
    frente(velocidade_F, velocidade_F);
    delay(50);
  }
  if ((valorDM() >= pretoM || valorEM() >= pretoM) && valorE() < preto && valorD() < preto)
  {
    Serial.println("FRENTE 2");
    frente(velocidade_F, velocidade_F);
    delay(50);
  }
  if (valorE() >= preto && valorD() < preto)
  {
    while (valorEM() < pretoM && valorDM() < pretoM && valorD() < preto)
    {
      Serial.println("ESQUERDA");
      viraEsquerda(velocidade, velocidade);
    }
    while (valorDM() >= pretoM && valorEM() >= pretoM)
    {
      Serial.println("FRENTE 3");
      D_color();
      E_color();
      if (D_SENSOR_R >= 14 && D_SENSOR_R <= 30 && D_SENSOR_G >= 13 && D_SENSOR_G <= 25 && D_SENSOR_B >= 12 && D_SENSOR_B <= 26)
      {
        Serial.println("VERDE D");
        volta(velocidade_F, velocidade_F);
        delay(100);
        viraDireita(110, 110);
        delay(3000);
      }
      else if (E_SENSOR_R >= 13 && E_SENSOR_R <= 30 && E_SENSOR_G >= 14 && E_SENSOR_G <= 26 && E_SENSOR_B >= 12 && E_SENSOR_B <= 27)
      {
        Serial.println("VERDE E");
        volta(velocidade_F, velocidade_F);
        delay(100);
        viraEsquerda(110, 110);
        delay(3000);
      }
      else
      {
        frente(80, 80);
        delay(1);
      }
    }
  }
  if (valorE() < preto && valorD() >= preto)
  {
    while (valorDM() < pretoM && valorEM() < pretoM && valorE() < preto)
    {
      Serial.println("DIREITA");
      viraDireita(velocidade, velocidade);
    }
    while (valorDM() >= pretoM && valorEM() >= pretoM)
    {
      Serial.println("FRENTE 4");
      D_color();
      E_color();
      if (D_SENSOR_R >= 14 && D_SENSOR_R <= 30 && D_SENSOR_G >= 13 && D_SENSOR_G <= 25 && D_SENSOR_B >= 12 && D_SENSOR_B <= 26)
      {
        Serial.println("VERDE D");
        volta(velocidade_F, velocidade_F);
        delay(100);
        viraDireita(110, 110);
        delay(3000);
      }
      else if (E_SENSOR_R >= 13 && E_SENSOR_R <= 30 && E_SENSOR_G >= 14 && E_SENSOR_G <= 26 && E_SENSOR_B >= 12 && E_SENSOR_B <= 27)
      {
        Serial.println("VERDE E");
        volta(velocidade_F, velocidade_F);
        delay(100);
        viraEsquerda(110, 110);
        delay(3000);
      }
      else
      {
        frente(80, 80);
        delay(1);
      }
    }
  }
}
