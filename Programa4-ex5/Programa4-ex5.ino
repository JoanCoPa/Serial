/*************************************************************************
**                                                                      **
**                            Programa 4 ex.5                           **
**                                                                      **
*************************************************************************/

 
//****** Includes ********************************************************


//****** Variables *******************************************************

int sensorReading = 4;

//****** secup ***********************************************************
void setup() {
Serial.begin(9600);     // parlem amb l'arduino a 9600 bps! :3
 Serial.print("The day is..."); 
   
  switch (sensorReading) {
  case 0:    
    Serial.println("dark");
    break;
  case 1:    
    Serial.println("dim");
    break;
  case 2:    
    Serial.println("medium");
    break;
  case 3:
    Serial.println("bright");
    break;
  default:
    Serial.println("... TRAMBOLIKO!");  
  } //Selecciona el cas a partir de la lectura del sensor O_o
}        

//****** Loop ************************************************************
void loop() {
}
