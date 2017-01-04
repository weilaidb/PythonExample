#define __START_H__
#define _UML_AC(X, Y)	(Y)
#define __UML_AC(X, Y)	(X(Y))
#define _UML_AC(X, Y)	__UML_AC(X, Y)
#define STUB_START _UML_AC(, 0x100000)
#define STUB_CODE _UML_AC((unsigned long), STUB_START)
#define STUB_DATA _UML_AC((unsigned long), STUB_CODE + UM_KERN_PAGE_SIZE)
#define STUB_END _UML_AC((unsigned long), STUB_DATA + UM_KERN_PAGE_SIZE)
struct cpu_task ;
extern struct cpu_task cpu_tasks[];
extern unsigned long low_physmem;
extern unsigned long high_physmem;
extern unsigned long uml_physmem;
extern unsigned long uml_reserved;
extern unsigned long end_vm;
extern unsigned long start_vm;
extern unsigned long long highmem;
extern unsigned long _stext, _etext, _sdata, _edata, __bss_start, _end;
extern unsigned long _unprotected_end;
extern unsigned long brk_start;
extern unsigned long host_task_size;
extern int linux_main(int argc, char **argv);
extern void (*sig_info[])(int, struct uml_pt_regs *);
