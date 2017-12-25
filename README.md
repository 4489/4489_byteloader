# 4489_byteloader

a small/flexible/robust hardware byteloader for commodore amiga computers

byteloaders > sectorloaders > trackloaders

this byteloader
* small code size
* portable
* requires no additional memory
* requires no additional stack
* supports multiple drives
* verifies full track integrity on all loads
* no deadlocks
* graceful timeouts
* graceful retries
* respects official hw specs
* compatibility with iffy /rdy drives
* minimizes head transitions
* does not require use of cia timers or blitter
* tested on A500, A500+, A600, A1200/020, A4000/040
* tested by replacing loaders on ~50 original games (so far) without issue
