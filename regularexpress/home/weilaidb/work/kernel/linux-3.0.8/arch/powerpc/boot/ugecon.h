#define __UGECON_H
extern void *ug_probe(void);
extern void ug_putc(char ch);
extern void ug_console_write(const char *buf, int len);
