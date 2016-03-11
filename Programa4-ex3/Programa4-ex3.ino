/*************************************************************************
**                                                                      **
**                            Programa 4 ex.3                           **
**                                                                      **
*************************************************************************/

 
//****** Includes ********************************************************


//****** Variables *******************************************************

int tempAigua = 101;

//****** secup ***********************************************************
void setup() {
Serial.begin(9600);     // parlem amb l'arduino a 9600 bps! :3

  if ( tempAigua < 90)  //quan l'aigua supera als 99C es veu el serial
   Serial.print("Aigua encara no bull :3");

  else if ( tempAigua <= 100)
   Serial.print("Aigua esta a punt de bullir");
   
  else  //quan l'aigua no te 100c es veu l'altre serial
   Serial.print("Aigua esta bullint!! T_T");  
  } 
        

//****** Loop ************************************************************
void loop() {

}
