[![Review Assignment Due Date](https://classroom.github.com/assets/deadline-readme-button-22041afd0340ce965d47ae6ef1cefeee28c7c493a6346c4f15d667ab976d596c.svg)](https://classroom.github.com/a/gW4p9-Fp)
# os161SchedulerAssignBaseCode

Design:
RR
The single method is called to force RR

FCFS
No code is run as the defalt methods are FCFS

MLFQ
The scheduler maintains a dynamic per‐thread priority that rises when a thread voluntarily sleeps and falls when it consumes its entire time slice. On each clock tick the scheduler scans the ready queue, promotes the highest‐priority thread to the front, and then yields, ensuring interactive tasks run promptly. 

Implementation: I added an int priority field to struct thread, initialized to a mid‐level value in thread_create(). In thread_switch(), i increment priority (up to MAX_PRIORITY) when newstate == S_SLEEP and decrement it (down to MIN_PRIORITY) when newstate == S_READY. In schedule(), i walk the per‐CPU curcpu->c_runqueue list to find the thread with the highest priority, remove it, reinsert it at the head, and then invoke thread_timeryield().
Benchmark: The following images compare execution times under round‐robin versus our custom schedulers for each test in testbin/.
Most tests caused an error due to memory limitations and otherwise the time taken did not seem to have a significant difference

(codepics/rr.png)

(codepics/FCFS.png)

(codepics/MLFQ.png)