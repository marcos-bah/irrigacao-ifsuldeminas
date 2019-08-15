/*IFSULDEMINAS - Campus Avançado Carmo de Minas
 *Nome: Projeto Irrigação 
 *Versão: 0.1 
 *Versionamento: https://github.com/marcos-bah/irrigacao-ifsuldeminas
 *Autor: Marcos Barbosa 
 *
 *Verificar se o relé é ativado em nível LOW (0V) ou HIGH (5V).
 */

int valvula = 8; // pino válvula (no caso será um rele para a valvula solenoide)
int sensor = A0;
int horas = 2; // intervalo de verificacao
 
void setup() {
  pinMode(valvula, OUTPUT); // declara válvula como saída
}
 
void loop() {
 
 int sensorValue = analogRead(sensor); //lê valor de pino analogico A0
  
 //sensorValue varia entre 0 (umido) e 1023 (seco)
 //valor impirico
 
 while(sensorValue > 600){
   digitalWrite(valvula,LOW); // enquanto estiver seco, ativa a valvula 
 }
   
 digitalWrite(valvula,HIGH); // desativa a valvula
 
 delay(1000*60*60*horas); // tempo de espera para checar umidade  

}
