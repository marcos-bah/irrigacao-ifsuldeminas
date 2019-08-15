/*IFSULDEMINAS - Campus Avançado Carmo de Minas
 *Nome: Projeto Irrigação 
 *Versão: 0.1 
 *Versionamento: https://github.com/marcos-bah/irrigacao-ifsuldeminas
 *Autor: Marcos Barbosa 
 *
 *Verificar se o relé é ativado em nível LOW (0V) ou HIGH (5V).
 */

#define valvula 8; // pino válvula (no caso será um rele para a valvula solenoide)
#define sensorUmidade A0;
#define horas 2; // intervalo de verificacao

#define sensorMovimento = 9; // pino para sensor de movimento
 
void setup() {
  pinMode(valvula, OUTPUT); // declara válvula como saída
  Serial.begin(9600); // ativa serial monitor
}
 
void loop() {
 
 int leituraUmidade = analogRead(sensorUmidade); //lê valor de pino analogico A0
 int leituraMovimento = digitalRead(sensorMovimento); //lê valor de pino digital 9
  
 //sensorValue varia entre 0 (umido) e 1023 (seco)
 //valor impirico
 
 while(leituraUmidade > 600){
   digitalWrite(valvula,LOW); // enquanto estiver seco, ativa a valvula 
   if()
 }
   
 digitalWrite(valvula,HIGH); // desativa a valvula
 
 delay(1000*60*60*horas); // tempo de espera para checar umidade  

}

