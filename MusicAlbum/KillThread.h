#ifndef _KILLTHREAD_H_
#define _KILLTHREAD_H_

#include <pthread.h>
#include <stdio.h>
#include <sys/types.h>
#include <signal.h>
#include <errno.h>

void Kill_Thread(pthread_t pthead);

#endif