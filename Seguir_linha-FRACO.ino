void Seguir_linha_BOSTA()
{
  while (valorD() >= preto)
  {
    Serial.println("viraEsquerda");
    viraDireita(45, 45);
  }
  if (valorE() >= preto)
  {
    Serial.println("viraDireita");
    viraEsquerda(45, 45);
  }
}
