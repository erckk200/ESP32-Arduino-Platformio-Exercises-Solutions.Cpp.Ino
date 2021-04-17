//63. Hacer un programa que determine si una palabra es políndroma


#include <arduino.h>


char p1[20];
char p2[20];
int cont=0;
int elementos=0;


void setup()
{
  Serial.begin(9600);
}
void loop(){
  Serial.println("\nDigite una palabra");

 do{
  if(Serial.available()!=0){
    p1[cont]=Serial.read();
    cont+=1;
  }
 }while(cont<20&&p1[cont-1]!='.');
 cont=0;


elementos=sizeof(p1)/sizeof(char);
 for(int i=0;i<elementos; i++){
  Serial.print(p1[i]);
  p1[i]= ' ';
 }
 
strcpy(p2,p1);

       if(strcmp(p1,p2)==0){
            Serial.println("No es  una palabra polindroma");
         }
         else{
            Serial.println("Es una palabra polindroma");   
         }


 Serial.println(" ");
 delay(100);
 }