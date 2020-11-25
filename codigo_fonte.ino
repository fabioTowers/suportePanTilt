#include <IRLibAll.h>
#include <Servo.h>

//controle de projetor Epson
#define setaCima 0x0DF2
#define setaBaixo 0x4DB2
#define setaDireita 0x8D72
#define setaEsquerda 0xCD32
#define passo 10

Servo servoHorizontal;
Servo servoVertical;

IRrecv myReceiver (11);
IRdecode myDecoder;

unsigned int codRecebido = 0x0;
int anguloHorizontal = 0;
int anguloVertical = 0;

void setup (){ 
  myReceiver.enableIRIn();
  servoHorizontal.attach(9);
  servoVertical.attach(6);
  servoHorizontal.write(anguloHorizontal);
  servoVertical.write(anguloVertical);
}//fim do void setup

void loop (){
  if( myReceiver.getResults() ){
    myDecoder.decode();
    codRecebido = myDecoder.value;
    if(codRecebido == setaCima){
      if( anguloVertical <= (180-passo) )
      {
        anguloVertical = anguloVertical + passo;
        servoVertical.write(anguloVertical);
      }
    }
    if(codRecebido == setaBaixo){
      if( anguloVertical >= (0 + passo) )
      {
        anguloVertical = anguloVertical - passo;
        servoVertical.write(anguloVertical);
      }
    }
    if(codRecebido == setaDireita){
      if( anguloHorizontal <= (180-passo) )
      {
        anguloHorizontal = anguloHorizontal + passo;
        servoHorizontal.write(anguloHorizontal);
      }
    }
    if(codRecebido == setaEsquerda){
      if( anguloHorizontal >= (0+passo) )
      {
        anguloHorizontal = anguloHorizontal - passo;
        servoHorizontal.write(anguloHorizontal);
      }
    }
  }//fim do if getResults
  myReceiver.enableIRIn();
}//fim do void loop
