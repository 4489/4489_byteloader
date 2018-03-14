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
; * retries on timeouts
; * retries on errors
; * returns errorcode if max_retries exceeded (default: 8)
; * does not interfere with existing interrupt, cia timer, blitter or copper use
; * respects official hw docs and bulletins
; * compatible with iffy /rdy drives
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

    dc.l $49f900bf,$d1004bfa,$01864df0,$18007678,$61540214,$007f50c3,$56020583,$c71480fc
    dc.l $16003200,$303c7600,$48407e1b,$616c082c,$00050f01,$57cffff6,$bdc86724,$1814883c
    dc.l $00063415,$6a2cd0bc,$01000000,$6b127400,$7e55082c,$00040f01,$67186134,$51cffff4
    dc.l $9dc8200e,$76f80014,$00f90214,$00878714,$4e7550d5,$3601e24a,$e24b6402,$59049642
    dc.l $67326b04,$55044443,$61065243,$66fa6026,$53041884,$4e715204,$18843c3c,$012c47f9
    dc.l $00dff024,$1a2bffe2,$ba2bffe2,$67fa51ce,$fff44e75,$61e242a9,$0010377c,$82100072
    dc.l $36bc4000,$277c1002,$7f000078,$377c9500,$007a377c,$4489005a,$2749fffc,$36bc998b
    dc.l $36bc998b,$7e3761b2,$4aa90010,$56cffff8,$67742449,$61744843,$b601666a,$e19b4a03
    dc.l $66b47e37,$6194082b,$0001fffb,$56cffff6,$675436bc,$4000377c,$10020078,$377c0010
    dc.l $00722449,$26497e0a,$614045ea,$0028614c,$2a037c7f,$282a0200,$261a6144,$26c351ce
    dc.l $fff44a85,$662045ea,$020051cf,$ffdc3a81,$524145f1,$0000907c,$16004440,$b1ce6706
    dc.l $10da5340,$66f66000,$fec20c5a,$448966fa,$0c524489,$67f4243c,$55555555,$4cda0018
    dc.l $c682c882,$b785b985,$d6838684,$4e75ffff
