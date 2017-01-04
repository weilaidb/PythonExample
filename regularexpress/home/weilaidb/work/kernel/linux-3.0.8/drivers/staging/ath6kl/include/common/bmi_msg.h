#define __BMI_MSG_H__
#define BMI_DATASZ_MAX                      256
#define BMI_NO_COMMAND                      0
#define BMI_DONE                            1
#define BMI_READ_MEMORY                     2
#define BMI_WRITE_MEMORY                    3
#define BMI_EXECUTE                         4
#define BMI_SET_APP_START                   5
#define BMI_READ_SOC_REGISTER               6
#define BMI_WRITE_SOC_REGISTER              7
#define BMI_GET_TARGET_ID                  8
#define BMI_GET_TARGET_INFO                8
PREPACK struct bmi_target_info  POSTPACK;
#define TARGET_VERSION_SENTINAL 0xffffffff
#define TARGET_TYPE_AR6001 1
#define TARGET_TYPE_AR6002 2
#define TARGET_TYPE_AR6003 3
#define BMI_ROMPATCH_INSTALL               9
#define BMI_ROMPATCH_UNINSTALL             10
#define BMI_ROMPATCH_ACTIVATE              11
#define BMI_ROMPATCH_DEACTIVATE            12
#define BMI_LZ_STREAM_START                13
#define BMI_LZ_DATA                        14
