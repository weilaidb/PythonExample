void t3e3_set_frame_type(struct channel *sc, u32 mode)
void t3e3_set_loopback(struct channel *sc, u32 mode)
void t3e3_reg_read(struct channel *sc, u32 *reg, u32 *val)
void t3e3_reg_write(struct channel *sc, u32 *reg)
void t3e3_port_get(struct channel *sc, t3e3_param_t *param)
void t3e3_port_set(struct channel *sc, t3e3_param_t *param)
void t3e3_port_get_stats(struct channel *sc,
t3e3_stats_t *stats)
void t3e3_port_del_stats(struct channel *sc)
void t3e3_if_config(struct channel *sc, u32 cmd, char *set,
t3e3_resp_t *ret, int *rlen)
void t3e3_sc_init(struct channel *sc)
