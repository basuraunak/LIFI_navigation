
#define BAUDRATE 9600

const int Voice_1 = 2;     
const int Voice_2 = 3;     
const int Voice_3 = 4;     
const int Voice_4 = 5;     
const int Voice_5 = 6;     
const int Voice_6 = 7;     
const int Voice_7 = 8;     
const int Voice_8 = 9;   
byte GetValue1='N';

byte GetValue;
byte SerialValue;

byte PreviousValue='X';

void setup()

{

  Serial.begin(BAUDRATE);
  pinMode(Voice_1, OUTPUT);
  pinMode(Voice_2, OUTPUT);
  pinMode(Voice_3, OUTPUT);
  pinMode(Voice_4, OUTPUT);
  pinMode(Voice_5, OUTPUT);
  pinMode(Voice_6, OUTPUT);
  pinMode(Voice_7, OUTPUT);
  pinMode(Voice_8, OUTPUT);
//  pinMode(Voice_1, HIGH);
//  pinMode(Voice_2, HIGH);
//  pinMode(Voice_3, HIGH);
//  pinMode(Voice_4, HIGH);
//  pinMode(Voice_5, HIGH);
//  pinMode(Voice_6, HIGH);
//  pinMode(Voice_7, HIGH);
//  pinMode(Voice_8, HIGH);
      digitalWrite(Voice_1, HIGH);

      digitalWrite(Voice_2, HIGH);
    digitalWrite(Voice_3, HIGH);
    digitalWrite(Voice_4, HIGH);
    digitalWrite(Voice_5, HIGH);
    digitalWrite(Voice_6, HIGH);
    digitalWrite(Voice_7, HIGH);
    digitalWrite(Voice_8, HIGH);

}

byte ReadOneByte()           // One Byte Read Function

{

  char ByteRead;

  while(!Serial.available());

  ByteRead = Serial.read();
      //Serial.println(ByteRead);


  return ByteRead;

}

void loop()

{
            digitalWrite(Voice_1, HIGH);

    
    if(ReadOneByte() == 70)
    
    {
    
    if(ReadOneByte() == 255)
    
    {       
    GetValue='S';
  Serial.println("S");
    
    }
    }


if(ReadOneByte() == 34)

{

if(ReadOneByte() == 34)

{       
GetValue='A';
  Serial.println("A");

}
}

if(ReadOneByte() == 68)

{

if(ReadOneByte() == 255)

{       
GetValue='B';
  Serial.println("B");

}
}

       if(ReadOneByte() == 200)

{

if(ReadOneByte() == 200)

{       
GetValue='C';
  Serial.println("C");

}
}


if(ReadOneByte() == 66)

{

if(ReadOneByte() == 255)

{       
GetValue='D';
  Serial.println("D");

}
}

    
if (GetValue==GetValue1)

{

  
}
else
{
    
    switch(GetValue)

    {
       Serial.println("GetValue");
       Serial.println(GetValue);


       case 'A':       
       Serial.println("PreviousValue");

Serial.println(PreviousValue);
       if (PreviousValue == 'S')
      {
        Voice2();
        PreviousValue='A';
        break;  
      }
      else if (PreviousValue == 'B')

      {
        Voice3();
        PreviousValue='A';
        break;
      }
      else if (PreviousValue == 'C')

      {
        Voice4();
        PreviousValue='A';
        break;
      }
      else
      {
        Voice5();
        PreviousValue='A';
        break;
      }
                 


           break;

        case 'B':
           if (PreviousValue == 'B')
            {
                      
            }
            else
            {
              Voice6();
              PreviousValue='B';
              break;
            }
                          break;


        case 'C':
          if (PreviousValue == 'C')
            {
                      
            }
            else
            {
              Voice7();
              PreviousValue='C';
              break;
            }
                          break;


        case 'D':
           if (PreviousValue == 'D')
            {
                      
            }
            else
            {
              Voice8();
              PreviousValue='D';
              break;
            }
          break;

       case 'S':
           if (PreviousValue == 'S')
            {
                      
            }
            else
            {
              Voice1();
              PreviousValue='S';
              break;
            }
          break;

            default:
           
          break;

    }
        GetValue1=GetValue;

}

}

  void Voice1()

 {
    Serial.println("voice1");
    digitalWrite(Voice_1, LOW);
    delay(2000);
            digitalWrite(Voice_1, HIGH);

    digitalWrite(Voice_2, HIGH);
    digitalWrite(Voice_3, HIGH);
    digitalWrite(Voice_4, HIGH);
    digitalWrite(Voice_5, HIGH);
    digitalWrite(Voice_6, HIGH);
    digitalWrite(Voice_7, HIGH);
     digitalWrite(Voice_8, HIGH);
//    digitalWrite(Voice_1, HIGH);


 }

  void Voice2()

 {

    Serial.println("voice2");
       digitalWrite(Voice_2, LOW);
    delay(2000);
    digitalWrite(Voice_2, HIGH);
    digitalWrite(Voice_3, HIGH);
    digitalWrite(Voice_4, HIGH);
    digitalWrite(Voice_5, HIGH);
    digitalWrite(Voice_6, HIGH);
            digitalWrite(Voice_1, HIGH);
  digitalWrite(Voice_7, HIGH);
     digitalWrite(Voice_8, HIGH);

 }


    void Voice3()

 {

  Serial.println("voice3");
         digitalWrite(Voice_3, LOW);
    delay(2000);
    digitalWrite(Voice_2, HIGH);
    digitalWrite(Voice_3, HIGH);
    digitalWrite(Voice_4, HIGH);
    digitalWrite(Voice_5, HIGH);
    digitalWrite(Voice_6, HIGH);
            digitalWrite(Voice_1, HIGH);
  digitalWrite(Voice_7, HIGH);
     digitalWrite(Voice_8, HIGH);

 }

     void Voice4()

 {
    Serial.println("voice4");
    digitalWrite(Voice_4, LOW);
    delay(2000);
    digitalWrite(Voice_2, HIGH);
    digitalWrite(Voice_3, HIGH);
    digitalWrite(Voice_4, HIGH);
    digitalWrite(Voice_5, HIGH);
    digitalWrite(Voice_6, HIGH);
    digitalWrite(Voice_1, HIGH);
    digitalWrite(Voice_7, HIGH);
    digitalWrite(Voice_8, HIGH);

 }
     void Voice5()

 {
    Serial.println("voice5");
    digitalWrite(Voice_5, LOW);
    delay(2000);
    digitalWrite(Voice_2, HIGH);
    digitalWrite(Voice_3, HIGH);
    digitalWrite(Voice_4, HIGH);
    digitalWrite(Voice_5, HIGH);
    digitalWrite(Voice_6, HIGH);
    digitalWrite(Voice_1, HIGH);
    digitalWrite(Voice_7, HIGH);
    digitalWrite(Voice_8, HIGH);

 }
     void Voice6()

 {

    digitalWrite(Voice_6, LOW);
    delay(2000);
    digitalWrite(Voice_2, HIGH);
    digitalWrite(Voice_3, HIGH);
    digitalWrite(Voice_4, HIGH);
    digitalWrite(Voice_5, HIGH);
    digitalWrite(Voice_6, HIGH);
    digitalWrite(Voice_1, HIGH);
    digitalWrite(Voice_7, HIGH);
     digitalWrite(Voice_8, HIGH);

  Serial.println("voice6");

 }
     void Voice7()

 {
  digitalWrite(Voice_7, LOW);
    delay(2000);
  
  digitalWrite(Voice_2, HIGH);
    digitalWrite(Voice_3, HIGH);
    digitalWrite(Voice_4, HIGH);
    digitalWrite(Voice_5, HIGH);
    digitalWrite(Voice_6, HIGH);
     digitalWrite(Voice_1, HIGH);
  digitalWrite(Voice_7, HIGH);
     digitalWrite(Voice_8, HIGH);

  Serial.println("voice7");
  

 }
     void Voice8()

 {

  digitalWrite(Voice_8, LOW);
    delay(2000);
  
  digitalWrite(Voice_2, HIGH);
    digitalWrite(Voice_3, HIGH);
    digitalWrite(Voice_4, HIGH);
    digitalWrite(Voice_5, HIGH);
    digitalWrite(Voice_6, HIGH);
     digitalWrite(Voice_1, HIGH);
  digitalWrite(Voice_7, HIGH);
     digitalWrite(Voice_8, HIGH);

 Serial.println("voice8");

 }
