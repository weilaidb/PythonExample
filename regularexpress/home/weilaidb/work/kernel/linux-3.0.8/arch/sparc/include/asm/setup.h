#define _SPARC_SETUP_H
#if defined(__sparc__) && defined(__arch64__)
# define COMMAND_LINE_SIZE 2048
# define COMMAND_LINE_SIZE 256
extern unsigned char boot_cpu_id;
extern unsigned char boot_cpu_id4;
