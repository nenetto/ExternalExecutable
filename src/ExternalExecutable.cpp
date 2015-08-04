// This is an example for a source file
// It calculates the square of a number

// Include example header
#include "ExternalExecutable.h"

  void ExternalExecutable::printConfigVariables(void){

// This line print variables into Config.h header if
// DEBUG_FLAG was set to TRUE during Configuration time
#ifdef ExternalExecutable_DEBUG_FLAG

    fprintf(stdout,"The current version of the program %s is: %i.%i\n",
           ExternalExecutable_PROJECT_NAME, ExternalExecutable_VERSION_MAJOR, ExternalExecutable_VERSION_MINOR);
#else

    fprintf(stdout,"printConfigVariables function\n");

#endif
  }

double ExternalExecutable::myfunction(double x)
{
  return sqrt(x);
}

// Main Function

int main (int argc, char *argv[])
{

  // Shows the Config.h functionality
  ExternalExecutable::printConfigVariables();

  // Uses a function defined in other cpp file of the same project
  double outputValue = ExternalExecutable::myfunction(4.0);

  return 0;
}
