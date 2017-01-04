struct debugifc_mask_item ;
static unsigned int debugifc_count_whitespace(const char *buf,
unsigned int count)
static unsigned int debugifc_count_nonwhitespace(const char *buf,
unsigned int count)
static unsigned int debugifc_isolate_word(const char *buf,unsigned int count,
const char **wstrPtr,
unsigned int *wlenPtr)
static int debugifc_parse_unsigned_number(const char *buf,unsigned int count,
u32 *num_ptr)
static int debugifc_match_keyword(const char *buf,unsigned int count,
const char *keyword)
int pvr2_debugifc_print_info(struct pvr2_hdw *hdw,char *buf,unsigned int acnt)
int pvr2_debugifc_print_status(struct pvr2_hdw *hdw,
char *buf,unsigned int acnt)
static int pvr2_debugifc_do1cmd(struct pvr2_hdw *hdw,const char *buf,
unsigned int count)
int pvr2_debugifc_docmd(struct pvr2_hdw *hdw,const char *buf,
unsigned int count)
