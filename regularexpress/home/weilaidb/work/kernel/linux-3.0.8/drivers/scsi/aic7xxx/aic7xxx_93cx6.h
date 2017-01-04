#define _AIC7XXX_93CX6_H_
typedef enum  seeprom_chip_t;
struct seeprom_descriptor ;
#define	SEEPROM_INB(sd) \
ahc_inb(sd->sd_ahc, sd->sd_control_offset)
#define	SEEPROM_OUTB(sd, value)					\
do  while(0)
#define	SEEPROM_STATUS_INB(sd) \
ahc_inb(sd->sd_ahc, sd->sd_status_offset)
#define	SEEPROM_DATA_INB(sd) \
ahc_inb(sd->sd_ahc, sd->sd_dataout_offset)
int ahc_read_seeprom(struct seeprom_descriptor *sd, uint16_t *buf,
u_int start_addr, u_int count);
int ahc_write_seeprom(struct seeprom_descriptor *sd, uint16_t *buf,
u_int start_addr, u_int count);
int ahc_verify_cksum(struct seeprom_config *sc);
