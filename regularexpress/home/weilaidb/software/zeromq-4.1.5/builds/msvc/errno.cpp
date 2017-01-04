#if defined _WIN32_WCE
int errno;
int _doserrno;
int _sys_nerr;
char* error_desc_buff = NULL;
char* strerror(int errno)
