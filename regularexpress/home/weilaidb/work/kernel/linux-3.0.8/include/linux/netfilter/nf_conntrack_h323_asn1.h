#define _NF_CONNTRACK_HELPER_H323_ASN1_H_
typedef struct  Q931;
#define H323_ERROR_NONE 0
#define H323_ERROR_STOP 1
#define H323_ERROR_BOUND -1
#define H323_ERROR_RANGE -2
int DecodeRasMessage(unsigned char *buf, size_t sz, RasMessage * ras);
int DecodeQ931(unsigned char *buf, size_t sz, Q931 * q931);
int DecodeMultimediaSystemControlMessage(unsigned char *buf, size_t sz,
MultimediaSystemControlMessage *
mscm);
