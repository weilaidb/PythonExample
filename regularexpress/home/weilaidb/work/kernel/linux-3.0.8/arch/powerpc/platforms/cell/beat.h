#define _CELLEB_BEAT_H
int64_t beat_get_term_char(uint64_t, uint64_t *, uint64_t *, uint64_t *);
int64_t beat_put_term_char(uint64_t, uint64_t, uint64_t, uint64_t);
int64_t beat_repository_encode(int, const char *, uint64_t[4]);
void beat_restart(char *);
void beat_power_off(void);
void beat_halt(void);
int beat_set_rtc_time(struct rtc_time *);
void beat_get_rtc_time(struct rtc_time *);
ssize_t beat_nvram_get_size(void);
ssize_t beat_nvram_read(char *, size_t, loff_t *);
ssize_t beat_nvram_write(char *, size_t, loff_t *);
int beat_set_xdabr(unsigned long);
void beat_power_save(void);
void beat_kexec_cpu_down(int, int);
