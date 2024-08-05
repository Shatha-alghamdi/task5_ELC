#define Ena 10
#define IN1 9
#define IN2 8

#define Enb 11
#define IN3 12
#define IN4 13

void setup() {
  // إعداد الدبابيس كمدخلات/مخرجات
  pinMode(Ena, OUTPUT);
  pinMode(IN1, OUTPUT);
  pinMode(IN2, OUTPUT);
  pinMode(Enb, OUTPUT);
  pinMode(IN3, OUTPUT);
  pinMode(IN4, OUTPUT);
}

void loop() {
  // التحكم في المحرك 1
  digitalWrite(IN1, HIGH);
  digitalWrite(IN2,LOW);
  analogWrite(Ena, 120);
  
  // التحكم في المحرك 2
  digitalWrite(IN3,HIGH );
  digitalWrite(IN4,LOW); 
  analogWrite(Enb,120);

  // يمكنك إضافة تأخير إذا لزم الأمر، لكن التأخير ليس مطلوبًا بشكل أساسي
}
