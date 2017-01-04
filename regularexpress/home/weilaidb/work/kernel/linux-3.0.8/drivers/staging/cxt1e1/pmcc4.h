#define _INC_PMCC4_H_
#if defined(__FreeBSD__) || defined(__NetBSD__)
typedef int status_t;
#define SBE_DRVR_FAIL     0
#define SBE_DRVR_SUCCESS  1
#define COMET_OFFSET(x) (0x80000+(x)*0x10000)
#define EEPROM_OFFSET   0xC0000
#define CPLD_OFFSET     0xD0000
struct pmcc4_timeslot_param
;
struct c4_musycc_param
;
#define sbeE1RMAI      0x100
#define sbeYelAlm      0x04
#define sbeRedAlm      0x02
#define sbeAISAlm      0x01
#define sbeE1errSMF    0x02
#define sbeE1CRC       0x01
char       *get_hdlc_name (hdlc_device *);
void        c4_cleanup (void);
status_t    c4_chan_up (ci_t *, int channum);
status_t    c4_del_chan_stats (int channum);
status_t    c4_del_chan (int channum);
status_t    c4_get_iidinfo (ci_t * ci, struct sbe_iid_info * iip);
int         c4_is_chan_up (int channum);
void       *getuserbychan (int channum);
void        pci_flush_write (ci_t * ci);
void        sbecom_set_loglevel (int debuglevel);
char       *sbeid_get_bdname (ci_t * ci);
void        sbeid_set_bdtype (ci_t * ci);
void        sbeid_set_hdwbid (ci_t * ci);
u_int32_t   sbeCrc (u_int8_t *, u_int32_t, u_int32_t, u_int32_t *);
void        VMETRO_TRACE (void *);
void        VMETRO_TRIGGER (ci_t *, int);
#if defined (SBE_ISR_TASKLET)
void        musycc_intr_bh_tasklet (ci_t *);
