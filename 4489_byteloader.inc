;---------------------------------------------------------------------------------------
; 4489_byteloader
;
; * load any number of bytes
; * from any disk position
; * on any connected drive
; * to any memory address
; * small
; * portable
; * self-contained
; * verifies checksums
; * no deadlocks
; * retries on timeouts
; * retries on errors
; * returns errorcode if max_retries exceeded (default: 8)
; * does not interfere with existing interrupt, cia timer, blitter or copper use
; * respects official hw docs and bulletins
; * compatible with iffy /rdy drives
; * tested on A500, A500+, A600, A1200/020, A4000/040
; * updates, issues, improvements:  https://github.com/4489
;---------------------------------------------------------------------------------------

;---------------------------------------------------------------------------------------
; -> d0.l  offset       (0-$dc000)
; -> d1.l  length       (0-$dc000)
; -> d2.l  drive        (0-3)
; -> a0.l  dst address  (anywhere)
; -> a1.l  mfm address  ($1760 words - sufficient as we snoop load)
;
; <- d0.l  == 0         (success)
; <- d0.l  != 0         (error)
;
; <- assume all other registers are trashed
;---------------------------------------------------------------------------------------
    dc.l $49f900bf,$d1004bfa,$017c4df0,$18007678,$61500214,$007f76f7,$e53bc714,$80fc1600
    dc.l $3200303c,$76004840,$7e1b616a,$082c0005,$0f0157cf,$fff6bdc8,$67227806,$88143415
    dc.l $6a2cd0bc,$01000000,$6b127400,$7e55082c,$00040f01,$67186134,$51cffff4,$9dc8200e
    dc.l $76f80014,$00f90214,$00878714,$4e7550d5,$3601e24a,$e24b6402,$59049642,$67406b04
    dc.l $55044443,$61065243,$66fa6034,$53041884,$4e715204,$18843c3c,$012c47f9,$00dff024
    dc.l $1a2bffe2,$ba2bffe2,$67fa51ce,$fff44e75,$36bc4000,$277c1002,$7f000078,$4e7561d4
    dc.l $42a90010,$377c8210,$007261e4,$377c9500,$007a377c,$4489005a,$2749fffc,$36bc9760
    dc.l $36bc9760,$7e3761ae,$4aa90010,$56cffff8,$676a2449,$616a4843,$b6016660,$e19b4a03
    dc.l $66be7e37,$6190082b,$0001fffb,$56cffff6,$674a619c,$377c0010,$00722449,$26497e0a
    dc.l $613e45ea,$0028614a,$2a037c7f,$282a0200,$261a6142,$26c351ce,$fff44a85,$661e45ea
    dc.l $020051cf,$ffdc3a81,$524145f1,$0000907c,$1600b1ce,$670610da,$524066f6,$6000feca
    dc.l $0c5a4489,$66fa0c52,$448967f4,$243c5555,$55554cda,$0018c682,$c882b785,$b985d683
    dc.l $86844e75
    dc.w $ffff
