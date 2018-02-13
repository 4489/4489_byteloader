    a small/flexible/robust hardware byteloader for the commodore amiga
    
    * small
    * portable
    * self-contained              (uses hardware directly, not OS)
    * load any number of bytes    (odd/even doesn't matter)
    * from any disk position      (odd/even doesn't matter)
    * on any connected drive      (internal/external doesn't matter)
    * to any valid memory address (odd/even/chip/slow/fast doesn't matter)
    * verifies checksums          (retries on mismatch)
    * no deadlocks                (retries on any timeouts or errors)
    * graceful timeouts/retries   (exits with error code if max_retries exceeded)
    * respects official hw docs and bulletins
    * compatible with iffy /rdy drives
    * minimizes head transitions
    * requires no additional memory
    * requires no additional stack
    * does not require use of cia timers or blitter
    * tested on A500, A500+, A600, A1200/020, A4000/040
    * tested by replacing loaders on ~50 original games (so far) without issue
    * updates, issues, improvements:  https://github.com/4489
