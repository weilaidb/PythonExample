#define	_bcmsrom_h_
extern int srom_var_init(si_t *sih, uint bus, void *curmap,
char **vars, uint *count);
extern int srom_read(si_t *sih, uint bus, void *curmap,
uint byteoff, uint nbytes, u16 *buf, bool check_crc);
extern int srom_parsecis(u8 **pcis, uint ciscnt,
char **vars, uint *count);
