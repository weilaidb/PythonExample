int		sisfb_mode_rate_to_dclock(struct SiS_Private *SiS_Pr,
unsigned char modeno, unsigned char rateindex);
int		sisfb_mode_rate_to_ddata(struct SiS_Private *SiS_Pr, unsigned char modeno,
unsigned char rateindex, struct fb_var_screeninfo *var);
bool		sisfb_gettotalfrommode(struct SiS_Private *SiS_Pr, unsigned char modeno,
int *htotal, int *vtotal, unsigned char rateindex);
extern bool	SiSInitPtr(struct SiS_Private *SiS_Pr);
extern bool	SiS_SearchModeID(struct SiS_Private *SiS_Pr, unsigned short *ModeNo,
unsigned short *ModeIdIndex);
extern void	SiS_Generic_ConvertCRData(struct SiS_Private *SiS_Pr, unsigned char *crdata,
int xres, int yres, struct fb_var_screeninfo *var, bool writeres);
int
sisfb_mode_rate_to_dclock(struct SiS_Private *SiS_Pr, unsigned char modeno,
unsigned char rateindex)
int
sisfb_mode_rate_to_ddata(struct SiS_Private *SiS_Pr, unsigned char modeno,
unsigned char rateindex, struct fb_var_screeninfo *var)
bool
sisfb_gettotalfrommode(struct SiS_Private *SiS_Pr, unsigned char modeno, int *htotal,
int *vtotal, unsigned char rateindex)
