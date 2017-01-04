#define _VPSS_H
enum vpss_ccdc_source_sel ;
struct vpss_sync_pol ;
struct vpss_pg_frame_size ;
enum vpss_clock_sel ;
int vpss_select_ccdc_source(enum vpss_ccdc_source_sel src_sel);
int vpss_enable_clock(enum vpss_clock_sel clock_sel, int en);
void dm365_vpss_set_sync_pol(struct vpss_sync_pol);
void dm365_vpss_set_pg_frame_size(struct vpss_pg_frame_size);
enum vpss_wbl_sel ;
int vpss_clear_wbl_overflow(enum vpss_wbl_sel wbl_sel);
