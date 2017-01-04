#define __NO_VERSION__
#define COMEDI32_CHANINFO _IOR(CIO, 3, struct comedi32_chaninfo_struct)
#define COMEDI32_RANGEINFO _IOR(CIO, 8, struct comedi32_rangeinfo_struct)
#define COMEDI32_CMD _IOR(CIO, 9, struct comedi32_cmd_struct)
#define COMEDI32_CMDTEST _IOR(CIO, 10, struct comedi32_cmd_struct)
#define COMEDI32_INSNLIST _IOR(CIO, 11, struct comedi32_insnlist_struct)
#define COMEDI32_INSN _IOR(CIO, 12, struct comedi32_insn_struct)
struct comedi32_chaninfo_struct ;
struct comedi32_rangeinfo_struct ;
struct comedi32_cmd_struct ;
struct comedi32_insn_struct ;
struct comedi32_insnlist_struct ;
static int translated_ioctl(struct file *file, unsigned int cmd,
unsigned long arg)
static int compat_chaninfo(struct file *file, unsigned long arg)
static int compat_rangeinfo(struct file *file, unsigned long arg)
static int get_compat_cmd(struct comedi_cmd __user *cmd,
struct comedi32_cmd_struct __user *cmd32)
static int put_compat_cmd(struct comedi32_cmd_struct __user *cmd32,
struct comedi_cmd __user *cmd)
static int compat_cmd(struct file *file, unsigned long arg)
static int compat_cmdtest(struct file *file, unsigned long arg)
static int get_compat_insn(struct comedi_insn __user *insn,
struct comedi32_insn_struct __user *insn32)
static int compat_insnlist(struct file *file, unsigned long arg)
static int compat_insn(struct file *file, unsigned long arg)
static inline int raw_ioctl(struct file *file, unsigned int cmd,
unsigned long arg)
long comedi_compat_ioctl(struct file *file, unsigned int cmd, unsigned long arg)
