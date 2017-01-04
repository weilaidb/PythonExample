static unsigned char cfg_byte = GAYLE_CFG_0V|GAYLE_CFG_150NS;
void pcmcia_reset(void)
EXPORT_SYMBOL(pcmcia_reset);
int pcmcia_copy_tuple(unsigned char tuple_id, void *tuple, int max_len)
EXPORT_SYMBOL(pcmcia_copy_tuple);
void pcmcia_program_voltage(int voltage)
EXPORT_SYMBOL(pcmcia_program_voltage);
void pcmcia_access_speed(int speed)
EXPORT_SYMBOL(pcmcia_access_speed);
void pcmcia_write_enable(void)
EXPORT_SYMBOL(pcmcia_write_enable);
void pcmcia_write_disable(void)
EXPORT_SYMBOL(pcmcia_write_disable);
