/*************************************************************************
**                                                                      **
**                            Projecte 3.print                          **
**                                                                      **
*************************************************************************/

 
//****** Includes ********************************************************

int num = 64;

//****** Variables *******************************************************


//****** secup ***********************************************************
void setup() {
Serial.begin(9600);    // Parlarem amb l'arduino a 9600 bps

  Serial.println("El mateix numero en decimal, binari, hexadecimal i octal");

  Serial.write(num);
  Serial.println();

  Serial.print("Numero:");

  Serial.println(num);
  Serial.println(num,DEC);
  
  Serial.println(num,BIN);
  
  Serial.println(num,HEX);
  
  Serial.println(num,OCT);
}


//****** Loop ************************************************************
void loop() {
 //Al loop no posarem res per aquest programa

}
