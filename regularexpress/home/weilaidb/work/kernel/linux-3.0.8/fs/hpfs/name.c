static inline int not_allowed_char(unsigned char c)
static inline int no_dos_char(unsigned char c)
static inline unsigned char upcase(unsigned char *dir, unsigned char a)
unsigned char hpfs_upcase(unsigned char *dir, unsigned char a)
static inline unsigned char locase(unsigned char *dir, unsigned char a)
int hpfs_chk_name(const unsigned char *name, unsigned *len)
unsigned char *hpfs_translate_name(struct super_block *s, unsigned char *from,
unsigned len, int lc, int lng)
int hpfs_compare_names(struct super_block *s,
const unsigned char *n1, unsigned l1,
const unsigned char *n2, unsigned l2, int last)
int hpfs_is_name_long(const unsigned char *name, unsigned len)
void hpfs_adjust_length(const unsigned char *name, unsigned *len)
