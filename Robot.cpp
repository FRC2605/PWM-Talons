#include "Robot.h"

Robot :: Robot ():
	DriveBase ( 2, 14, 0, 1, 3, 15, 1, 0, 40.0, 120.0 ),
	DriveTrain ( & DriveBase ),
	JoyStrafe ( 0 ),
	JoyRotate ( 1 )
{
	
	DriveBase.SetInversion ( false, true, false, true );
	
	DriveTrain.SetMotorScale ( 1.0 );
	
};

Robot :: ~Robot ()
{
};

void Robot :: TeleopInit ()
{
	
	DriveTrain.Enable ();
	
};

void Robot :: TeleopPeriodic ()
{
	
	DriveTrain.SetTranslation ( JoyStrafe.GetX (), - JoyStrafe.GetY () );
	DriveTrain.SetRotation ( JoyRotate.GetX () * 0.5 );
	
	DriveTrain.PushTransform ();
	
};

void Robot :: DisabledInit ()
{
	
	DriveTrain.Disable ();
	
};

START_ROBOT_CLASS ( Robot );
