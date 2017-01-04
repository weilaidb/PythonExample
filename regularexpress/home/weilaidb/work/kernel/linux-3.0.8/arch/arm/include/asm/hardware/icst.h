#define ASMARM_HARDWARE_ICST_H
struct icst_params ;
struct icst_vco ;
unsigned long icst_hz(const struct icst_params *p, struct icst_vco vco);
struct icst_vco icst_hz_to_vco(const struct icst_params *p, unsigned long freq);
#define ICST307_VCO_MIN	6000000
#define ICST307_VCO_MAX	200000000
extern const unsigned char icst307_s2div[];
extern const unsigned char icst307_idx2s[];
#define ICST525_VCO_MIN		10000000
#define ICST525_VCO_MAX_3V	200000000
#define ICST525_VCO_MAX_5V	320000000
extern const unsigned char icst525_s2div[];
extern const unsigned char icst525_idx2s[];
