/****************************************************************
Projeto: Buzz Line
* Criado     : 12/Jul/2023
* Atualizado : 12/Jul/2023
* Autor      : Luiz Eduardo
* Descrição :                
****************************************************************/

//Modificado pelos Cavaleiros do dígito. apabs@cesar.school

int hBridge[] = {2,3,4,5};


void setup() {
  // Aqui seu código rodará uma vez:
  pinMode(2, OUTPUT);//IN1
  pinMode(3, OUTPUT);//IN2
  pinMode(4, OUTPUT);//IN3
  pinMode(5, OUTPUT);//IN4
  // Sensores
  pinMode(6, INPUT);
  pinMode(7, INPUT);
}

void loop() {
   int sensor_direito = digitalRead(6);
   int sensor_esquerdo = digitalRead(7);

  if(sensor_direito == 1 && sensor_esquerdo == 1)
  {
    // bolts inwards are the reference for the clock wise/counter clock wise idea.
    digitalWrite(2,HIGH);//OUT1 2 = right side counter clock wise(forward)
    digitalWrite(3,LOW);//OUT2 3 = right side clock wise
    digitalWrite(4,LOW);//OUT3 4 = left side clock wise
    digitalWrite(5,HIGH);//OUT4 5 = left counter clock wise(forward)
    Serial.println("if 1!");
  }
  else if(sensor_direito == 0 && sensor_esquerdo == 0)
  {
    digitalWrite(2,LOW);//OUT1 
    digitalWrite(3,LOW);//OUT2 
    digitalWrite(4,LOW);//OUT3 
    digitalWrite(5,LOW);//OUT4
    Serial.println("if 2!");
  }      
  
  else if(sensor_direito == 1 && sensor_esquerdo == 0)
  {
    digitalWrite(2,LOW);//OUT1 #direita
    digitalWrite(3,LOW);//OUT2 #reverse direita
    digitalWrite(4,LOW);//OUT3 esquerda
    digitalWrite(5,HIGH);//OUT4 reverse esquerda
    Serial.println("if 3!");

  }
  else if(sensor_direito == 0 && sensor_esquerdo == 1) // 6 sensr sensor_direito
  {
    digitalWrite(2,HIGH);//OUT1 direita
    digitalWrite(3,LOW);//OUT2 reversa direita 
    digitalWrite(4,LOW);//OUT3 esquerda
    digitalWrite(5,LOW);//OUT4 reverse esquerda ?
    Serial.println("if 4!");
  }

}
