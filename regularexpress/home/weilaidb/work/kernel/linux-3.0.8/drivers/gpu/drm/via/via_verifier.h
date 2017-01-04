#define _VIA_VERIFIER_H_
typedef enum  drm_via_sequence_t;
typedef struct  drm_via_state_t;
extern int via_verify_command_stream(const uint32_t *buf, unsigned int size,
struct drm_device *dev, int agp);
extern int via_parse_command_stream(struct drm_device *dev, const uint32_t *buf,
unsigned int size);
