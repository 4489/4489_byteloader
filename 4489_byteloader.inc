;---------------------------------------------------------------------------------------
; 4489_byteloader
;
; * small
; * portable
; * self-contained              (uses hardware directly, not OS)
; * load any number of bytes    (odd/even doesn't matter)
; * from any disk position      (odd/even doesn't matter)
; * on any connected drive      (internal/external doesn't matter)
; * to any valid memory address (odd/even/chip/slow/fast doesn't matter)
; * verifies checksums          (retries on mismatch)
; * no deadlocks                (retries on any timeouts or errors)
; * graceful timeouts/retries   (exits with error code if max_retries exceeded)
; * respects official hw docs and bulletins
; * compatible with iffy /rdy drives
; * minimizes head transitions
; * requires no additional memory
; * requires no additional stack
; * does not require use of cia timers or blitter
; * tested on A500, A500+, A600, A1200/020, A4000/040
; * tested by replacing loaders on ~50 original games (so far) without issue
; * updates, issues, improvements:  https://github.com/4489
;---------------------------------------------------------------------------------------

;---------------------------------------------------------------------------------------
; -> d0.l  offset       (0-$dc000)
; -> d1.l  length       (0-$dc000)
; -> d2.l  drive        (0-3)
; -> a0.l  dst address  (anywhere)
; -> a1.l  mfm address  ($198b words)
;
; <- d0.l  == 0         (success)
; <- d0.l  != 0         (error)
;
; <- assume all other registers are trashed
;---------------------------------------------------------------------------------------

    dc.l $4df900bf,$d1007678,$61000182,$0216007f,$50c35602,$0583c716,$4bfa0184,$49f01800
    dc.l $80fc1600,$3200303c,$76004840,$7e1b615a,$082e0005,$0f0157cf,$fff61816,$883c0006
    dc.l $34156a1e,$d0bc0100,$00006b12,$42427e55,$082e0004,$0f01670a,$612651cf,$fff46000
    dc.l $012a50d5,$3601e24a,$e24b6402,$59049642,$67326b04,$55044443,$61065243,$66fa6026
    dc.l $53041c84,$4e715204,$1c843c3c,$012c47f9,$00dff024,$1a2bffe2,$ba2bffe2,$67fa51ce
    dc.l $fff44e75,$61e242a9,$0010377c,$82100072,$36bc4000,$377c7f00,$007a377c,$9500007a
    dc.l $377c4489,$005a377c,$10020078,$2749fffc,$36bc998b,$36bc998b,$7e3761ae,$4aa90010
    dc.l $56cffff8,$67202449,$6120e04b,$4a4366b6,$4843b601,$66107e37,$6190082b,$0001fffb
    dc.l $56cffff6,$66286000,$ff240c5a,$448966fa,$0c524489,$67f4243c,$55555555,$4cda0018
    dc.l $c682c882,$b785b985,$d6838684,$4e7536bc,$4000377c,$10020078,$377c0010,$00722449
    dc.l $26497e0a,$61c445ea,$002861d0,$2a037c7f,$282a0200,$261a61c8,$26c351ce,$fff44a85
    dc.l $66a445ea,$020051cf,$ffdc3a81,$45f10000,$907c1600,$4440b1cc,$670e10da,$534066f6
    dc.l $5241b1cc,$6600feb4,$700076f8,$001600f9,$4e710216,$00874e71,$87164e71,$4e75ffff
