#define _POSIX_SOURCE
#define _POSIX_C_SOURCE	199309L
#include<iostream.h>
#include<unistd.h>
int main()
{
	#ifdef_POSIX_VERSION
		cout<<"System confirms to POSIX"<<"_POSIX_VERSION<<endl;
	#else
		cout<<"_POSIX_VERSION undefined\n";
		
	#endif
		return 0;
}
