#define _LINUX_IRQRETURN_H
enum irqreturn ;
typedef enum irqreturn irqreturn_t;
#define IRQ_RETVAL(x)	((x) != IRQ_NONE)
