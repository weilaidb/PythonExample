#define AUTOSENSE
#define PSEUDO_DMA
#define RESET_BOOT
#define DRIVER_SETUP
extern void via_scsi_clear(void);
static void mac_scsi_reset_boot(struct Scsi_Host *instance);
static int setup_called = 0;
static int setup_can_queue = -1;
static int setup_cmd_per_lun = -1;
static int setup_sg_tablesize = -1;
static int setup_use_pdma = -1;
static int setup_use_tagged_queuing = -1;
static int setup_hostid = -1;
#define TOSHIBA_DELAY
#define	AFTER_RESET_DELAY	(5*HZ/2)
#define	AFTER_RESET_DELAY	(HZ/2)
static volatile unsigned char *mac_scsi_regp = NULL;
static volatile unsigned char *mac_scsi_drq  = NULL;
static volatile unsigned char *mac_scsi_nodrq = NULL;
static int __init mac_scsi_setup(char *str)
__setup("mac5380=", mac_scsi_setup);
#if NDEBUG
static struct Scsi_Host *default_instance;
int macscsi_detect(struct scsi_host_template * tpnt)
int macscsi_release (struct Scsi_Host *shpnt)
static void mac_scsi_reset_boot(struct Scsi_Host *instance)
const char * macscsi_info (struct Scsi_Host *spnt)
#define CP_IO_TO_MEM(s,d,len)				\
__asm__ __volatile__					\
("    cmp.w  #4,%2\n"				\
"    bls    8f\n"					\
"    move.w %1,%%d0\n"				\
"    neg.b  %%d0\n"				\
"    and.w  #3,%%d0\n"				\
"    sub.w  %%d0,%2\n"				\
"    bra    2f\n"					\
" 1: move.b (%0),(%1)+\n"				\
" 2: dbf    %%d0,1b\n"				\
"    move.w %2,%%d0\n"				\
"    lsr.w  #5,%%d0\n"				\
"    bra    4f\n"					\
" 3: move.l (%0),(%1)+\n"				\
"31: move.l (%0),(%1)+\n"				\
"32: move.l (%0),(%1)+\n"				\
"33: move.l (%0),(%1)+\n"				\
"34: move.l (%0),(%1)+\n"				\
"35: move.l (%0),(%1)+\n"				\
"36: move.l (%0),(%1)+\n"				\
"37: move.l (%0),(%1)+\n"				\
" 4: dbf    %%d0,3b\n"				\
"    move.w %2,%%d0\n"				\
"    lsr.w  #2,%%d0\n"				\
"    and.w  #7,%%d0\n"				\
"    bra    6f\n"					\
" 5: move.l (%0),(%1)+\n"				\
" 6: dbf    %%d0,5b\n"				\
"    and.w  #3,%2\n"				\
"    bra    8f\n"					\
" 7: move.b (%0),(%1)+\n"				\
" 8: dbf    %2,7b\n"				\
"    moveq.l #0, %2\n"				\
" 9: \n"						\
".section .fixup,\"ax\"\n"				\
"    .even\n"					\
"90: moveq.l #1, %2\n"				\
"    jra 9b\n"					\
".previous\n"					\
".section __ex_table,\"a\"\n"			\
"   .align 4\n"					\
"   .long  1b,90b\n"				\
"   .long  3b,90b\n"				\
"   .long 31b,90b\n"				\
"   .long 32b,90b\n"				\
"   .long 33b,90b\n"				\
"   .long 34b,90b\n"				\
"   .long 35b,90b\n"				\
"   .long 36b,90b\n"				\
"   .long 37b,90b\n"				\
"   .long  5b,90b\n"				\
"   .long  7b,90b\n"				\
".previous"					\
: "=a"(s), "=a"(d), "=d"(len)			\
: "0"(s), "1"(d), "2"(len)				\
: "d0")
static int macscsi_pread (struct Scsi_Host *instance,
unsigned char *dst, int len)
#define CP_MEM_TO_IO(s,d,len)				\
__asm__ __volatile__					\
("    cmp.w  #4,%2\n"				\
"    bls    8f\n"					\
"    move.w %0,%%d0\n"				\
"    neg.b  %%d0\n"				\
"    and.w  #3,%%d0\n"				\
"    sub.w  %%d0,%2\n"				\
"    bra    2f\n"					\
" 1: move.b (%0)+,(%1)\n"				\
" 2: dbf    %%d0,1b\n"				\
"    move.w %2,%%d0\n"				\
"    lsr.w  #5,%%d0\n"				\
"    bra    4f\n"					\
" 3: move.l (%0)+,(%1)\n"				\
"31: move.l (%0)+,(%1)\n"				\
"32: move.l (%0)+,(%1)\n"				\
"33: move.l (%0)+,(%1)\n"				\
"34: move.l (%0)+,(%1)\n"				\
"35: move.l (%0)+,(%1)\n"				\
"36: move.l (%0)+,(%1)\n"				\
"37: move.l (%0)+,(%1)\n"				\
" 4: dbf    %%d0,3b\n"				\
"    move.w %2,%%d0\n"				\
"    lsr.w  #2,%%d0\n"				\
"    and.w  #7,%%d0\n"				\
"    bra    6f\n"					\
" 5: move.l (%0)+,(%1)\n"				\
" 6: dbf    %%d0,5b\n"				\
"    and.w  #3,%2\n"				\
"    bra    8f\n"					\
" 7: move.b (%0)+,(%1)\n"				\
" 8: dbf    %2,7b\n"				\
"    moveq.l #0, %2\n"				\
" 9: \n"						\
".section .fixup,\"ax\"\n"				\
"    .even\n"					\
"90: moveq.l #1, %2\n"				\
"    jra 9b\n"					\
".previous\n"					\
".section __ex_table,\"a\"\n"			\
"   .align 4\n"					\
"   .long  1b,90b\n"				\
"   .long  3b,90b\n"				\
"   .long 31b,90b\n"				\
"   .long 32b,90b\n"				\
"   .long 33b,90b\n"				\
"   .long 34b,90b\n"				\
"   .long 35b,90b\n"				\
"   .long 36b,90b\n"				\
"   .long 37b,90b\n"				\
"   .long  5b,90b\n"				\
"   .long  7b,90b\n"				\
".previous"					\
: "=a"(s), "=a"(d), "=d"(len)			\
: "0"(s), "1"(d), "2"(len)				\
: "d0")
static int macscsi_pwrite (struct Scsi_Host *instance,
unsigned char *src, int len)
static struct scsi_host_template driver_template = ;
