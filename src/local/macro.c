#define STATIC_OVL static
#define FDECL(f, p) f p

#ifdef PRUNE
#define fptr(x) 0
#else
#define fptr(x) x
#endif
