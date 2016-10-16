#ifndef THREAD_H
#define THREAD_H

struct thread_info {
	uint8_t optimum;
	struct regex_t* regex;
};

void *worker(void *params);
void *monitor_proc(void *unused);

#endif
