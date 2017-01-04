#define _NAMES_H
extern const char *names_vendor(u_int16_t vendorid);
extern const char *names_product(u_int16_t vendorid, u_int16_t productid);
extern const char *names_class(u_int8_t classid);
extern const char *names_subclass(u_int8_t classid, u_int8_t subclassid);
extern const char *names_protocol(u_int8_t classid, u_int8_t subclassid, u_int8_t protocolid);
extern const char *names_audioterminal(u_int16_t termt);
extern const char *names_hid(u_int8_t hidd);
extern const char *names_reporttag(u_int8_t rt);
extern const char *names_huts(unsigned int data);
extern const char *names_hutus(unsigned int data);
extern const char *names_langid(u_int16_t langid);
extern const char *names_physdes(u_int8_t ph);
extern const char *names_bias(u_int8_t b);
extern const char *names_countrycode(unsigned int countrycode);
extern int  names_init(char *n);
extern void names_free(void);
