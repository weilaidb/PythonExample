#define _SPARC64_STARFIRE_H
extern int this_is_starfire;
extern void check_if_starfire(void);
extern int starfire_hard_smp_processor_id(void);
extern void starfire_hookup(int);
extern unsigned int starfire_translate(unsigned long imap, unsigned int upaid);
