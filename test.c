#include   "types.h"
#include   "stat.h"
#include   "user.h"
#include   "fcntl.h"
int main (int argc,char *argv[]){

    if( argc >= 0 )
    {
      
       settickets(atoi(argv[1]));
       
    }
    else
    {
       settickets(1);
    }
    
}
