void sala3Base1() {

  Desce_a_Garra();
  Abre_a_Garra();
  while (dis_frente() > 8) { //arruma esse valor

    distance = irSensor.getDistanceCentimeter();
    delay(15);
    distance2 = irSensor.getDistanceCentimeter();
    while (distance != distance2) {
      distance = irSensor.getDistanceCentimeter();
      delay(15);
      distance2 = irSensor.getDistanceCentimeter();
    }
    if (distance == distance2) {
      if (distance < 60) {
        Serial.println("PARADO");
        parar();
        delay(1000);
        distance = irSensor.getDistanceCentimeter();
        delay(15);
        distance2 = irSensor.getDistanceCentimeter();
        while (distance != distance2) {
          distance = irSensor.getDistanceCentimeter();
          delay(15);
          distance2 = irSensor.getDistanceCentimeter();
        }
        if (distance == distance2) {
          if (distance < 60) {
            Serial.println("BOLINHA");
            parar();
            delay(1000);
            viraEsquerda(65, 65);
            delay(950);
            parar();
            delay(1000);
            Abre_a_Garra();
            Desce_a_Garra();
            while (dis_frente() > 5) {

              frente(40, 40);

            }//quando for menor que 8 ele verifica de novo
            while (dis_frente() > 5) {

              frente(40, 40);

            }//FEZ PELA SEGUNDA VEZ AI CONTINUA O CODIGO PORQUE ELE VIU A PAREDE
            frente(40, 40);
            delay(1000);
            viraEsquerda(65, 65);
            delay(1);//Regular delay
            frente(40, 40);
            delay(500);
            while (dis_frente() > 5) {

              frente(40, 40);

            }//quando for menor que 8 ele verifica de novo
            while (dis_frente() > 5) {

              frente(40, 40);

            }//FEZ PELA SEGUNDA VEZ AI CONTINUA O CODIGO PORQUE ELE VIU A BASE
            frente(40, 40);
            delay(1000);//ele vai para frente por um delay de 1 segundo e
            //solta a bolinha na base;;;  (     base  resgate    )
            Desce_a_Garra();
            Abre_a_Garra();
            parar();
            delay(999999999);
          }
          if (distance > 60) {
            Serial.println("ALARME FALSO");
          }
        }
      }
    }
    frente(30, 25);
    delay(50);
  }
  Fecha_A_Garra();
  Sobe_A_Garra();
}//fim voltabase1
//inicio voltabase2:::


void sala3Base2() {
  Desce_a_Garra();
  Abre_a_Garra();
  while (dis_frente() > 8) { //arruma esse valor
  
    distance = irSensor.getDistanceCentimeter();
    delay(15);
    distance2 = irSensor.getDistanceCentimeter();
    while (distance != distance2) {
      distance = irSensor.getDistanceCentimeter();
      delay(15);
      distance2 = irSensor.getDistanceCentimeter();
    }
    if (distance == distance2) {
      if (distance < 60) {
        Serial.println("PARADO");
        parar();
        delay(1000);
        distance = irSensor.getDistanceCentimeter();
        delay(15);
        distance2 = irSensor.getDistanceCentimeter();
        while (distance != distance2) {
          distance = irSensor.getDistanceCentimeter();
          delay(15);
          distance2 = irSensor.getDistanceCentimeter();
        }
        if (distance == distance2) {
          if (distance < 60) {
            Serial.println("BOLINHA");
            parar();
            delay(1000);
            viraEsquerda(65, 65);
            delay(950);
            parar();
            delay(1000);
            while (dis_frente() > 5) {

              frente(40, 40);

            }//quando for menor que 8 ele verifica de novo
            while (dis_frente() > 5) {

              frente(40, 40);

            }//FEZ PELA SEGUNDA VEZ AI CONTINUA O CODIGO PORQUE ELE VIU A PAREDE
            frente(40, 40);
            delay(1000);
            Fecha_A_Garra();
            Sobe_A_Garra();
            viraDireita(65, 65);
            delay(1);//Regular delay
            frente(40, 40);
            delay(500);
            while (dis_frente() > 5) {

              frente(40, 40);

            }//quando for menor que 8 ele verifica de novo
            while (dis_frente() > 5) {

              frente(40, 40);

            }//FEZ PELA SEGUNDA VEZ AI CONTINUA O CODIGO PORQUE ELE VIU A BASE
            frente(40, 40);
            delay(1000);//ele vai para frente por um delay de 1 segundo e
            //solta a bolinha na base;;;  (     base  resgate    )
            Desce_a_Garra();
            Abre_a_Garra();
            parar();
            delay(999999999);
          }
          if (distance > 60) {
            Serial.println("ALARME FALSO");
          }
        }
      }
    }
    frente(30, 25);
    delay(50);
  }
  Fecha_A_Garra();
  Sobe_A_Garra();
}//fim volta base 2
//inicio voltabase3:::
void sala3Base3() {
  Desce_a_Garra();
  Abre_a_Garra();
  while (dis_frente() > 8) { //arruma esse valor
  }
  while (dis_frente() < 30) {
    distance = irSensor.getDistanceCentimeter();
    delay(15);
    distance2 = irSensor.getDistanceCentimeter();
    while (distance != distance2) {
      distance = irSensor.getDistanceCentimeter();
      delay(15);
      distance2 = irSensor.getDistanceCentimeter();
    }
    if (distance == distance2) {
      if (distance < 60) {
        Serial.println("PARADO");
        parar();
        delay(1000);
        distance = irSensor.getDistanceCentimeter();
        delay(15);
        distance2 = irSensor.getDistanceCentimeter();
        while (distance != distance2) {
          distance = irSensor.getDistanceCentimeter();
          delay(15);
          distance2 = irSensor.getDistanceCentimeter();
        }
        if (distance == distance2) {
          if (distance < 60) {
            Serial.println("BOLINHA");
            parar();
            delay(1000);
            viraEsquerda(65, 65);
            delay(950);
            parar();
            delay(1000);
            while (dis_frente() > 5) {

              frente(40, 40);

            }//quando for menor que 8 ele verifica de novo
            while (dis_frente() > 5) {

              frente(40, 40);

            }//FEZ PELA SEGUNDA VEZ AI CONTINUA O CODIGO PORQUE ELE VIU A PAREDE
            frente(40, 40);
            delay(1000);
            Fecha_A_Garra();
            Sobe_A_Garra();
            viraDireita(65, 65);
            delay(1);//Regular delay
            frente(40, 40);
            delay(5000);
            viraDireita(65, 65);
            delay(1);//Regular delay
            frente(40, 40);
            delay(500);
            while (dis_frente() > 5) {

              frente(40, 40);

            }//quando for menor que 8 ele verifica de novo
            while (dis_frente() > 5) {

              frente(40, 40);

            }//FEZ PELA SEGUNDA VEZ AI CONTINUA O CODIGO PORQUE ELE VIU A BASE
            frente(40, 40);
            delay(1000);//ele vai para frente por um delay de 1 segundo e
            //solta a bolinha na base;;;  (     base  resgate    )
            Desce_a_Garra();
            Abre_a_Garra();
            parar();
            delay(999999999);
          }
          if (distance > 60) {
            Serial.println("ALARME FALSO");
          }
        }
      }
    }
    frente(30, 25);
    delay(50);
  }
  Fecha_A_Garra();
  Sobe_A_Garra();
}

void Abre_a_Garra() {
  for (int i = 0; i <= 100; i++) {
  }

}
void Desce_a_Garra() {
  for (int i = 0; i <= 100; i--) {
  }
}
void Sobe_A_Garra() {
  for (int i = 0; i <= 100; i++) {
  }
}
void Fecha_A_Garra() {
  for (int i = 0; i <= 100; i--) {
  }
}





//    base 1:///////.............                      base2: ..............///////                base3: .....................
//           /////...............                             ................/////                       .....................
//           ///.................                             ..................///                       .....................
//           /............().....                             ..................../                       .....................
//           ....................                             .......()............                       ........()........../
//           |...................                             |....................                       |.................///
//           |...................                             |....................                       |.............../////
//           |...................                             |....................                       |.............///////
