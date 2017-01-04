#define __AA_SID_H
struct aa_profile;
u32 aa_alloc_sid(void);
void aa_free_sid(u32 sid);
