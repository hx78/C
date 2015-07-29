#ifndef __LOGUTILS__
#define __LOGUTILS__

#include<stdio.h>

#define __DEBUG_FILE__ 

#define __DEBUG__ 

/********��ӡ���ļ�start*********/
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
/********��ӡ����׼���end*********/


/********��ӡ����׼���start*********/

#ifdef __DEBUG__
#define DEBUG(fmt, args...){ \
		printf("FILE: %s, FUNCTION: %s, LINE: %d: "fmt" \n",__FILE__,__FUNCTION__, __LINE__,##args);\
	}	
	
#else
#define DEBUG(fmt,args...)

#endif
/********��ӡ����׼���end*********/


#endif



