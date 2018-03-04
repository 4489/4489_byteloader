;---------------------------------------------------------------------------------------
; 4489_byteloader
;
; * small
; * portable
; * self-contained
; * load any number of bytes
; * from any disk position
; * on any connected drive
; * to any memory address
; * verifies checksums
; * no deadlocks
; * graceful timeouts/retries
; * respects official hw docs and bulletins
; * compatible with iffy /rdy drives
; * minimizes head transitions
; * does not interfere with existing interrupts, cia timers, blitter or copper use
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

    dc.l $4df900bf,$d1007678,$6100015e,$0216007f,$50c35602,$0583c716,$4bfa0184,$49f01800
    dc.l $80fc1600,$3200303c,$76004840,$7e1b615a,$082e0005,$0f0157cf,$fff61816,$883c0006
    dc.l $34156a1e,$d0bc0100,$00006b12,$42427e55,$082e0004,$0f01670a,$612651cf,$fff46000
    dc.l $010650d5,$3601e24a,$e24b6402,$59049642,$67326b04,$55044443,$61065243,$66fa6026
    dc.l $53041c84,$4e715204,$1c843c3c,$012c47f9,$00dff024,$1a2bffe2,$ba2bffe2,$67fa51ce
    dc.l $fff44e75,$61e242a9,$0010377c,$82100072,$36bc4000,$377c7f00,$007a377c,$9500007a
    dc.l $377c4489,$005a377c,$10020078,$2749fffc,$36bc998b,$36bc998b,$7e374aa9,$0010660a
    dc.l $61a851cf,$fff66000,$ff442449,$6100008c,$4843b601,$66f0e19b,$4a0366aa,$7e37618a
    dc.l $082b0001,$fffb56cf,$fff667da,$36bc4000,$377c1002,$0078377c,$00100072,$24492649
    dc.l $7e0a6156,$45ea0028,$61622a03,$7c7f282a,$0200261a,$615a26c3,$51cefff4,$4a8566a6
    dc.l $45ea0200,$51cfffdc,$3a8145f1,$0000907c,$16004440,$b1cc670c,$10da5340,$66f65241
    dc.l $b1cc6682,$700076f8,$001600f9,$4e710216,$00874e71,$87164e71,$4e750c5a,$448966fa
    dc.l $0c524489,$67f4243c,$55555555,$4cda0018,$c682c882,$b785b985,$d6838684,$4e75ffff
