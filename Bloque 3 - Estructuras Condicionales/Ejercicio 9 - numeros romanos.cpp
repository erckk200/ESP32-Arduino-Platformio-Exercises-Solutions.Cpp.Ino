/*23. Cambiar un número entero con el mismo valor pero en romanos.
  
  M = 1000
  D = 500
  C = 100
  L = 50
  X = 10
  V = 5
  I = 1
*/


#include <arduino.h>

int n1,unidades,decenas,centenas,millar;
void setup()
{
  Serial.begin(9600);
}

void numero(){
  
  Serial.println("");
  Serial.print("Digite un numero: "); 
  while(!Serial.available()){}
  n1=Serial.parseInt();
  Serial.println(n1);
  Serial.println("");
  //2152
  unidades = n1%10; 
  n1/= 10; //unidades = 2 , numero = 215
  decenas = n1%10; 
  n1/= 10; //decenas = 5 , numero = 21
  centenas = n1%10; 
  n1 /= 10; //centenas = 1 , numero = 2
  millar = n1%10 ; 
  n1 /= 10; //millar = 2 , numero = 0
  //2000+100+50+2 = 2152
  
  switch(millar){
    case 1: Serial.print("M");break;
    case 2: Serial.print("MM"); break;
    case 3: Serial.print("MMM");break;
  }
  
  switch(centenas){
    case 1: Serial.print("C");break;
    case 2: Serial.print("CC");break;
    case 3: Serial.print("CCC");break;
    case 4: Serial.print("CD");break;
    case 5: Serial.print("D");break;
    case 6: Serial.print("DC");break;
    case 7: Serial.print("DCC");break;
    case 8: Serial.print("DCCC");break;
    case 9: Serial.print("CM");break;
  }
  
  switch(decenas){
    case 1: Serial.print("X");break;
    case 2: Serial.print("XX");break;
    case 3: Serial.print("XXX");break;
    case 4: Serial.print("XL");break;
    case 5: Serial.print("L");break;
    case 6: Serial.print("LX");break;
    case 7: Serial.print("LXX");break;
    case 8: Serial.print("LXXX");break;
    case 9: Serial.print("XC");break;
  }
  
  switch(unidades){
    case 1: Serial.print("I");break;
    case 2: Serial.print("II");break;
    case 3: Serial.print("III");break;
    case 4: Serial.print("IV");break;
    case 5: Serial.print("V");break;
    case 6: Serial.print("VI");break;
    case 7: Serial.print("VII");break;
    case 8: Serial.print("VIII");break;
    case 9: Serial.print("IX");break;
  }
}
void loop(){
  numero();
}