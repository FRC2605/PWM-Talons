#include <WPILib.h>

#include <LARUL.h>

class Robot: public IterativeRobot
{
public:
	
	Robot ();
	~Robot ();
	
private:
	
	void TeleopInit ();
	void TeleopPeriodic ();
	
	void DisabledInit ();
	
	TalonQuadDriveBase DriveBase;
	
	MecanumDriveTrain DriveTrain;
	
	Joystick JoyStrafe;
	Joystick JoyRotate;
	
};
