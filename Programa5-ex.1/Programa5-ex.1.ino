/*************************************************************************
**                                                                      **
**                            Programa 5 ex.1                           **
**                                                                      **
*************************************************************************/

 
//****** Includes ********************************************************


//****** Variables *******************************************************

float r1, r2;             // variables for the R's
float rSerie, rParalel;   // variables for the results

//****** secup ***********************************************************
void setup() {
Serial.begin(9600);     // parlem amb l'arduino a 9600 bps! つ◕_◕ つ
  Serial.println("Entra el valor de r1 i r2 (separats per una coma)");    
}        // 2,8 per exemple :3

//****** Loop ************************************************************
void loop() {
  while (Serial.available() > 0) {  // if there's any serial available, read it
   r1 = Serial.parseInt();// look for valid int the incoming serial stream
    Serial.print ("r1 es:");
    Serial.print (r1);
    Serial.println ("ohms");
   r2 = Serial.parseInt();
    Serial.print ("r2 es:");
    Serial.print (r2);
    Serial.println ("ohms");
  if (Serial.read() == '\n') { //IMPORTANT, posar "nueva linea" en el monitor
    rSerie = r1 + r2;
    rParalel = (r1 * r2)/ (r1+r2);
    Serial.print ("La R1 en serie es:");
    Serial.print (rSerie);
    Serial.println ("ohms");

   Serial.print ("La R2 en paralel es:");
   Serial.print (rParalel);
   Serial.println ("ohms");
Serial.println("Entra el valor de r1 i r2");                                 
      }// d'aquesta manera es pot repetir l'acció (recorda la coma)
  }
}
