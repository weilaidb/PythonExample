#define reg_rdwr_h
#define REG_READ(type, addr) (*((volatile type *) (addr)))
#define REG_WRITE(type, addr, val) \
do  while(0)
