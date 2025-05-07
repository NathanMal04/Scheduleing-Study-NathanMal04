#ifndef _SCHEDPOLICY_H_
#define _SCHEDPOLICY_H_

typedef enum {
    SCHED_RR,    // round-robin
    SCHED_FCFS,  // first-come, first-served
    SCHED_MLFQ   // multi-level feedback queue
} sched_policy_t;

extern sched_policy_t sched_policy;

#endif
