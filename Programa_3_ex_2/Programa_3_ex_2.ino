/*************************************************************************
**                                                                      **
**                            Projecte 3 ex.2                           **
**                                                                      **
*************************************************************************/

 
//****** Includes ********************************************************

int thisByte = 33;

//****** Variables *******************************************************


//****** secup ***********************************************************
void setup() {
Serial.begin(9600); 
  Serial.println("Taula ASCII ~ Tots els caracters desde ! (num.33)");
  Serial.println("Els caracters del numero 0 al 32 no son simbols,");
  Serial.println("per aquesta rao no estan a la llista.");
}


//****** Loop ************************************************************
void loop() {
Serial.write(thisByte);    
  
  Serial.print(", dec: "); 
  Serial.print(thisByte);      
  Serial.print(", hex: "); 
  Serial.print(thisByte, HEX);     
  Serial.print(", oct: "); 
  Serial.print(thisByte, OCT);     
  Serial.print(", bin: "); 
  Serial.println(thisByte, BIN);   

  if(thisByte == 126)  // Últim caracter (el següent no és un simbol) Ò_Ó
  { 
    while(true)
    { 
    } 
  } 
  thisByte++;     // Cap al següent caracter! :3
}
