#if HAVE_DIRENT_H
# include <dirent.h>
# define NAMLEN(dirent) strlen((dirent)->d_name)
# define dirent direct
# define NAMLEN(dirent) (dirent)->d_namlen
# if HAVE_SYS_NDIR_H
#  include <sys/ndir.h>
# endif
# if HAVE_SYS_DIR_H
#  include <sys/dir.h>
# endif
# if HAVE_NDIR_H
#  include <ndir.h>
# endif
#define	ISDOT(dp) \
(dp->d_name[0] == '.' && (dp->d_name[1] == '\0' || \
(dp->d_name[1] == '.' && dp->d_name[2] == '\0')))
#define	dirfd(dirp)     ((dirp)->dd_fd)
char *
getcwd(pt, size)
char *pt;
size_t size;
