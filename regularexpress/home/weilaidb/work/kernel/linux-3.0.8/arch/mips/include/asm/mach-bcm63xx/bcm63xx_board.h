#define BCM63XX_BOARD_H_
const char *board_get_name(void);
void board_prom_init(void);
void board_setup(void);
int board_register_devices(void);