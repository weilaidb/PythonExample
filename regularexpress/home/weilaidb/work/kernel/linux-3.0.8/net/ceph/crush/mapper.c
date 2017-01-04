# include <linux/string.h>
# include <linux/slab.h>
# include <linux/bug.h>
# include <linux/kernel.h>
# ifndef dprintk
#  define dprintk(args...)
# endif
# include <string.h>
# include <stdio.h>
# include <stdlib.h>
# include <assert.h>
# define BUG_ON(x) assert(!(x))
# define dprintk(args...)
# define kmalloc(x, f) malloc(x)
# define kfree(x) free(x)
int crush_find_rule(struct crush_map *map, int ruleset, int type, int size)
static int bucket_perm_choose(struct crush_bucket *bucket,
int x, int r)
static int bucket_uniform_choose(struct crush_bucket_uniform *bucket,
int x, int r)
static int bucket_list_choose(struct crush_bucket_list *bucket,
int x, int r)
static int height(int n)
static int left(int x)
static int right(int x)
static int terminal(int x)
static int bucket_tree_choose(struct crush_bucket_tree *bucket,
int x, int r)
static int bucket_straw_choose(struct crush_bucket_straw *bucket,
int x, int r)
static int crush_bucket_choose(struct crush_bucket *in, int x, int r)
static int is_out(struct crush_map *map, __u32 *weight, int item, int x)
static int crush_choose(struct crush_map *map,
struct crush_bucket *bucket,
__u32 *weight,
int x, int numrep, int type,
int *out, int outpos,
int firstn, int recurse_to_leaf,
int *out2)
int crush_do_rule(struct crush_map *map,
int ruleno, int x, int *result, int result_max,
int force, __u32 *weight)
