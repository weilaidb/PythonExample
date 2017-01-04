#define _L3_H_ 1
struct l3_pins ;
int l3_write(struct l3_pins *adap, u8 addr, u8 *data, int len);
