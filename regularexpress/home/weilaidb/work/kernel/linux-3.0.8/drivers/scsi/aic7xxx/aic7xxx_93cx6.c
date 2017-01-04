struct seeprom_cmd ;
static const struct seeprom_cmd seeprom_ewen = ;
static const struct seeprom_cmd seeprom_ewds = ;
static const struct seeprom_cmd seeprom_long_ewen = ;
static const struct seeprom_cmd seeprom_long_ewds = ;
static const struct seeprom_cmd seeprom_write = ;
static const struct seeprom_cmd seeprom_read  = ;
#define CLOCK_PULSE(sd, rdy)				\
while ((SEEPROM_STATUS_INB(sd) & rdy) == 0) 						\
(void)SEEPROM_INB(sd);
static void
send_seeprom_cmd(struct seeprom_descriptor *sd, const struct seeprom_cmd *cmd)
static void
reset_seeprom(struct seeprom_descriptor *sd)
int
ahc_read_seeprom(struct seeprom_descriptor *sd, uint16_t *buf,
u_int start_addr, u_int count)
int
ahc_write_seeprom(struct seeprom_descriptor *sd, uint16_t *buf,
u_int start_addr, u_int count)
int
ahc_verify_cksum(struct seeprom_config *sc)
