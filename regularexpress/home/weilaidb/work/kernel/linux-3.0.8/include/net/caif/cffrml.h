#define CFFRML_H_
struct cffrml;
struct cflayer *cffrml_create(u16 phyid, bool use_fcs);
void cffrml_free(struct cflayer *layr);
void cffrml_set_uplayer(struct cflayer *this, struct cflayer *up);
void cffrml_set_dnlayer(struct cflayer *this, struct cflayer *dn);
void cffrml_put(struct cflayer *layr);
void cffrml_hold(struct cflayer *layr);
int cffrml_refcnt_read(struct cflayer *layr);
