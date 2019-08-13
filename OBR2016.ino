#include <GP2Y0A02YK0F.h>
GP2Y0A02YK0F irSensor;
#include <DMPH.h>

#define trigPin_frente 9
#define echoPin_frente 8

#define trigPin_lado 9
#define echoPin_lado 8

DMPH motorE(50, 48, 12);
DMPH motorD(46, 44, 11);

int distance;
int distance2;

int SHARP_Esquerda = 1;

const int D_s0 = 25;
const int D_s1 = 2;
const int D_s2 = 27;
const int D_s3 = 4;
const int D_out = 3;

int D_red = 0;
int D_green = 0;
int D_blue = 0;
int D_SENSOR_R = 0;
int D_SENSOR_G = 0;
int D_SENSOR_B = 0;

const int E_s0 = 31;
const int E_s1 = 6;
const int E_s2 = 29;
const int E_s3 = 5;
const int E_out = 7;

int E_red = 0;
int E_green = 0;
int E_blue = 0;
int E_SENSOR_R = 0;
int E_SENSOR_G = 0;
int E_SENSOR_B = 0;

int Direita = 13;
int meio_direita = 12;
int meio_esquerda = 11;
int Esquerda = 10;
int leitura;
int preto = 905;
int pretoM = 950;

void setup()
{
  pinMode(D_s0, OUTPUT);
  pinMode(D_s1, OUTPUT);
  pinMode(D_s2, OUTPUT);
  pinMode(D_s3, OUTPUT);
  pinMode(D_out, INPUT);

  digitalWrite(D_s0, HIGH);
  digitalWrite(D_s1, LOW);

  pinMode(E_s0, OUTPUT);
  pinMode(E_s1, OUTPUT);
  pinMode(E_s2, OUTPUT);
  pinMode(E_s3, OUTPUT);
  pinMode(E_out, INPUT);

  digitalWrite(E_s0, HIGH);
  digitalWrite(E_s1, LOW);

  Serial.begin(9600);
  irSensor.begin(SHARP_Esquerda);

  pinMode(trigPin_frente, OUTPUT);
  pinMode(echoPin_frente, INPUT);

  pinMode(trigPin_lado, OUTPUT);
  pinMode(echoPin_lado, INPUT);

  parar();
  delay(1000);
}

void loop()
{
  if (dis_frente() > 5)
  {
    seguir_linha();
  }
  else if (dis_frente() <= 5)
  {
    Desviar();
  }

  //frente(80,80);
  //volta(100,100);
  //mostra();
  //seguir_linha();
}
