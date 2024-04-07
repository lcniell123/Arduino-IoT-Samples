int switchState = 0;

void setup() {
  pinMode(2,INPUT);
  pinMode(3,OUTPUT);
  pinMode(4,OUTPUT);
  pinMode(5,OUTPUT);
  
}

void loop() {

  // put your main code here, to run repeatedly:
  switchState = digitalRead(2);



  if (switchState == LOW){
    
    digitalWrite(3, HIGH);
    digitalWrite(4, LOW);
    digitalWrite(5, LOW);
    }

    else {

      int p = 1;

      for(int i=0;i<100;i++){

         if(p==1){
        digitalWrite(3, LOW);
      digitalWrite(4, HIGH);
      digitalWrite(5, LOW);
      delay(50);
      p++;
        }
        
        else if(p==2){
          
       digitalWrite(3, LOW);
      digitalWrite(4, LOW);
      digitalWrite(5, HIGH);
      delay(50);
      p++;
          }

          else{
          
       digitalWrite(3, HIGH);
      digitalWrite(4, LOW);
      digitalWrite(5, LOW);
      delay(50);
      p=1;
          }
          
        }

     

       

    }
}

