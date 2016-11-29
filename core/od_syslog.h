#ifndef OD_SYSLOG_H_
#define OD_SYSLOG_H_

/*
 * odissey.
 *
 * PostgreSQL connection pooler and request router.
*/

typedef struct od_syslog_t od_syslog_t;

typedef enum {
	OD_SYSLOG_INFO,
	OD_SYSLOG_ERROR,
	OD_SYSLOG_DEBUG
} od_syslogprio_t;

struct od_syslog_t {
	int in_use;
};

static inline void
od_syslog_init(od_syslog_t *syslog) {
	syslog->in_use = 0;
}

int  od_syslog_open(od_syslog_t*, char*, char*);
void od_syslog_close(od_syslog_t*);
void od_syslog(od_syslog_t*, od_syslogprio_t, char*);

#endif