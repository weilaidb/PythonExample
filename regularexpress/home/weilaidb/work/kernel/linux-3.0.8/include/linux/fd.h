#define _LINUX_FD_H
struct floppy_struct ;
#define FDCLRPRM _IO(2, 0x41)
#define FDSETPRM _IOW(2, 0x42, struct floppy_struct)
#define FDSETMEDIAPRM FDSETPRM
#define FDDEFPRM _IOW(2, 0x43, struct floppy_struct)
#define FDGETPRM _IOR(2, 0x04, struct floppy_struct)
#define FDDEFMEDIAPRM FDDEFPRM
#define FDGETMEDIAPRM FDGETPRM
#define	FDMSGON  _IO(2,0x45)
#define	FDMSGOFF _IO(2,0x46)
#define FD_FILL_BYTE 0xF6
struct format_descr ;
#define FDFMTBEG _IO(2,0x47)
#define	FDFMTTRK _IOW(2,0x48, struct format_descr)
#define FDFMTEND _IO(2,0x49)
struct floppy_max_errors ;
#define FDSETEMSGTRESH	_IO(2,0x4a)
#define FDFLUSH  _IO(2,0x4b)
#define FDSETMAXERRS _IOW(2, 0x4c, struct floppy_max_errors)
#define FDGETMAXERRS _IOR(2, 0x0e, struct floppy_max_errors)
typedef char floppy_drive_name[16];
#define FDGETDRVTYP _IOR(2, 0x0f, floppy_drive_name)
struct floppy_drive_params ;
enum ;
#define FDSETDRVPRM _IOW(2, 0x90, struct floppy_drive_params)
#define FDGETDRVPRM _IOR(2, 0x11, struct floppy_drive_params)
struct floppy_drive_struct ;
#define FDGETDRVSTAT _IOR(2, 0x12, struct floppy_drive_struct)
#define FDPOLLDRVSTAT _IOR(2, 0x13, struct floppy_drive_struct)
enum reset_mode ;
#define FDRESET _IO(2, 0x54)
struct floppy_fdc_state ;
#define FDGETFDCSTAT _IOR(2, 0x15, struct floppy_fdc_state)
struct floppy_write_errors ;
#define FDWERRORCLR  _IO(2, 0x56)
#define FDWERRORGET  _IOR(2, 0x17, struct floppy_write_errors)
#define FDHAVEBATCHEDRAWCMD
struct floppy_raw_cmd ;
#define FDRAWCMD _IO(2, 0x58)
#define FDTWADDLE _IO(2, 0x59)
#define FDEJECT _IO(2, 0x5a)
