#define AVCODEC_CBRT_DATA_H
#if CONFIG_HARDCODED_TABLES
ff_cbrt_tableinit_fixed
ff_cbrt_tableinit
extern const uint32_t ff_cbrt_tab[1 << 13];
extern const uint32_t ff_cbrt_tab_fixed[1 << 13];
ff_cbrt_tableinit;
ff_cbrt_tableinit_fixed;
extern uint32_t ff_cbrt_tab[1 << 13];
extern uint32_t ff_cbrt_tab_fixed[1 << 13];
