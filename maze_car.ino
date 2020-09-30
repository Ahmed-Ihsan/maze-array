const int motor1 = 12;
const int motor_1 = 11;
const int motor2 = 10;
const int motor_2 = 6;
const int speed_ = 150; const int speed_2 = 150;
int z[10][10];
int x = 0;
char Incoming_value ;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(motor1, OUTPUT);
  pinMode(motor_1, OUTPUT);
  pinMode(motor2, OUTPUT);
  pinMode(motor_2, OUTPUT);
}

void loop() {
  
  if (Serial.available() > 0 && Serial.read()!= Incoming_value)
  {
    Incoming_value = Serial.read();    
    Serial.print("qqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqq");//Read the incoming data and store it into variable Incoming_value
    Serial.print(Incoming_value);  
    Serial.print("qqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqq");//Print Value of Incoming_value in Serial monitor
  cpp(Incoming_value);
  int i = 0 , j = 0 , x=0;
  for (int m = 0; m < 20 ; m++) {
    Serial.println("aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa");
    Serial.println(z[j+1][i]);
     Serial.println(z[0][6]);
    Serial.println(z[j][i+1]);
    delay(1000);
    if (z[j + 1][i] == 22 && z[j][i] != 323 ) {
      if (x == 0) {
        forword();
        j++;
        Serial.println("forworf2\n");
      } else {
        left();
        forword();
        j++;
        x = 0;
        Serial.println("left\n");
      }

    }
    else if (z[j][i + 1] == 22 && z[j][i] != 323) {
      if (x == 0) {
        right();
        forword();
        Serial.println("right\n");
         i++;
        x = 1;
      } else {
        forword();
        i++;
        Serial.println("forword\n");
        Serial.println(i);
      }
    }
  }
  forword();}
}


int cpp(int l) {
  int h = 10, w = 10, p = l;
  int a[w][h];
  for (int i = 0; i < h; i++)
  {
    for (int j = 0; j < w; j++)
    {
      int n = 1;
      if (n < 0)
      {
        a[j][i] = -1;
      }
      else if (n > 0)
      {
        a[j][i] = 1;
      }
      else
      {
        a[j][i] = 0;
      }
    }
  }

  Serial.println( "_______________________________");
  int a2[w][h];
  int c = 0;
  for (int i = 0; i < h; i++)
  {
    for (int j = 0; j < w; j++)
    {
      a2[j][i] = c;
      c++;
    }
  }

  Serial.println( "_______________________________");
  /*for (int i = 0; i < h; i++)
    {
    for (int j = 0; j < w; j++)
    {
     if (a[j][i] == 1)
     {
       p = a2[j][i];
     }
    }
    }*/
  p = l;
  Serial.println( "_______________________________");
  for (int i = 0; i < h; i++)
  {
    for (int j = 0; j < w; j++)
    {
      a2[j][i] = p - a2[j][i];
      if (a2[j][i] < 0)
        a2[j][i] *= 1;
      Serial.println(a2[j][i]);
    }
    Serial.println("    ");
  }
  Serial.println( "_______________________________");
  int g = 0, o = 0;
  for (int x = 0; x < 101 ; x++)
  {
    a2[g][o] = 22;
    Serial.println(x);
    if (a2[g][o + 1] == 0) {
      a2[g][o + 1] = 323;
      Serial.println(o);
      break;
    }
    if (a2[g + 1][o] == 0) {
      a2[g + 1][o] = 323;
      Serial.println(g);
      break;
    }
    if (g == o && g == 0) {
      if (a2[g][o + 1] == 0 || a2[g + 1][o] == 0) {
        a2[g][o + 1] = 323;
        Serial.println(o);
        break;
      }

      if (a2[g][o + 1] <= a2[g + 1][o] && a2[g][o + 1] != 0 && a2[g][o + 1] > 0)
      {
        a2[g][o + 1] = 22;
        o++;
        Serial.println(o);
      }
      else if (a2[g + 1][o] <= a2[g][o + 1] && a2[g][o + 1] != 0 && a2[g][o + 1] > 0)
      {
        a2[g + 1][o] = 22;
        g++;
        Serial.println(g);
      }
    }

    if (g != w) {
      if (a2[g][o + 1] == 0) {
        a2[g][o + 1] = 22;
        Serial.println(o);
        break;
      }
      if (a2[g + 1][o] == 0) {
        a2[g + 1][o] = 323;
        Serial.println(g);
        break;
      }
      if (a2[g + 1][o] <= a2[g][o + 1] && a2[g][o + 1] != 0 && a2[g][o + 1] > 0)
      {
        a2[g + 1][o] = 22;
        g++;
        Serial.println(g);
      }
      else if (a2[g][o + 1] <= a2[g + 1][o] && a2[g][o + 1] != 0 && a2[g][o + 1] > 0)
      {
        a2[g][o + 1] = 22;
        o++;
        Serial.println(o);
      }
      else if (a2[g + 1][o] != 0 && a2[g + 1][o] > 0 && a2[g][o + 1] != 0)
      {
        a2[g + 1][o] = 22;
        g++;
        Serial.println(g);
      }

    }
    else if (o != h) {
      if (a2[g][o + 1] == 0) {
        a2[g][o + 1] = 323;
        Serial.println(o);
        break;
      }
      if (a2[g + 1][o] == 0) {
        a2[g + 1][o] = 323;
        Serial.println(g);
        break;
      }
      if (a2[g][o + 1] <= a2[g + 1][o] && a2[g][o + 1] != 0 && a2[g][o + 1] > 0)
      {
        a2[g][o + 1] = 22;
        o++;
        Serial.println(o);
      }
      else if (a2[g + 1][o] != 0 && a2[g + 1][o] > 0 && a2[g][o + 1] != 0)
      {
        a2[g + 1][o] = 22;
        g++;
        Serial.println(g);
      }
    }

    Serial.println( "_______________________________");
    for (int i = 0; i < h ; i++) {
      for (int j = 0; j < w ; j++)
      {
        z[j][i] = a2[j][i];
        Serial.println(z[j][i]);
      }
    }
  }


}
void forword() {
  analogWrite(motor1, LOW);
  analogWrite(motor_1, speed_);
  analogWrite(motor2, speed_);
  analogWrite(motor_2, LOW);
}
void left() {
  analogWrite(motor1, LOW);
  analogWrite(motor_1, speed_);
  analogWrite(motor2, LOW);
  analogWrite(motor_2, speed_);
}

void right() {
  analogWrite(motor1, speed_);
  analogWrite(motor_1, LOW);
  analogWrite(motor2, speed_);
  analogWrite(motor_2, LOW);
}
