#define CONFIG_LMC_IGNORE_HARDWARE_HANDSHAKE 1
static void lmc_set_protocol (lmc_softc_t * const, lmc_ctl_t *);
static void lmc_ds3_init (lmc_softc_t * const);
static void lmc_ds3_default (lmc_softc_t * const);
static void lmc_ds3_set_status (lmc_softc_t * const, lmc_ctl_t *);
static void lmc_ds3_set_100ft (lmc_softc_t * const, int);
static int lmc_ds3_get_link_status (lmc_softc_t * const);
static void lmc_ds3_set_crc_length (lmc_softc_t * const, int);
static void lmc_ds3_set_scram (lmc_softc_t * const, int);
static void lmc_ds3_watchdog (lmc_softc_t * const);
static void lmc_hssi_init (lmc_softc_t * const);
static void lmc_hssi_default (lmc_softc_t * const);
static void lmc_hssi_set_status (lmc_softc_t * const, lmc_ctl_t *);
static void lmc_hssi_set_clock (lmc_softc_t * const, int);
static int lmc_hssi_get_link_status (lmc_softc_t * const);
static void lmc_hssi_set_link_status (lmc_softc_t * const, int);
static void lmc_hssi_set_crc_length (lmc_softc_t * const, int);
static void lmc_hssi_watchdog (lmc_softc_t * const);
static void lmc_ssi_init (lmc_softc_t * const);
static void lmc_ssi_default (lmc_softc_t * const);
static void lmc_ssi_set_status (lmc_softc_t * const, lmc_ctl_t *);
static void lmc_ssi_set_clock (lmc_softc_t * const, int);
static void lmc_ssi_set_speed (lmc_softc_t * const, lmc_ctl_t *);
static int lmc_ssi_get_link_status (lmc_softc_t * const);
static void lmc_ssi_set_link_status (lmc_softc_t * const, int);
static void lmc_ssi_set_crc_length (lmc_softc_t * const, int);
static void lmc_ssi_watchdog (lmc_softc_t * const);
static void lmc_t1_init (lmc_softc_t * const);
static void lmc_t1_default (lmc_softc_t * const);
static void lmc_t1_set_status (lmc_softc_t * const, lmc_ctl_t *);
static int lmc_t1_get_link_status (lmc_softc_t * const);
static void lmc_t1_set_circuit_type (lmc_softc_t * const, int);
static void lmc_t1_set_crc_length (lmc_softc_t * const, int);
static void lmc_t1_set_clock (lmc_softc_t * const, int);
static void lmc_t1_watchdog (lmc_softc_t * const);
static void lmc_dummy_set_1 (lmc_softc_t * const, int);
static void lmc_dummy_set2_1 (lmc_softc_t * const, lmc_ctl_t *);
static inline void write_av9110_bit (lmc_softc_t *, int);
static void write_av9110(lmc_softc_t *, u32, u32, u32, u32, u32);
lmc_media_t lmc_ds3_media = ;
lmc_media_t lmc_hssi_media = ;
lmc_media_t lmc_ssi_media = ;
lmc_media_t lmc_t1_media = ;
static void
lmc_dummy_set_1 (lmc_softc_t * const sc, int a)
static void
lmc_dummy_set2_1 (lmc_softc_t * const sc, lmc_ctl_t * a)
static void
lmc_hssi_init (lmc_softc_t * const sc)
static void
lmc_hssi_default (lmc_softc_t * const sc)
static void
lmc_hssi_set_status (lmc_softc_t * const sc, lmc_ctl_t * ctl)
static void
lmc_hssi_set_clock (lmc_softc_t * const sc, int ie)
static int
lmc_hssi_get_link_status (lmc_softc_t * const sc)
static void
lmc_hssi_set_link_status (lmc_softc_t * const sc, int state)
static void
lmc_hssi_set_crc_length (lmc_softc_t * const sc, int state)
static void
lmc_hssi_watchdog (lmc_softc_t * const sc)
static void
lmc_ds3_set_100ft (lmc_softc_t * const sc, int ie)
static void
lmc_ds3_default (lmc_softc_t * const sc)
static void
lmc_ds3_set_status (lmc_softc_t * const sc, lmc_ctl_t * ctl)
static void
lmc_ds3_init (lmc_softc_t * const sc)
static void
lmc_ds3_set_scram (lmc_softc_t * const sc, int ie)
static int
lmc_ds3_get_link_status (lmc_softc_t * const sc)
static void
lmc_ds3_set_crc_length (lmc_softc_t * const sc, int state)
static void
lmc_ds3_watchdog (lmc_softc_t * const sc)
static void lmc_ssi_init(lmc_softc_t * const sc)
static void
lmc_ssi_default (lmc_softc_t * const sc)
static void
lmc_ssi_set_status (lmc_softc_t * const sc, lmc_ctl_t * ctl)
static void
lmc_ssi_set_clock (lmc_softc_t * const sc, int ie)
static void
lmc_ssi_set_speed (lmc_softc_t * const sc, lmc_ctl_t * ctl)
static int
lmc_ssi_get_link_status (lmc_softc_t * const sc)
static void
lmc_ssi_set_link_status (lmc_softc_t * const sc, int state)
static void
lmc_ssi_set_crc_length (lmc_softc_t * const sc, int state)
static inline void
write_av9110_bit (lmc_softc_t * sc, int c)
static void write_av9110(lmc_softc_t *sc, u32 n, u32 m, u32 v, u32 x, u32 r)
static void lmc_ssi_watchdog(lmc_softc_t * const sc)
static void
lmc_t1_write (lmc_softc_t * const sc, int a, int d)
static void
lmc_t1_init (lmc_softc_t * const sc)
static void
lmc_t1_default (lmc_softc_t * const sc)
static void
lmc_t1_set_status (lmc_softc_t * const sc, lmc_ctl_t * ctl)
static int
lmc_t1_get_link_status (lmc_softc_t * const sc)
static void
lmc_t1_set_circuit_type (lmc_softc_t * const sc, int ie)
static void
lmc_t1_set_crc_length (lmc_softc_t * const sc, int state)
static void
lmc_t1_set_clock (lmc_softc_t * const sc, int ie)
static void
lmc_t1_watchdog (lmc_softc_t * const sc)
static void
lmc_set_protocol (lmc_softc_t * const sc, lmc_ctl_t * ctl)
