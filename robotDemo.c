#include <kipr/botball.h>
//declaration of the function foward
void forward(int time, int speed1, int speed2);   

void openLeftClaw();
void closeLeftClaw();

void upLeftArm();
void downLeftArm();

void openRightClaw();
void closeRightClaw();

void upRightArm();
void downRightArm();

/*
left claw = port 0
left arm = port 1
right arm = port 2
right claw = port 3

left motor = 0
right motor = 3
*/

int main()
{
  	//creates an integer value in place of the port number 
  	int leftClaw = 0;
  	int leftArm = 1;
  	int rightArm = 2;
  	int rightClaw = 3;
  
  	int leftMotor = 0;
  	int rightMotor = 3;
  	
    printf("Hello World\n");
  
  	forward(1000, 1500, 1450);
  	msleep(500);
  	
  	forward(1000, -1500, -1450);
  	msleep(500);
 	ao();
      
    printf("time to dance!"); 
   	forward(3000, 1000, -1000);
   	
  	enable_servo(leftClaw);
  	enable_servo(leftArm);
    enable_servo(rightClaw);
    enable_servo(rightArm);
  
    openLeftClaw();
    openRightClaw();
  	
    upLeftArm();
    upRightArm();
    
  	ao();
  
    closeLeftClaw();
    openLeftClaw();
  
    closeRightClaw();
    openRightClaw();
    
    downLeftArm();
    upLeftArm();
  
    downRightArm();
    upRightArm();

    closeRightClaw();
    downLeftArm();
    
    closeLeftClaw();
    downRightArm();

   	forward(5000, -1000, 1000);
  	msleep(1000);
  	ao();
	
    openRightClaw();
  	openLeftClaw();
  
    upRightArm();
  	upLeftArm();
  
  	closeRightClaw();
  	closeLeftClaw();
  	msleep(750);
  
  	forward(2000, -7000, 7000);
 	ao();
  
  	forward(1000, 7000, -7000);
  	
    set_servo_position(1, 1170);
	msleep(100);
	set_servo_position(1, 2000);
	msleep(100);
  
    set_servo_position(2, 1000);
	msleep(100);
	set_servo_position(2, 0);
	msleep(100);
  
 	set_servo_position(1, 1170);
    msleep(100);
    set_servo_position(1, 2000);
	msleep(100);
  
    set_servo_position(2, 1000);
	msleep(100);
	set_servo_position(2, 0);
	msleep(100);
  
    set_servo_position(1, 1170);
	msleep(100);
	set_servo_position(1, 2000);
	msleep(100);
  
    set_servo_position(2, 1000);
	msleep(100);
	set_servo_position(2, 0);
	msleep(100);
  
    set_servo_position(1, 1170);
	msleep(100);
	set_servo_position(1, 2000);
	msleep(100);
  
    set_servo_position(2, 1000);
	msleep(100);
	set_servo_position(2, 0);
	msleep(100);
  
 	set_servo_position(1, 1170);
    msleep(100);
    set_servo_position(1, 2000);
	msleep(100);
  
    set_servo_position(2, 1000);
	msleep(100);
	set_servo_position(2, 0);
	msleep(100);
  
    set_servo_position(1, 1170);
	msleep(100);
	set_servo_position(1, 2000);
	msleep(100);
  
    set_servo_position(2, 1000);
	msleep(100);
	set_servo_position(2, 0);
	msleep(100);
  
  	forward(500, 1000, 0);
  	forward(500, 0, 1000);
  
  	forward(500, -1000, 0);
  	forward(500, 0, -1000);
  
  	forward(500, 1000, 0);
  	forward(500, 0, 1000);
  
  	forward(500, -1000, 0);
  	forward(500, 0, -1000);
  
  	ao();
   
  	set_servo_position(1, 1170);
	msleep(200);
	set_servo_position(1, 2000);
	msleep(200);
  
    set_servo_position(2, 1000);
	msleep(200);
	set_servo_position(2, 0);
	msleep(200);
  
 	set_servo_position(1, 1170);
    msleep(200);
    set_servo_position(1, 2000);
	msleep(200);
  
    set_servo_position(2, 1000);
	msleep(200);
	set_servo_position(2, 0);
	msleep(200);
  
    set_servo_position(1, 1170);
	msleep(100);
	set_servo_position(1, 2000);
	msleep(100);
  
    set_servo_position(2, 1000);
	msleep(100);
	set_servo_position(2, 0);
	msleep(100);
  
    set_servo_position(1, 1170);
	msleep(100);
	set_servo_position(1, 2000);
	msleep(100);
  
    set_servo_position(2, 1000);
	msleep(100);
	set_servo_position(2, 0);
	msleep(100);
  
 	set_servo_position(1, 1170);
    msleep(100);
    set_servo_position(1, 2000);
	msleep(100);
  
    set_servo_position(2, 1000);
	msleep(300);
	set_servo_position(2, 0);
	msleep(300);
  
    set_servo_position(1, 1170);
	msleep(300);
	set_servo_position(1, 2000);
	msleep(300);
  
    set_servo_position(2, 1000);
	msleep(100);
	set_servo_position(2, 0);
	msleep(100);
  
  	upLeftArm();
  	upRightArm();
  
  	forward(500, 1000, 0);
  	forward(500, 0, 1000);
  	
  	openLeftClaw();
  	openRightClaw();
  
  	forward(500, -1000, 0);
  	forward(500, 0, -1000);
  
  	closeLeftClaw();
  	closeRightClaw();
  
  	forward(500, 1000, 0);
  	forward(500, 0, 1000);
  
  	openLeftClaw();
  	openRightClaw();
  
  	forward(500, -1000, 0);
  	forward(500, 0, -1000);
  
    closeLeftClaw();
  	closeRightClaw();
  
  	//second cycle of the dancing 
   
  	ao();
  
    closeLeftClaw();
    openLeftClaw();
  
    closeRightClaw();
    openRightClaw();
    
    downLeftArm();
    upLeftArm();
  
    downRightArm();
    upRightArm();

    closeRightClaw();
    downLeftArm();
    
    closeLeftClaw();
    downRightArm();

   	forward(5000, -1000, 1000);
  	msleep(1000);
  	ao();
	
    openRightClaw();
  	openLeftClaw();
  
    upRightArm();
  	upLeftArm();
  
  	closeRightClaw();
  	closeLeftClaw();
  	msleep(750);
  	
    set_servo_position(1, 1170);
	msleep(100);
	set_servo_position(1, 2000);
	msleep(100);
  
    set_servo_position(2, 1000);
	msleep(100);
	set_servo_position(2, 0);
	msleep(100);
  
 	set_servo_position(1, 1170);
    msleep(100);
    set_servo_position(1, 2000);
	msleep(100);
  
    set_servo_position(2, 1000);
	msleep(100);
	set_servo_position(2, 0);
	msleep(100);
  
    set_servo_position(1, 1170);
	msleep(100);
	set_servo_position(1, 2000);
	msleep(100);
  
    set_servo_position(2, 1000);
	msleep(100);
	set_servo_position(2, 0);
	msleep(100);
  
    set_servo_position(1, 1170);
	msleep(100);
	set_servo_position(1, 2000);
	msleep(100);
  
    set_servo_position(2, 1000);
	msleep(100);
	set_servo_position(2, 0);
	msleep(100);
  
 	set_servo_position(1, 1170);
    msleep(100);
    set_servo_position(1, 2000);
	msleep(100);
  
    set_servo_position(2, 1000);
	msleep(100);
	set_servo_position(2, 0);
	msleep(100);
  
    set_servo_position(1, 1170);
	msleep(100);
	set_servo_position(1, 2000);
	msleep(100);
  
    set_servo_position(2, 1000);
	msleep(100);
	set_servo_position(2, 0);
	msleep(100);
  
  	forward(500, 1000, 0);
  	forward(500, 0, 1000);
  
  	forward(500, -1000, 0);
  	forward(500, 0, -1000);
  
  	forward(500, 1000, 0);
  	forward(500, 0, 1000);
  
  	forward(500, -1000, 0);
  	forward(500, 0, -1000);
  
  	ao();
   
  	set_servo_position(1, 1170);
	msleep(200);
	set_servo_position(1, 2000);
	msleep(200);
  
    set_servo_position(2, 1000);
	msleep(200);
	set_servo_position(2, 0);
	msleep(200);
  
 	set_servo_position(1, 1170);
    msleep(200);
    set_servo_position(1, 2000);
	msleep(200);
  
    set_servo_position(2, 1000);
	msleep(200);
	set_servo_position(2, 0);
	msleep(200);
  
    set_servo_position(1, 1170);
	msleep(100);
	set_servo_position(1, 2000);
	msleep(100);
  
    set_servo_position(2, 1000);
	msleep(100);
	set_servo_position(2, 0);
	msleep(100);
  
    set_servo_position(1, 1170);
	msleep(100);
	set_servo_position(1, 2000);
	msleep(100);
  
    set_servo_position(2, 1000);
	msleep(100);
	set_servo_position(2, 0);
	msleep(100);
  
 	set_servo_position(1, 1170);
    msleep(100);
    set_servo_position(1, 2000);
	msleep(100);
  
    set_servo_position(2, 1000);
	msleep(300);
	set_servo_position(2, 0);
	msleep(300);
  
    set_servo_position(1, 1170);
	msleep(300);
	set_servo_position(1, 2000);
	msleep(300);
  
    set_servo_position(2, 1000);
	msleep(100);
	set_servo_position(2, 0);
	msleep(100);
  
  	upLeftArm();
  	upRightArm();
  
  	forward(500, 1000, 0);
  	forward(500, 0, 1000);
  	
  	openLeftClaw();
  	openRightClaw();
  
  	forward(500, -1000, 0);
  	forward(500, 0, -1000);
  
  	closeLeftClaw();
  	closeRightClaw();
  
  	forward(500, 1000, 0);
  	forward(500, 0, 1000);
  
  	openLeftClaw();
  	openRightClaw();
  
  	forward(500, -1000, 0);
  	forward(500, 0, -1000);
  
    closeLeftClaw();
  	closeRightClaw();
  	
  	forward(5000, 5000, -5000);
  
  	printf("I quit!");
  
  	disable_servos();
  	ao();
  
  	printf("goodbye!");
 
  	//terminates the program 
    return 0;
}



//initialization of the functions

void forward(int time, int speed1, int speed2){
  mav(0, speed1);
  mav(3, speed2);
  msleep(time);
}


void openLeftClaw(){

set_servo_position(0, 2038);
msleep(300);
    
}
void closeLeftClaw(){

set_servo_position(0, 1400);
msleep(300);
    
}


void upLeftArm(){

set_servo_position(1, 1170);
msleep(300);
    
}
void downLeftArm(){

set_servo_position(1, 2000);
msleep(300);
    
}


void openRightClaw(){

set_servo_position(3, 900);
msleep(300);
    
}
void closeRightClaw(){

set_servo_position(3, 1600);
msleep(300);
    
}


void upRightArm(){

set_servo_position(2, 1000);
msleep(300);
    
}
void downRightArm(){

set_servo_position(2, 0);
msleep(300);
    
}



