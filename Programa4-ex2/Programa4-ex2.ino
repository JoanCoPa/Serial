/*************************************************************************
**                                                                      **
**                            Programa 4 ex.2                           **
**                                                                      **
*************************************************************************/

 
//****** Includes ********************************************************


//****** Variables *******************************************************

int tempAigua = 101;

//****** secup ***********************************************************
void setup() {
Serial.begin(9600);     // parlem amb l'arduino a 9600 bps! :3

  if ( tempAigua > 99)  //quan l'aigua supera als 99C es veu el serial
   Serial.print("Aigua bullint!");
  
  if ( tempAigua < 100);  //quan l'aigua no te 100c es veu l'altre serial
   Serial.print("Aigua encara no bull, pero pot cremar T_T");  
  } 
        

//****** Loop ************************************************************
void loop() {

}
