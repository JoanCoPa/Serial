/*************************************************************************
**                                                                      **
**                            Programa 4 ex.4                           **
**                                                                      **
*************************************************************************/

 
//****** Includes ********************************************************


//****** Variables *******************************************************

int tempAigua = 101;

//****** secup ***********************************************************
void setup() {
Serial.begin(9600);     // parlem amb l'arduino a 9600 bps! :3

  if ( tempAigua < 3.5)  
   Serial.print("A");

  else if ( tempAigua < 6.5)
   Serial.print("B");

  else if ( tempAigua < 11.1)
   Serial.print("C");

  else if ( tempAigua < 17.7)
   Serial.print("D");

  else if ( tempAigua < 38.2)
   Serial.print("E");

  else if ( tempAigua < 43.2)
   Serial.print("F");
      
  else  //No tinc cap comentari "gracios" :p
   Serial.print("G");  
  } 
        

//****** Loop ************************************************************
void loop() {

}
