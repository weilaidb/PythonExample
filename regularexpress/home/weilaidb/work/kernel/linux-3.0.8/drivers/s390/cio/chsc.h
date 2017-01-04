#define S390_CHSC_H
#define CHSC_SDA_OC_MSS   0x2
struct chsc_header  __attribute__ ((packed));
#define NR_MEASUREMENT_CHARS 5
struct cmg_chars  __attribute__ ((packed));
#define NR_MEASUREMENT_ENTRIES 8
struct cmg_entry  __attribute__ ((packed));
struct channel_path_desc  __attribute__ ((packed));
struct channel_path_desc_fmt1  __attribute__ ((packed));
struct channel_path;
struct css_chsc_char __attribute__((packed));
extern struct css_chsc_char css_chsc_characteristics;
struct chsc_ssd_info ;
struct chsc_scpd  __attribute__ ((packed));
extern int chsc_get_ssd_info(struct subchannel_id schid,
struct chsc_ssd_info *ssd);
extern int chsc_determine_css_characteristics(void);
extern int chsc_init(void);
extern void chsc_init_cleanup(void);
extern int chsc_enable_facility(int);
struct channel_subsystem;
extern int chsc_secm(struct channel_subsystem *, int);
int __chsc_do_secm(struct channel_subsystem *css, int enable);
int chsc_chp_vary(struct chp_id chpid, int on);
int chsc_determine_channel_path_desc(struct chp_id chpid, int fmt, int rfmt,
int c, int m, void *page);
int chsc_determine_base_channel_path_desc(struct chp_id chpid,
struct channel_path_desc *desc);
int chsc_determine_fmt1_channel_path_desc(struct chp_id chpid,
struct channel_path_desc_fmt1 *desc);
void chsc_chp_online(struct chp_id chpid);
void chsc_chp_offline(struct chp_id chpid);
int chsc_get_channel_measurement_chars(struct channel_path *chp);
int chsc_error_from_response(int response);
int chsc_siosl(struct subchannel_id schid);
