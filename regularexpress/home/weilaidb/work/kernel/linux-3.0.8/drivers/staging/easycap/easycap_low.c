#define GET(X, Y, Z) do  while (0)
#define SET(X, Y, Z) do  while (0)
static const struct stk1160config  stk1160configPAL[256] = ;
static const struct stk1160config stk1160configNTSC[256] = ;
static const struct saa7113config  saa7113configPAL[256] = ;
static const struct saa7113config saa7113configNTSC[256] = ;
static int regget(struct usb_device *pusb_device,
u16 index, void *reg, int reg_size)
static int regset(struct usb_device *pusb_device, u16 index, u16 value)
static int wait_i2c(struct usb_device *p)
int confirm_resolution(struct usb_device *p)
int confirm_stream(struct usb_device *p)
int setup_stk(struct usb_device *p, bool ntsc)
int setup_saa(struct usb_device *p, bool ntsc)
int write_000(struct usb_device *p, u16 set2, u16 set0)
int write_saa(struct usb_device *p, u16 reg0, u16 set0)
int
write_vt(struct usb_device *p, u16 reg0, u16 set0)
int read_vt(struct usb_device *p, u16 reg0)
int write_300(struct usb_device *p)
int check_saa(struct usb_device *p, bool ntsc)
int merit_saa(struct usb_device *p)
int ready_saa(struct usb_device *p)
int check_stk(struct usb_device *p, bool ntsc)
int read_saa(struct usb_device *p, u16 reg0)
int read_stk(struct usb_device *p, u32 reg0)
int
select_input(struct usb_device *p, int input, int mode)
int set_resolution(struct usb_device *p,
u16 set0, u16 set1, u16 set2, u16 set3)
int start_100(struct usb_device *p)
int stop_100(struct usb_device *p)
int wakeup_device(struct usb_device *pusb_device)
int
audio_setup(struct easycap *peasycap)
int check_vt(struct usb_device *pusb_device)
int audio_gainset(struct usb_device *pusb_device, s8 loud)
int audio_gainget(struct usb_device *pusb_device)
