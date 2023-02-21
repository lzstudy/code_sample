#ifndef __CKRET_H__
#define __CKRET_H__
__BEGIN_DECLS

/* 参数判断 */
#define CK_PARAM_INFO(cond, val, fmt, ...) \
    do {if(cond) {printf(fmt"\n", ##__VA_ARGS__); return val;}} while(0)

#define CK_PARAM(cond, fmt, ...) \
     do {if(cond) {printf(fmt"\n", ##__VA_ARGS__); return;}} while(0)

#define CK_P(cond) \
    do {if(cond) {return -1;}} while(0)

/* 条件判断 - 带返回值 */
#define CK_RET_INFO(cond, val, fmt, ...) \
    do {if(cond) {printf(fmt"\n", ##__VA_ARGS__); return val;}} while(0)

#define CK_RET(cond, val) \
    do {if(cond) {return val;}} while(0)

/* 条件判断 - 无返回值 */
#define CK_NRET_INFO(cond, fmt, ...) \
    do {if(cond) {printf(fmt"\n", ##__VA_ARGS__); return;}} while(0)

#define CK_NRET(cond) \
    do {if(cond) {return;}} while(0)

/* 条件判断 - GOTO */
#define CK_GOTO_INFO(cond, val, fmt, ...) \
    do {if(cond) {printf(fmt"\n", ##__VA_ARGS__); goto val;}} while(0)

#define CK_GOTO(cond, val) \
    do {if(cond) {goto val;}} while(0)

/* 打印信息 */
#define LOG_I(fmt, ...)          printf(fmt"\n", ##__VA_ARGS__);

__END_DECLS
#endif

