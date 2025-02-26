// 
//sensor de temperatura TMP36

int LED =7; // el led esta conectado en el pin digital 7
int TMP =0; // el sensor esta conectado en el pin analigico A0

float temperatura =0; // variable para leer los datos del sensor

void setup()
{
  pinMode(LED,OUTPUT); //CONFIGURAMOS  el pin como salida
  
  Serial.begin(9600);
}


void loop()
{
  //funcion map para leer los valores del TMP36
  temperatura = map(analogRead(TMP),0,1023,-5000,45000);
  
  temperatura = temperatura/100.00;
  
  Serial.print("Temperatura = ");
    Serial.println(temperatura);
  
  if (temperatura>=25){ //si la temperatura es mayor que 25
    digitalWrite(LED, HIGH);
  }
  
  else {
    digitalWrite(LED, LOW); 
  }
  
  delay (10); // retardo de 100 milisegundos
  
}  
