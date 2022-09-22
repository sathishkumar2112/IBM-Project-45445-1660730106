void setup()
{
 Serial.begin(9600);
}

void loop()
{
  double a = analogRead(A0);
  Serial.print("Analog Value; ");
  Serial.println(a);
  double ca = a/1024;
  Serial.print("converted Analog value:");
  Serial.println(ca);
  double v = ca * 5;
  Serial.print("vol value: ");
  Serial.println(v);
  double o = v-0.5;
  Serial.println(o);
  double c = o*100;
  Serial.print("offset value: ");
  Serial.println(o);
  delay(2000);
  
  
}
