/*************************************************************************
**                                                                      **
**                            Programa 4 ex.7                           **
**                                                                      **
*************************************************************************/

 
//****** Includes ********************************************************


//****** Variables *******************************************************

int comptar = 10;
int num = 11;
//****** secup ***********************************************************
void setup() {
Serial.begin(9600);     // parlem amb l'arduino a 9600 bps! つ◕_◕ つ
 Serial.print("Ara comptare de 0 a ");
 Serial.println(num);
 
for (int i=0; i <= comptar; i++)
 {
   Serial.print(i);
   Serial.print("-"); //D'aquesta manera sortirà un - entre numeros
   } 
 Serial.print("11");    
}        

//****** Loop ************************************************************
void loop() {
}
