#define CHNLPRIV_
#define CHNL_MAXCHANNELS    32
#define CHNL_PCPY       0
#define CHNL_STATEREADY		0
#define CHNL_STATECANCEL	1
#define CHNL_STATEEOS		2
#define CHNL_IS_INPUT(mode)      (mode & CHNL_MODEFROMDSP)
#define CHNL_IS_OUTPUT(mode)     (!CHNL_IS_INPUT(mode))
#define CHNL_TYPESM         1
struct chnl_info ;
struct chnl_mgrinfo ;
struct chnl_mgrattrs ;
