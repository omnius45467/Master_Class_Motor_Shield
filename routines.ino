//A demo routine

void demo(){
 forward();
 delay(DELAY);
 backward();
 delay(DELAY);
 turnRight();
 delay(DELAY);
 turnLeft();
 delay(DELAY);
}

//A ping Routine

void pingLogic(){
  ping();
  if(cm >= 50){
    forward();
  }
  else{
    turnRight();
    brake();
    ping();
    if(cm < 50){
      turnLeft();
      brake();
      delay(50);
      
    }
    else{
    brake();
    backward();
    delay(50);
    turnRight();
    }
  }
}
