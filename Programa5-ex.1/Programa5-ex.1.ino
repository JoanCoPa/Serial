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
}        

//****** Loop ************************************************************
void loop() {
  while (Serial.available() > 0) {  // if there's any serial available, read it
   r1 = Serial.parseInt();// look for valid int the incoming serial stream
    
   r2 = Serial.parseInt();
    
  if (Serial.read() == '\n') { //look for newline. Is the end of your sentence                                 
      }
  }
}
