#define DBDCDDEF_
#define DCD_REGKEY              "Software\\TexasInstruments\\DspBridge\\DCD"
#define DCD_REGISTER_SECTION    ".dcd_register"
#define DCD_MAXPATHLENGTH    255
struct dcd_manager;
struct dcd_key_elem ;
struct dcd_nodeprops ;
struct dcd_genericobj ;
typedef int(*dcd_registerfxn) (struct dsp_uuid *uuid_obj,
enum dsp_dcdobjtype obj_type,
void *handle);
