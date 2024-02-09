/*

*/

int bekleme ;

void setup() {
  pinMode(13, OUTPUT); // step motor sürücüsüne L298
  pinMode(12, OUTPUT); // step motor sürücüsüne L298
  pinMode(11, OUTPUT); // step motor sürücüsüne L298
  pinMode(10, OUTPUT); // step motor sürücüsüne L298
  pinMode(9, OUTPUT); // DC motor bıçak açama
  pinMode(8, OUTPUT); // DC motor kumaş kesme

  pinMode(7, INPUT); // Bıçak açıldığında DC motor duracak
  pinMode(6, INPUT); // Kumaş kesildiğinde motor duracak

  pinMode(13, LOW);
  pinMode(12, LOW);
  pinMode(11, LOW);
  pinMode(10, LOW);
  pinMode(9, HIGH);
  pinMode(8, HIGH);

  bekleme = 50 ;
  }


void loop() {
 
for (int i = 1 ; i <= 100 ; i++) {

  digitalWrite (13 , LOW);
  digitalWrite (12 , LOW);
  digitalWrite (11 , LOW);
  digitalWrite (10 , HIGH);
  delay (bekleme);
  digitalWrite (13 , LOW);
  digitalWrite (12 , LOW);
  digitalWrite (11 , HIGH);
  digitalWrite (10 , LOW);
  delay (bekleme);
  digitalWrite (13 , LOW);
  digitalWrite (12 , HIGH);
  digitalWrite (11 , LOW);
  digitalWrite (10 , LOW);
  delay (bekleme);
  digitalWrite (13 , HIGH);
  digitalWrite (12 , LOW);
  digitalWrite (11 , LOW);
  digitalWrite (10 , LOW);
  delay (bekleme);
}
digitalWrite (13 , LOW);
digitalWrite (12 , LOW);
digitalWrite (11 , LOW);
digitalWrite (10 , LOW);

delay(1000);

digitalWrite (9 , HIGH);
digitalWrite (8 , LOW);

while(1) {
  int swac = digitalRead (7);
  if (swac == HIGH) {
  digitalWrite (9 , HIGH);
  digitalWrite (8 , HIGH);
  break;  
} else {
}
} 
delay(2000);

digitalWrite (9 , LOW);
digitalWrite (8 , HIGH);

while(1) {
  int swkapat = digitalRead (6);
  if (swkapat == HIGH) {
  digitalWrite (9 , LOW);
  digitalWrite (8 , LOW);
  break;  
} else {
} 
}
delay(2000);
}  
