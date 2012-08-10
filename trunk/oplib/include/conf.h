#ifndef _CONF_H_
#define _CONF_H_

int conf_init(const char *conf);
int get_conf_int(const char *str, int def);
char *get_conf_str(const char *str, const char *def);

#endif
