int servoPin = A4;
Servo myServo;
int servoPos = 0;


int servoControl(String command)
{
    // Convert
   int newPos = command.toInt();
   // Make sure it is in the right range
   // And set the position
   servoPos = constrain( newPos, 0 , 180);

   // Set the servo
   myServo.write( servoPos );

   // done
   return 1;
}

void setup() {
    myServo.attach( A4 );
    
    Particle.function("servo", servoControl);
    
    Particle.variable(  "servoPos" , &servoPos , INT );
}

void loop() {

}