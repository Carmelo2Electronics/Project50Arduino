
#include <Wire.h>
#include <Adafruit_MLX90614.h>

Adafruit_MLX90614 mlx = Adafruit_MLX90614();
String ta;
String to;
char* ii="";

void setup() {
  Serial.begin(9600);
  mlx.begin(); 
  delay(1000);     // wait for MAX chip to stabilize
}
 
void loop() {
  to=mlx.readObjectTempC();
  
  to.toCharArray(ii, 10);
  char texto[50];
  sprintf(texto, "%9s", ii );
  Serial.print(String(texto) + "\n");
  delay(500);
}
