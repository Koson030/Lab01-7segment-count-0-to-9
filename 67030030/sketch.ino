const int seg[] = {19, 18, 5, 17, 16, 4, 0};

const bool digit[10][7] = {
  {1,1,1,1,1,1,0}, {0,1,1,0,0,0,0},
  {1,1,0,1,1,0,1}, {1,1,1,1,0,0,1},
  {0,1,1,0,0,1,1}, {1,0,1,1,0,1,1},
  {1,0,1,1,1,1,1}, {1,1,1,0,0,0,0},
  {1,1,1,1,1,1,1}, {1,1,1,1,0,1,1}
};

void setup() {
  for (int i = 0; i < 7; i++) pinMode(seg[i], OUTPUT);
}

void loop() {
  for (int n = 0; n < 10; n++) {
    for (int i = 0; i < 7; i++) digitalWrite(seg[i], digit[n][i]);
    delay(750);
  }
} //  โกศล เพ็งพิพัฒน์ 67030030 

