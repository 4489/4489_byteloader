;---------------------------------------------------------------------------------------
; 4489_byteloader
;
; * small code size
; * portable
; * requires no additional memory
; * requires no additional stack
; * supports multiple drives
; * verifies data checksums
; * no deadlocks
; * graceful timeouts
; * graceful retries
; * respects official hw specs
; * compatibile with iffy /rdy drives
; * minimizes head transitions
; * does not require use of cia timers or blitter
; * tested on A500, A500+, A600, A1200/020, A4000/040
; * tested by replacing loaders on ~50 original games (so far) without issue
; * updates, issues, improvements:  https://github.com/4489
;---------------------------------------------------------------------------------------

;---------------------------------------------------------------------------------------
; -> d0.l  offset       (0-dc000)
; -> d1.l  length       (0-dc000)
; -> d2.l  drive        (0-3)
; -> a0.l  dst address
; -> a1.l  mfm address  (0x198b words)
;
; <- d0.l  == 0         (success)
; <- d0.l  != 0         (error)
;
; <- assume all other registers are trashed
;---------------------------------------------------------------------------------------

    dc.l $4df900bf,$d1007678,$61000186,$0216007f,$50c35602,$0583c716,$4bfa0188,$49f01800
    dc.l $80fc1600,$3200303c,$76004840,$7e1b082e,$00050f01,$67066154,$51cffff4,$1816883c
    dc.l $00063415,$6a1ed0bc,$01000000,$6b124242,$7e55082e,$00040f01,$670a6126,$51cffff4
    dc.l $6000012c,$50d53601,$e24ae24b,$64025904,$96426732,$6b045504,$44436106,$524366fa
    dc.l $60265304,$1c844e71,$52041c84,$3c3c012c,$47f900df,$f0241a2b,$ffe2ba2b,$ffe267fa
    dc.l $51cefff4,$4e7561e2,$42a90010,$377c8210,$007236bc,$4000377c,$7f00007a,$377c9500
    dc.l $007a377c,$4489005a,$377c1002,$00782749,$fffc36bc,$998b36bc,$998b7e37,$4aa90010
    dc.l $660861a8,$51cffff6,$60202449,$6120e04b,$4a4366b4,$4843b601,$66107e37,$082b0001
    dc.l $fffb662e,$618651cf,$fff46000,$ff200c5a,$448966fa,$0c524489,$67f4243c,$55555555
    dc.l $4cda0018,$c682c882,$b785b985,$d6838684,$4e7536bc,$4000377c,$10020078,$377c0010
    dc.l $00722449,$26497e0a,$61c445ea,$002861d0,$2a037c7f,$282a0200,$261a61c8,$26c351ce
    dc.l $fff44a85,$66a445ea,$020051cf,$ffdc3a81,$45f10000,$907c1600,$4440b1cc,$670e10da
    dc.l $534066f6,$5241b1cc,$6600feb2,$700076f8,$001600f9,$4e710216,$00874e71,$87164e71
    dc.l $4e75ffff
