#define _INC_PMC93X6_EEPROM_H_
#if defined (__FreeBSD__) || defined (__NetBSD__)
void        pmc_eeprom_read_buffer (long, long, char *, int);
void        pmc_eeprom_write_buffer (long, long, char *, int);
void        pmc_init_seeprom (u_int32_t, u_int32_t);
char        pmc_verify_cksum (void *);
