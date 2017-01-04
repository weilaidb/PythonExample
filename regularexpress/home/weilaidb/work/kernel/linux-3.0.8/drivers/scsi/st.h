#define _ST_H
struct st_cmdstatus ;
struct scsi_tape;
struct st_request ;
struct st_buffer ;
struct st_modedef ;
#define ST_NBR_MODE_BITS 2
#define ST_NBR_MODES (1 << ST_NBR_MODE_BITS)
#define ST_MODE_SHIFT (7 - ST_NBR_MODE_BITS)
#define ST_MODE_MASK ((ST_NBR_MODES - 1) << ST_MODE_SHIFT)
#define ST_MAX_TAPES 128
#define ST_MAX_TAPE_ENTRIES  (ST_MAX_TAPES << (ST_NBR_MODE_BITS + 1))
struct st_partstat ;
#define ST_NBR_PARTITIONS 4
struct scsi_tape ;
#define USE_PF      1
#define PF_TESTED   2
#define	ST_NOEOF	0
#define ST_FM_HIT       1
#define ST_FM           2
#define ST_EOM_OK       3
#define ST_EOM_ERROR	4
#define	ST_EOD_1        5
#define ST_EOD_2        6
#define ST_EOD		7
#define	ST_IDLE		0
#define	ST_READING	1
#define	ST_WRITING	2
#define ST_READY	0
#define ST_NOT_READY	1
#define ST_NO_TAPE	2
#define ST_UNLOCKED	0
#define ST_LOCKED_EXPLICIT 1
#define ST_LOCKED_AUTO  2
#define ST_LOCK_FAILS   3
#define	QFA_REQUEST_BLOCK	0x02
#define	QFA_SEEK_BLOCK		0x0c
#define ST_DONT_TOUCH  0
#define ST_NO          1
#define ST_YES         2
#define EXTENDED_SENSE_START  18
#define SENSE_FMK   0x80
#define SENSE_EOM   0x40
#define SENSE_ILI   0x20
