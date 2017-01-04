#define _ASM_PMON_H
struct callvectors ;
extern struct callvectors *debug_vectors;
#define pmon_open(name, flags, mode)	debug_vectors->open(name, flage, mode)
#define pmon_close(fd)			debug_vectors->close(fd)
#define pmon_read(fd, buf, count)	debug_vectors->read(fd, buf, count)
#define pmon_write(fd, buf, count)	debug_vectors->write(fd, buf, count)
#define pmon_lseek(fd, off, whence)	debug_vectors->lseek(fd, off, whence)
#define pmon_printf(fmt...)		debug_vectors->printf(fmt)
#define pmon_cacheflush()		debug_vectors->cacheflush()
#define pmon_gets(s)			debug_vectors->gets(s)
#define pmon_cpustart(n, f, sp, gp)	debug_vectors->_s.cpustart(n, f, sp, gp)
#define pmon_smpfork(cp, sp)		debug_vectors->_s.smpfork(cp, sp)
#define pmon_semlock(sem)		debug_vectors->semlock(sem)
#define pmon_semunlock(sem)		debug_vectors->semunlock(sem)
