;-------------------------------------------------------------------------------
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
; * does not interfere with existing interrupt, cia timer, blitter or copper use
; * tested on A500, A500+, A600, A1200/020, A4000/040
; * tested by replacing loaders on ~50 original games (so far) without issue
; * updates, issues, improvements:  https://github.com/4489
;-------------------------------------------------------------------------------

;-------------------------------------------------------------------------------
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
;-------------------------------------------------------------------------------

    dc.w $49f9,$00bf,$d100,$4bfa,$0190,$4df0,$1800,$7678,$6154,$0214,$007f,$50c3
    dc.w $5602,$0583,$c714,$80fc,$1600,$3200,$303c,$7600,$4840,$7e1b,$6172,$082c
    dc.w $0005,$0f01,$57cf,$fff6,$bdc8,$6724,$1814,$883c,$0006,$3415,$6a32,$d0bc
    dc.w $0100,$0000,$6b12,$7400,$7e55,$082c,$0004,$0f01,$671e,$613a,$51cf,$fff4
    dc.w $9dc8,$200e,$76f8,$0014,$00f9,$4e71,$0214,$0087,$4e71,$8714,$4e71,$4e75
    dc.w $50d5,$3601,$e24a,$e24b,$6402,$5904,$9642,$6732,$6b04,$5504,$4443,$6106
    dc.w $5243,$66fa,$6026,$5304,$1884,$4e71,$5204,$1884,$3c3c,$012c,$47f9,$00df
    dc.w $f024,$1a2b,$ffe2,$ba2b,$ffe2,$67fa,$51ce,$fff4,$4e75,$61e2,$42a9,$0010
    dc.w $377c,$8210,$0072,$36bc,$4000,$377c,$7f00,$007a,$377c,$9500,$007a,$377c
    dc.w $4489,$005a,$377c,$1002,$0078,$2749,$fffc,$36bc,$998b,$36bc,$998b,$7e37
    dc.w $61ae,$4aa9,$0010,$56cf,$fff8,$6774,$2449,$6174,$4843,$b601,$666a,$e19b
    dc.w $4a03,$66b0,$7e37,$6190,$082b,$0001,$fffb,$56cf,$fff6,$6754,$36bc,$4000
    dc.w $377c,$1002,$0078,$377c,$0010,$0072,$2449,$2649,$7e0a,$6140,$45ea,$0028
    dc.w $614c,$2a03,$7c7f,$282a,$0200,$261a,$6144,$26c3,$51ce,$fff4,$4a85,$6620
    dc.w $45ea,$0200,$51cf,$ffdc,$3a81,$5241,$45f1,$0000,$907c,$1600,$4440,$b1ce
    dc.w $6706,$10da,$5340,$66f6,$6000,$feb8,$0c5a,$4489,$66fa,$0c52,$4489,$67f4
    dc.w $243c,$5555,$5555,$4cda,$0018,$c682,$c882,$b785,$b985,$d683,$8684,$4e75
    dc.w $ffff
