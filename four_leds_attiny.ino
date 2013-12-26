/* Set Pins for ATTiny85. 8Mhz Internal PLL */
#define LED1 0
#define LED2 1
#define LED3 3
#define LED4 4

void setup() {
  pinMode(0, OUTPUT);
  pinMode(1, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  all_off(0);
}

void loop() {
  for (int i=0; i<3; ++i) {
    clockwise_all(100);
    counterclockwise_all(100);
  }
  
  for (int i=0; i<6; ++i) {
    clockwise_each(200);
  }
  for (int i=0; i<6; ++i) {
    counterclockwise_each(200);
  }
  
  for (int i=0; i<3; ++i) {
    clockwise_each(200);
    counterclockwise_each(200);
  }
}

void odd_on(int wait) {
  on(LED1);
  on(LED3);
  if (wait) delay(wait);
}

void odd_off(int wait) {
  off(LED1);
  off(LED3);
  if (wait) delay(wait);
}
void even_on(int wait) {
  on(LED2);
  on(LED4);
  if (wait) delay(wait);
}

void even_off(int wait) {
  off(LED2);
  off(LED4);
  if (wait) delay(wait);
}


void all_off(int wait) {
  off(LED1);
  off(LED2);
  off(LED3);
  off(LED4);
  if (wait) delay(wait);
}

void all_on(int wait) {
  on(LED1);
  on(LED2);
  on(LED3);
  on(LED4);
  if (wait) delay(wait);
}

void clockwise_each(int wait) {
  on(LED1);
  delay(wait);
  off(LED1);
  on(LED2);
  delay(wait);
  off(LED2);
  on(LED3);
  delay(wait);
  off(LED3);
  on(LED4);
  delay(wait);
  off(LED4);
}

void counterclockwise_each(int wait) {
  on(LED1);
  delay(wait);
  off(LED1);
  on(LED4);
  delay(wait);
  off(LED4);
  on(LED3);
  delay(wait);
  off(LED3);
  on(LED2);
  delay(wait);
  off(LED2);
}

void clockwise_all(int wait) {
  on(LED1);
  delay(wait);
  on(LED2);
  delay(wait);
  on(LED3);
  delay(wait);
  on(LED4);
  delay(wait);
  
  off(LED1);
  delay(wait);
  off(LED2);
  delay(wait);
  off(LED3);
  delay(wait);
  off(LED4);
  delay(wait);
}

void counterclockwise_all(int wait) {
  on(LED1);
  delay(wait);
  on(LED4);
  delay(wait);
  on(LED3);
  delay(wait);
  on(LED2);
  delay(wait);

  off(LED1);
  delay(wait);
  off(LED4);
  delay(wait);
  off(LED3);
  delay(wait);
  off(LED2);
  delay(wait);
}

void on(int led) {
  digitalWrite(led, 0);
}

void off(int led) {
  digitalWrite(led, 1);
}
