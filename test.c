#include "log.h"

int main()
{
	FILE *fp=0;
	fp=fopen("log.txt","a");
	log_set_fp(fp);
	
	log_trace("Hello %s", "world");
	fclose(fp);
	return 0;
}
