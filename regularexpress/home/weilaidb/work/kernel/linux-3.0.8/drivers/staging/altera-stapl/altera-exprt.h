#define ALTERA_EXPRT_H
u32 altera_shrink(u8 *in, u32 in_length, u8 *out, u32 out_length, s32 version);
int netup_jtag_io_lpt(void *device, int tms, int tdi, int read_tdo);
