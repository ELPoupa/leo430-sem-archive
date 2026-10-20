[Home](../README.md) › Error codes

# Error and status messages

> **In short:** every message the controller modules can raise has a number from 400 to 999; the text comes from the
> string table `s400eng.dll`. Use this page to look up a number seen in the server's message list. For what to do
> about the most common ones, see [Troubleshooting](troubleshooting.md).

| Range | Area |
|---|---|
| 408, 433–436 | EHT communication and faults |
| 410–415 | configuration / NVRAM / DATA.VAC |
| 416–432 | firmware load and activation |
| 437–441, 490–518 | vacuum and stage |
| 519–549 | EHT unit trips and status |
| 550–560+ | variable pressure (not on the LEO 430) |

---

## Technical reference

*Full detail for maintenance and further reverse engineering: function names, addresses, parameters, sources. Inferred points are marked \*?\*.*

From the LEO string table `s400eng.dll` (IDs 400-999). The controller modules return these IDs (e.g. `INITIALISE_EO_CONTROLLER` returns 0x1A4 = 420 "Failed to load EO RLM"), and the UI shows the text. LEO's own explanations of many errors, with internal code tables (for example the DSP command numbers behind "Acquire command error"), are in [help/ERRORS/ERRORS.txt](help/ERRORS/ERRORS.txt).

### Board firmware start-up

Each controller module's `INITIALISE_<X>_CONTROLLER` runs only when `DP_GSP` = 1 (registry `Gsp=1`, image processor fitted). It loads its GSP firmware module with TIGASEM `SET<X>MODULE` and starts it with `INIT<X>COMMS`/`INIT<X>RLM`; on failure it returns the code shown below. EO (m200) loads `G900.RLM` as the DSP module, then installs `G200.420`, a hard-coded name. `G200.440` is not used by this software version.

Useful groups: 408 EHT comms · 410-415 configuration / NVRAM / DATA.VAC · 416-432 firmware load/activation · 433-436 EHT faults (filament blown, set tripped, inhibited by vacuum) · 437-441 vacuum board and its supply rails · 442-449 stage commands and axis supply rails · 455-456 vacuum leak, Penning gauge · 457-470 TIFF/clipboard · 500+ interlocks and status.

### All messages (400-999)

| ID | Hex | Message |
|---|---|---|
| 400 | 0x190 | Invalid Identifier or READ ONLY |
| 401 | 0x191 | CANNOT SET THIS STATE IN THIS CONTEXT |
| 402 | 0x192 | INVALID STATE VALUE |
| 403 | 0x193 | Action not permitted -  currently disabled |
| 404 | 0x194 | ACTION ALREADY TAKEN |
| 405 | 0x195 | Command not recognised as given by UIF |
| 406 | 0x196 | Interface is not active |
| 407 | 0x197 | Timer not available - shut down another application |
| 408 | 0x198 | EHT comms failed to open/close |
| 410 | 0x19A | Configuration file read error - using default |
| 411 | 0x19B | Configuration file write error , |
| 412 | 0x19C | Configuration of detectors to connectors inconsistent |
| 413 | 0x19D | NVRAM data faulty, read from data.vac |
| 414 | 0x19E | DATA.VAC file faulty, DEFAULT.VAC used |
| 415 | 0x19F | DEFAULT.VAC faulty, proceed with caution |
| 416 | 0x1A0 | Failed to load Overlay Manager |
| 417 | 0x1A1 | Failed to load Vac RLM |
| 418 | 0x1A2 | Failed to load Stage RLM |
| 419 | 0x1A3 | Failed to load Acquire RLM |
| 420 | 0x1A4 | Failed to load EO RLM |
| 421 | 0x1A5 | Failed to load EHT RLM |
| 422 | 0x1A6 | Failed to activate Vac Process |
| 423 | 0x1A7 | Failed to activate Stage Process |
| 424 | 0x1A8 | Failed to activate Acquire Process |
| 425 | 0x1A9 | Failed to activate EO Process |
| 426 | 0x1AA | Failed to activate EHT Process |
| 427 | 0x1AB | Failed to load DSP RLM |
| 428 | 0x1AC | Failed to activate DSP Process |
| 429 | 0x1AD | Failed to Write NVRAM |
| 430 | 0x1AE | Failed to write DATA.VAC |
| 431 | 0x1AF | Failed to write NVRAM and DATA.VAC |
| 432 | 0x1B0 | Failed to load IMEX RLM |
| 433 | 0x1B1 | EHT - Filament Blown |
| 434 | 0x1B2 | EHT - Set Tripped |
| 435 | 0x1B3 | EHT - Inhibited by Vac System |
| 436 | 0x1B4 | EHT - Spurious Reset |
| 437 | 0x1B5 | Vacuum Command error |
| 438 | 0x1B6 | Vacuum Board -12V failed |
| 439 | 0x1B7 | Vacuum Board +12V failed |
| 440 | 0x1B8 | Vacuum Board -5V failed |
| 441 | 0x1B9 | Vacuum Board +5V failed |
| 442 | 0x1BA | Invalid Stage Command |
| 443 | 0x1BB | Stage Command Error |
| 444 | 0x1BC | Stage X -15V failed |
| 445 | 0x1BD | Stage X +15V failed |
| 446 | 0x1BE | Stage Y -15V failed |
| 447 | 0x1BF | Stage Y +15V failed |
| 448 | 0x1C0 | Stage Z -15V failed |
| 449 | 0x1C1 | Stage Z +15V failed |
| 450 | 0x1C2 | Brightness RLM failed to load |
| 451 | 0x1C3 | Brightness RLM failed to initialise |
| 452 | 0x1C4 | Acquire command error |
| 453 | 0x1C5 | Imex failed to initialise |
| 454 | 0x1C6 | HRRU command error |
| 455 | 0x1C7 | Vacuum System Leak detected |
| 456 | 0x1C8 | Vacuum system Penning Gauge Failure |
| 457 | 0x1C9 | Write TIFF header Error |
| 458 | 0x1CA | Write TIFF Directory Error |
| 459 | 0x1CB | Write TIFF Image Error |
| 460 | 0x1CC | Read TIFF header Error |
| 461 | 0x1CD | Read TIFF directory Error |
| 462 | 0x1CE | Read TIFF image Error |
| 463 | 0x1CF | TIFF file error |
| 464 | 0x1D0 | TIFF image select error |
| 465 | 0x1D1 | TIFF parameter memory lock/size error |
| 466 | 0x1D2 | Clipboard conversion memory error |
| 467 | 0x1D3 | Clipboard bitmap create error |
| 468 | 0x1D4 | Open clipboard error |
| 469 | 0x1D5 | No bitmap in clipboard |
| 470 | 0x1D6 | Clipboard fetch failed |
| 471 | 0x1D7 | Clipboard - unknown bitmap type |
| 472 | 0x1D8 | Clipboard - bitmap data error |
| 473 | 0x1D9 | Image Import/export - get context failed |
| 474 | 0x1DA | Invalid Parameter received by EHT set |
| 475 | 0x1DB | Parameter range error from EHT set |
| 476 | 0x1DC | EHT set internal fault |
| 477 | 0x1DD | EHT set comms timeout |
| 478 | 0x1DE | Unknown command received by EHT set |
| 479 | 0x1DF | Vacuum subsystem is in local mode |
| 480 | 0x1E0 | Cannot print Colour TIFF file |
| 481 | 0x1E1 | HRRU photo completed |
| 482 | 0x1E2 | Stage X axis low outer limit hit |
| 483 | 0x1E3 | Stage X axis low inner limit hit |
| 484 | 0x1E4 | Stage X axis low user limit hit |
| 485 | 0x1E5 | Stage X axis high user limit hit |
| 486 | 0x1E6 | Stage X axis high inner limit hit |
| 487 | 0x1E7 | Stage X axis high outer limit hit |
| 488 | 0x1E8 | Stage Y axis low outer limit hit |
| 489 | 0x1E9 | Stage Y axis low inner limit hit |
| 490 | 0x1EA | Stage Y axis low user limit hit |
| 491 | 0x1EB | Stage Y axis high user limit hit |
| 492 | 0x1EC | Stage Y axis high inner limit hit |
| 493 | 0x1ED | Stage Y axis high outer limit hit |
| 494 | 0x1EE | Stage Z axis low outer limit hit |
| 495 | 0x1EF | Stage Z axis low inner limit hit |
| 496 | 0x1F0 | Stage Z axis low user limit hit |
| 497 | 0x1F1 | Stage Z axis high user limit hit |
| 498 | 0x1F2 | Stage Z axis high inner limit hit |
| 499 | 0x1F3 | Stage Z axis high outer limit hit |
| 501 | 0x1F5 | Stage Touching |
| 502 | 0x1F6 | Gun Valve position incorrect |
| 503 | 0x1F7 | Chamber column valve position incorrect |
| 504 | 0x1F8 | EDX system window position incorrect |
| 505 | 0x1F9 | Airlock Gate valve position incorrect |
| 506 | 0x1FA | WDX system gate valve position incorrect |
| 507 | 0x1FB | Disk space is low - housekeeping required |
| 508 | 0x1FC | Disk space is critical - free some space immediately |
| 509 | 0x1FD | Stage T axis low outer limit hit |
| 510 | 0x1FE | Stage T axis low inner limit hit |
| 511 | 0x1FF | Stage T axis low user limit hit |
| 512 | 0x200 | Stage T axis high user limit hit |
| 513 | 0x201 | Stage T axis high inner limit hit |
| 514 | 0x202 | Stage T axis high outer limit hit |
| 515 | 0x203 | Stage Tilt -15V failed |
| 516 | 0x204 | Stage Tilt +15V failed |
| 517 | 0x205 | Stage Rotate -15V failed |
| 518 | 0x206 | Stage Rotate +15V failed |
| 519 | 0x207 | EHT Set Extractor Trip |
| 520 | 0x208 | EHT Set Emergency Rundown |
| 521 | 0x209 | Failure in setting C1 table |
| 522 | 0x20A | VACC reset to VACC_PANIC |
| 523 | 0x20B | VEXT reset to VEXT_PANIC |
| 524 | 0x20C | Tip position calibration lost |
| 525 | 0x20D | ZTIP reset to ZTIP_PANIC |
| 526 | 0x20E | No possible focus voltage |
| 527 | 0x20F | No possible focus position (VHIGH) |
| 528 | 0x210 | No possible focus position (VLOW) |
| 529 | 0x211 | conjugate beam-blanking impossible |
| 530 | 0x212 | Invalid gun align mode |
| 531 | 0x213 | Invalid calibration mode |
| 532 | 0x214 | Invalid Optibeam event |
| 533 | 0x215 | Limit on stored messages reached |
| 534 | 0x216 | No terms in polynomial |
| 535 | 0x217 | There is no possible position for C1 crossover |
| 536 | 0x218 | There is no possible position for C2 crossover |
| 537 | 0x219 | Error in setting lenses for gun alignment |
| 538 | 0x21A | Error in IP_X1_X2 |
| 539 | 0x21B | Error 1 in CALC_NEW_EXC |
| 540 | 0x21C | Error 2 in CALC_NEW_EXC |
| 541 | 0x21D | Error 1 in SET_LIMITS |
| 542 | 0x21E | Error 2 in SET_LIMITS |
| 543 | 0x21F | Failure in setting up for lens calibration |
| 544 | 0x220 | Invalid parameters at initialisation |
| 545 | 0x221 | Default Printer: Out of memory |
| 546 | 0x222 | Default Printer: General print error |
| 547 | 0x223 | Default Printer: Out of disk space |
| 548 | 0x224 | Default Printer: Not configured |
| 549 | 0x225 | EHT Set spurious status |
| 550 | 0x226 | HPApp failed to start |
| 551 | 0x227 | HPApp Response Error |
| 552 | 0x228 | HPApp Closed Unexpectedly |
| 553 | 0x229 | HPApp Hung Up Error |
| 554 | 0x22A | VP Control Spurious Reset |
| 555 | 0x22B | VP Control Comms Error |
| 556 | 0x22C | VP Turbo Isolation Valve Error 1 |
| 557 | 0x22D | VP Turbo Isolation Valve Opening Timeout |
| 558 | 0x22E | VP Turbo Isolation Valve Closing Timeout |
| 559 | 0x22F | VP Turbo Isolation Valve Error 4 |
| 560 | 0x230 | VP Foreline Valve Error 1 |
| 561 | 0x231 | VP Foreline Valve Opening Timeout |
| 562 | 0x232 | VP Foreline Valve Closing Timeout |
| 563 | 0x233 | VP Foreline Valve Error 4 |
| 564 | 0x234 | VP Target Pressure Timeout |
| 565 | 0x235 | VP Monitor Fault 1 |
| 566 | 0x236 | VP Monitor Fault 2 |
| 567 | 0x237 | VP Mode Transition Timeout |
| 568 | 0x238 | VP Pirani gauge Error |
| 569 | 0x239 | VP Hardware Reverse Error |
| 570 | 0x23A | VP Control Unknown Error |
| 571 | 0x23B | Image Access - memory error |
| 572 | 0x23C | Image Access - error writing temporary file |
| 573 | 0x23D | Image Access - error reading temporary file |
| 574 | 0x23E | Image Import/Export - error creating temporary file |
| 575 | 0x23F | Image Import/Export - error writing temporary file |
| 576 | 0x240 | Image Import/Export - error reading temporary file |
| 577 | 0x241 | Image Import/Export - Unsupported bitmap format |
| 578 | 0x242 | CAN BUS Buffer overflow - Notify Leo Software Department |
| 579 | 0x243 | CAN BUS bus error |
| 580 | 0x244 | CAN BUS message error |
| 581 | 0x245 | The Stage is not initialised.  Unable to move to lower Z position. |
| 582 | 0x246 | Stage Command Overrun Error |
| 583 | 0x247 | Stage Board Too Hot |
| 584 | 0x248 | Stage Board Temperature returned to Normal |
| 585 | 0x249 | Stage M +15V failed |
| 586 | 0x24A | Stage M -15V failed |
| 587 | 0x24B | Stage M axis low outer limit hit |
| 588 | 0x24C | Stage M axis low inner limit hit |
| 589 | 0x24D | Stage M axis low user limit hit |
| 590 | 0x24E | Stage M axis high user limit hit |
| 591 | 0x24F | Stage M axis high inner limit hit |
| 592 | 0x250 | Stage M axis high outer limit hit |
| 593 | 0x251 | Water flow has failed |
| 594 | 0x252 | Water flow resumed |
| 595 | 0x253 | Electron Optics Board Too Hot |
| 596 | 0x254 | Electron Optics Board Temperature returned to Normal |
| 597 | 0x255 | JPEG Initialisation failed |
| 598 | 0x256 | JPEG Conversion failed |
| 599 | 0x257 | JPEG internal error |
| 600 | 0x258 | LEO recommends that chamber pressures should not exceed 275 Pa with Column Pumping is use.  Using higher pressures for an extended period may seriously reduce the life of LaB6 filaments.  High pressures may also reduce the life of the ion pump. |
| 700 | 0x2BC | Error while reading |
| 701 | 0x2BD | Aperture Size range 5 -> 500 |
| 702 | 0x2BE | Standard! |
| 703 | 0x2BF | X range |
| 704 | 0x2C0 | Y range |
| 705 | 0x2C1 | &View |
| 706 | 0x2C2 | Full Screen Image |
| 707 | 0x2C3 | DataZone |
| 708 | 0x2C4 | Output Device Calibration |
| 709 | 0x2C5 | Nav. Box! |
| 710 | 0x2C6 | Build Panel |
| 711 | 0x2C7 | Optibeam Status |
| 712 | 0x2C8 | Layout |
| 713 | 0x2C9 | Fonts |
| 714 | 0x2CA | Status! |
| 715 | 0x2CB | Toolbar |
| 716 | 0x2CC | Image |
| 717 | 0x2CD | Configure |
| 718 | 0x2CE | &Tools |
| 719 | 0x2CF | Service |
| 720 | 0x2D0 | Status |
| 721 | 0x2D1 | Select |
| 722 | 0x2D2 | File |
| 724 | 0x2D4 | Load State.. |
| 725 | 0x2D5 | Load Panels |
| 726 | 0x2D6 | Save Selection |
| 727 | 0x2D7 | Load Selection |
| 728 | 0x2D8 | &Mag/Foc |
| 729 | 0x2D9 | Annot/Meas! |
| 730 | 0x2DA | Print |
| 731 | 0x2DB | Actual value (mm) = |
| 732 | 0x2DC | Builder |
| 733 | 0x2DD | Panels |
| 734 | 0x2DE | New Panel |
| 735 | 0x2DF | Load Panel |
| 736 | 0x2E0 | Save Panel |
| 737 | 0x2E1 | SaveAs Panel |
| 738 | 0x2E2 | Install Panel |
| 739 | 0x2E3 | Edit Panel |
| 740 | 0x2E4 | Rename Panel |
| 741 | 0x2E5 | Remove Panel |
| 742 | 0x2E6 | Functions |
| 743 | 0x2E7 | EO |
| 744 | 0x2E8 | Nav Box |
| 745 | 0x2E9 | SelNav |
| 746 | 0x2EA | SelShare |
| 747 | 0x2EB | ShareScroll |
| 748 | 0x2EC | Text |
| 749 | 0x2ED | Size |
| 750 | 0x2EE | Parameters |
| 751 | 0x2EF | Panel Buttons |
| 752 | 0x2F0 | Mode |
| 753 | 0x2F1 | Execute |
| 754 | 0x2F2 | Move |
| 755 | 0x2F3 | Edit |
| 756 | 0x2F4 | Delete |
| 757 | 0x2F5 | Reset |
| 758 | 0x2F6 | Load Layout |
| 759 | 0x2F7 | Save Layout |
| 760 | 0x2F8 | Clear Layout |
| 761 | 0x2F9 | LEO Messages |
| 762 | 0x2FA | UIF Trace |
| 763 | 0x2FB | DataZone |
| 764 | 0x2FC | Mnemonics->file |
| 765 | 0x2FD | ANON |
| 766 | 0x2FE | New Panel Title |
| 767 | 0x2FF | New Panel Reference |
| 768 | 0x300 | Select Panel |
| 769 | 0x301 | Select to remove! |
| 770 | 0x302 | Exists! - replace? |
| 771 | 0x303 | User Directory.. |
| 772 | 0x304 | Trace-toggle |
| 773 | 0x305 | Commands |
| 774 | 0x306 | Buttons |
| 775 | 0x307 | Toggles |
| 776 | 0x308 | Parameters |
| 777 | 0x309 | (right button for menu) |
| 778 | 0x30A | Move |
| 779 | 0x30B | Edit |
| 780 | 0x30C | Delete |
| 781 | 0x30D | Edit Panel |
| 782 | 0x30E | Select link start |
| 783 | 0x30F | Select link end |
| 784 | 0x310 | Edit Micron Marker |
| 785 | 0x311 | Grid |
| 786 | 0x312 | Mode |
| 787 | 0x313 | X-RayTraces |
| 788 | 0x314 | &Help |
| 789 | 0x315 | Help on Help |
| 790 | 0x316 | Annotation |
| 791 | 0x317 | Text |
| 792 | 0x318 | Analogue |
| 793 | 0x319 | Digital |
| 794 | 0x31A | Outer |
| 795 | 0x31B | Panel |
| 796 | 0x31C | Pin |
| 797 | 0x31D | Link |
| 798 | 0x31E | Micron |
| 799 | 0x31F | Line Width |
| 800 | 0x320 | Control |
| 801 | 0x321 | Adjustment |
| 802 | 0x322 | Position/Size |
| 803 | 0x323 | About LEO |
| 804 | 0x324 | Point-Point |
| 805 | 0x325 | Escape |
| 806 | 0x326 | Angular |
| 807 | 0x327 | Save |
| 808 | 0x328 | Load |
| 809 | 0x329 | Lock |
| 810 | 0x32A | Unlock |
| 811 | 0x32B | Radial |
| 812 | 0x32C | 3D Point-Point |
| 813 | 0x32D | Vector Profile |
| 814 | 0x32E | Annot/meas |
| 815 | 0x32F | Measure |
| 816 | 0x330 | ZPanel |
| 817 | 0x331 | Hide |
| 818 | 0x332 | Show |
| 819 | 0x333 | Zone Mag |
| 820 | 0x334 | Bitmap |
| 821 | 0x335 | Tag |
| 822 | 0x336 | Fixed micron |
| 823 | 0x337 | Suppress Aperture Warning |
| 824 | 0x338 | Line Profile |
| 825 | 0x339 | DataZone |
| 826 | 0x33A | Install |
| 827 | 0x33B | Edit |
| 828 | 0x33C | TIFF data |
| 829 | 0x33D | Profile |
| 830 | 0x33E | Line Scan brightness |
| 831 | 0x33F | White |
| 832 | 0x340 | Line Profile brightness |
| 833 | 0x341 | Resolution |
| 834 | 0x342 | Split |
| 835 | 0x343 | Copy-Link |
| 836 | 0x344 | Trace 1 (L) |
| 837 | 0x345 | Trace 2 (R) |
| 838 | 0x346 | Windowing |
| 839 | 0x347 | Reset |
| 840 | 0x348 | Invert |
| 841 | 0x349 | New |
| 842 | 0x34A | Input LUT.. |
| 843 | 0x34B | Add |
| 844 | 0x34C | Del |
| 845 | 0x34D | Reset |
| 846 | 0x34E | Move |
| 847 | 0x34F | Save |
| 848 | 0x350 | Load |
| 849 | 0x351 | Sawtooth |
| 850 | 0x352 | Step |
| 851 | 0x353 | Scale |
| 852 | 0x354 | Period |
| 853 | 0x355 | Offset |
| 854 | 0x356 | Amplitude |
| 855 | 0x357 | Options |
| 856 | 0x358 | Detectors |
| 857 | 0x359 | Aux |
| 858 | 0x35A | Connections |
| 859 | 0x35B | Engineer |
| 860 | 0x35C | UserPassword |
| 861 | 0x35D | EngPassword |
| 862 | 0x35E | Factory |
| 863 | 0x35F | Stage |
| 864 | 0x360 | Joystick |
| 865 | 0x361 | Goto |
| 866 | 0x362 | Re-Map |
| 867 | 0x363 | Record |
| 868 | 0x364 | Clear |
| 869 | 0x365 | Mark |
| 870 | 0x366 | Labels.. |
| 871 | 0x367 | Plot |
| 872 | 0x368 | Hide |
| 873 | 0x369 | First |
| 874 | 0x36A | Next |
| 875 | 0x36B | Save.. |
| 876 | 0x36C | Load.. |
| 877 | 0x36D | Stage Map |
| 878 | 0x36E | CloseMap |
| 879 | 0x36F | Mag Table |
| 880 | 0x370 | Font2 |
| 881 | 0x371 | Font3 |
| 882 | 0x372 | Font4 |
| 883 | 0x373 | Font5 |
| 884 | 0x374 | Font6 |
| 885 | 0x375 | Condition Table |
| 886 | 0x376 | Working Distance |
| 887 | 0x377 | Mag |
| 888 | 0x378 | Ann-Fonts |
| 889 | 0x379 | Beam Position |
| 900 | 0x384 | Select position of minimum stigmation |
| 901 | 0x385 | SEM Interface READ error : |
| 902 | 0x386 | SEM Interface WRITE error : |
| 903 | 0x387 | SEM Interface COMMAND error : |
| 904 | 0x388 | ERROR |
| 905 | 0x389 | Incorrect file type! |
| 906 | 0x38A | Save Current Selection |
| 907 | 0x38B | Not a layout file! |
| 908 | 0x38C | Failed to load |
| 909 | 0x38D | Reverting to original layout |
| 910 | 0x38E | Save Current Layout |
| 911 | 0x38F | Save identities of selected parameters |
| 912 | 0x390 | Invalid item type! |
| 913 | 0x391 | Disabled - |
| 914 | 0x392 | Enter new value : |
| 915 | 0x393 | Select Directory for own files |
| 916 | 0x394 | Select point for adjustment |
| 917 | 0x395 | Select panel/overlay to save |
| 918 | 0x396 | Not an Annotation file! |
| 919 | 0x397 | Format Error! |
| 920 | 0x398 | Integer expected! |
| 921 | 0x399 | Unrecognised item |
| 922 | 0x39A | Select panel to lock |
| 923 | 0x39B | Select panel to unlock |
| 924 | 0x39C | Exceeded number of permitted items |
| 925 | 0x39D | is not optimum |
| 926 | 0x39E | SEM is still running and inhibits close. |
| 927 | 0x39F | First Shutdown SEM from Leo System Menu |
| 928 | 0x3A0 | SEM Closing Down |
| 929 | 0x3A1 | Detector not configured |
| 930 | 0x3A2 | Detector output = |
| 931 | 0x3A3 | Connector in use |
| 932 | 0x3A4 | Connector signal undefined |
| 933 | 0x3A5 | is not used by detector |
| 934 | 0x3A6 | Undefined requirements |
| 935 | 0x3A7 | User Password |
| 936 | 0x3A8 | Enter new password |
| 937 | 0x3A9 | Engineer Password |
| 938 | 0x3AA | Enter password |
| 939 | 0x3AB | Password Failure |
| 940 | 0x3AC | You will be restricted |
| 941 | 0x3AD | Factory Password |
| 942 | 0x3AE | Serial Number |
| 943 | 0x3AF | Undefined |
| 944 | 0x3B0 | SEM Shutdown |
| 945 | 0x3B1 | Shutdown: Save Operating Conditions? |
| 946 | 0x3B2 | Stage Busy |
| 947 | 0x3B3 | Command not executed |
| 948 | 0x3B4 | Stage XYZ |
| 949 | 0x3B5 | Zone 0 is not frozen |
| 950 | 0x3B6 | WARNING |
| 951 | 0x3B7 | Select Zone for control |
| 952 | 0x3B8 | Select Zone Panel to hide |
| 953 | 0x3B9 | When reading file |
| 954 | 0x3BA | Select item to modify |
| 955 | 0x3BB | Save as file.. |
| 956 | 0x3BC | Copyright © 1995 LEO Electron Microscopy Ltd |
| 957 | 0x3BD | All rights reserved.             Portions Copyright:- |
| 958 | 0x3BE | © 1992-1995 Leica Cambridge Ltd. |
| 959 | 0x3BF | © 1987-1994 Microsoft Corporation. |
| 960 | 0x3C0 | © 1986-1991 The Whitewater Group, Inc. |
| 961 | 0x3C1 | © 1988 Texas Instruments |
| 962 | 0x3C2 | Co-operation Zeiss . Leica |
| 970 | 0x3CA | Save Display LUT points to file |
| 971 | 0x3CB | Display Configuration |
| 972 | 0x3CC | Failed to detect minimum configuration |
| 973 | 0x3CD | Inconsistent Dual channel configuration detected |
| 974 | 0x3CE | Inconsistent High Res configuration detected |
| 975 | 0x3CF | Unexpected end of file |
| 976 | 0x3D0 | Enter new Name |
| 977 | 0x3D1 | Macro has been modified, changes will be lost |
| 978 | 0x3D2 | Condition incorrect, Proceed? |
| 979 | 0x3D3 | Conditions file not found |
| 980 | 0x3D4 | File for Left Display LUT |
| 981 | 0x3D5 | File for Right Display LUT |
| 982 | 0x3D6 | Select point to be centred |
| 983 | 0x3D7 | Select first corner (Right button cancels) |
| 984 | 0x3D8 | Select other corner (Right button cancels) |
| 985 | 0x3D9 | Rbutton cancels |
| 986 | 0x3DA | Refresh Errors |
| 987 | 0x3DB | Refresh Warnings |
| 988 | 0x3DC | Clear message window |
| 989 | 0x3DD | Popup on Warning |
| 990 | 0x3DE | Help |
| 991 | 0x3DF | Acknowledge on event |
| 992 | 0x3E0 | Suppress Warnings |
| 993 | 0x3E1 | GSP-DBUG |
| 994 | 0x3E2 | ON-fast |
| 995 | 0x3E3 | ON-Slow |
| 996 | 0x3E4 | OFF |
| 997 | 0x3E5 | Reset |
| 998 | 0x3E6 | File |
| 999 | 0x3E7 | Panels |

### Command codes shown in command errors

"Acquire command error", "HRRU command error", "Stage Command Error" and "Vacuum Command error" show a code number. Codes below 0x40 (decimal 40 in the help text) mean a communication failure with the DSP or stage/vacuum subsystem; higher codes mean an internal consistency/queueing failure. The code identifies the failing command (from LEO's ERRORS help, full list in [command-codes.csv](command-codes.csv)):

**Acquire command error** (DSP): 1 SET_ZONE_K1_CMD | A CREATE_IDENTITY_LUT | B CREATE_GAMMA_LUT | C CREATE_INVERT_LUT | D CREATE_USER_LUT | E COMBINE_USER_LUTS | F ENABLE_WINDOW_PLANE | 10 SET_DETECTOR_MIXING | 11 SET_FAVE_NOISE_REDN | 12 SET_LINT_NOISE_REDN | 13 SET_FINT_NOISE_REDN | 2 SET_ZONE_K2_CMD | 14 SET_WINDOW_SEL | 15 SET_FREEZE_CMD | 16 COPY_USER_LUT | 17 SEE_LUT | 18 DEFINE_WINDOW | 3 SET_ZONE_ALPHA_CMD | 4 SET_ZONE_BETA_CMD | 5 SET_ZONE_SUB_CMD | 6 SET_ZONE_PORT_CMD | 7 SET_ZONE_OFFSET_CMD | 8 SET_ZONE_GAIN_CMD | 9 SET_ZONE_INVERT_CMD

**HRRU command error** (DSP): 1 HRRU_FITTED | A SET_HRRU_FOCUS | B SET_HRRU_BRIGHTNESS | C SET_HRRU_CONTRAST | D SAVE_HRRU_CONFIG | 2 TAKE_LEFT_STORED_PHOTO | 3 TAKE_RIGHT_STORED_PHOTO | 4 TAKE_LIVE_PHOTO | 5 GAMMA_OVERLAY_HRRU_LUT | 6 GAMMA_HRRU_LUT | 7 SET_FILM_SPEED | 8 SET_LIVE_REPEAT | 9 SET_CAMERA_TYPE

**Stage Command Error** (stage/vac): 1 SET_UP_STAGE_REQ | A MOVE_MODE_REQ | B ABORT_REQ | C STAGE_PARAMS_V_START | D STAGE_PARAMS_V_INC | E STAGE_PARAMS_T_STEP | F STAGE_PARAMS_BACKLASH_SPD | 10 STAGE_PARAMS_BACKLASH_DST | 11 STAGE_PARAMS_MAXIMUM_SPD | 12 GET_ERROR_STATUS | 13 CHECK_STAGE_PSU | 2 MANUAL_INIT_REQ | 3 AUTO_INIT_REQ | 4 LOWER_USER_LIMITS_REQ | 5 UPPER_USER_LIMITS_REQ | 6 TIGA_TIMER_TICK_REQ | 7 SPEED_MOVE_REQ | 8 STAGE_POSITION_REQ | 9 BACKLASH_REQ

**Vacuum Command error** (stage/vac): 1 CONFIGURE_FRONT_PANEL_REQ | A EDX_THRESH_REQ | B SET_4QBSD_QUADRANT_REQ | C SET_4QBSD_VISIBILITY_REQ | D SET_4QBSD_GAIN_REQ | E SET_SCM_RANGE_REQ | F SCM_READINGS_REQUIRED_REQ | 10 VACUUM_TIMER_ROUTINE_REQ | 11 WRITE_VACUUM_DATA_REQ | 12 READ_VACUUM_DATA_REQ | 13 OPER_WDX_GATE_VALVE_REQ | 2 SYSTEM_PUMPING_REQ | 14 AIRLOCK_CONFIGURE_REQ | 15 SET_TILT0 | 16 SET_TOUCH_ALARM_OFF | 17 GET_VACUUM_ERRORS | 18 GET_COMMS_PSU | 3 CONFIG_VIEWING_WINDOW_REQ | 4 CONFIG_COLUMN_PUMPING_REQ | 5 COLUMN_PUMPING_REQ | 6 COLUMN_ISOLN_REPLY_REQ | 7 EDX_CONFIGURE_REQ | 8 WDX_CONFIGURE_REQ | 9 FILAMENT_THRESH_REQ


---
[Home](../README.md)
