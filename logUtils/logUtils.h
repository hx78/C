#ifndef __LOGUTILS__
#define __LOGUTILS__

#include<stdio.h>

#define __DEBUG_FILE__ 

#define __DEBUG__ 

/********打印到文件start*********/
#ifdef __DEBUG_FILE__

#define DEBUG_FILE(fmt, args...) { \
		FILE *fd = NULL;\
		fd = fopen("log","a+");\
		if(!fd)\
			return;\
		fprintf(fd,"FILE: %s, FUNCTION: %s, LINE: %d: "fmt" \n",__FILE__,__FUNCTION__, __LINE__,##args);\
		fclose(fd);\
		fd = NULL;\
	}
	
#else
#define DEBUG_FILE(fmt,args...)

#endif
/********打印到标准输出end*********/


/********打印到标准输出start*********/

#ifdef __DEBUG__
#define DEBUG(fmt, args...){ \
		printf("FILE: %s, FUNCTION: %s, LINE: %d: "fmt" \n",__FILE__,__FUNCTION__, __LINE__,##args);\
	}	
	
#else
#define DEBUG(fmt,args...)

#endif
/********打印到标准输出end*********/


#endif



