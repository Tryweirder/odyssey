**machinarium**

Machinarium allows to create fast networked and event-driven asynchronous applications in
synchronous/procedural manner instead of using traditional callback approach.

The library is based on using and combining OS threads (pthreads) and efficient cooperative
multi-tasking primitives (coroutines). Each coroutine executed using own stack and scheduling
is transparently driven by event loop logic (epoll).
