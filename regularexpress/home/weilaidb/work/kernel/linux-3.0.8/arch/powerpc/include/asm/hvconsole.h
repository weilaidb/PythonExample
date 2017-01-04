#define _PPC64_HVCONSOLE_H
#define MAX_VIO_PUT_CHARS	16
#define SIZE_VIO_GET_CHARS	16
extern int hvc_get_chars(uint32_t vtermno, char *buf, int count);
extern int hvc_put_chars(uint32_t vtermno, const char *buf, int count);
