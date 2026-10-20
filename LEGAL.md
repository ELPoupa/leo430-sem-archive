[Home](README.md) › Legal notice

# Legal notice

> **In short:** an independent, non-commercial project to preserve, study and keep repairing the LEO 430 scanning
> electron microscope, a discontinued instrument. It isn't affiliated with LEO, ZEISS or any other company named here;
> their software, manuals, names and trademarks remain theirs. Anything a rights holder objects to will be taken down
> on request through [an issue](https://github.com/ELPoupa/leo430-sem-archive/issues/new/choose). Everything is provided without
> warranty, and this page isn't legal advice.

## What this project is
- A **preservation and repair** effort. LEO-32 and the LEO 400 series have been out of support for many years; people
  who still run these microscopes, often in teaching and research labs, have nowhere else to find out how the control
  PC works or how to recover it after a failure.
- Built from a disk image of the control PC of one LEO 430, read only. The documentation explains how the software
  and its links to the microscope work so that the instrument can be maintained, repaired and kept interoperable with
  replacement hardware.
- **Non-commercial.** Nothing here is sold, and no part of it is offered as a replacement for licensed software.

## Not affiliated
This project is not affiliated with, endorsed by or connected to **LEO Electron Microscopy Ltd**, **Carl Zeiss / ZEISS**,
**Leica**, **Microsoft**, **Texas Instruments**, **Matrox**, **Data Encryption Systems** or any other company whose
products are mentioned. All product names, logos and trademarks belong to their owners and are used only to identify
the products being documented.

## Third-party material
- **LEO's program files are not in the public copy** of this archive. They stay in a private archive kept for
  preservation; see [Need files to recover a machine?](#need-files-to-recover-a-machine).
- Some documentation contains material taken from or derived from the original software, for reference and
  interoperability: LEO's help files converted to text (`docs/help/`), decompiled and disassembled listings
  (`docs/decompiled/`, `docs/firmware/asm/`, `docs/modules-asm/`, `docs/dsp/`), string and resource tables
  (`docs/strings/`, `docs/ui/`) and data listings. Copyright in that material remains with its owners. **No licence to
  it is granted** by this project, and the licence of this project (below) does not cover it.
- Passwords, codes and procedures documented here are the manufacturer's own service settings of a discontinued
  product, published so that owners can keep maintaining their instruments.

## Rights holders
If you hold rights to anything published here and want it changed or removed, [open an issue](https://github.com/ELPoupa/leo430-sem-archive/issues/new/choose)
("Rights holder request"). Requests are handled promptly and in good faith, and no legal justification is needed.

## Need files to recover a machine?
LEO-32's program files aren't published here. If you own or maintain a LEO 400-series SEM and need files to get its
control PC running again, [open an issue](https://github.com/ELPoupa/leo430-sem-archive/issues/new/choose) with the "Files to recover a
machine" template, saying which machine it is and what's missing. Please don't post personal details there; we can
continue privately. Requests are handled case by case, with no guarantee.

## No warranty, your own risk
- Everything here is provided **as is, without any warranty**. Much of it was worked out from the code and has not
  been tried on a working microscope; it may be incomplete or wrong.
- A scanning electron microscope works with **high voltage** (up to 30 kV), **vacuum** and produces **X-rays**. Only
  trained people should work on it, following the manufacturer's safety rules. Changing serial numbers, licences,
  calibration or configuration can make the instrument unusable: back up first.
- Nobody involved in this project is liable for any damage, loss or injury resulting from the use of this information.

## Key Recovery Helper
The [Key Recovery Helper](https://elpoupa.github.io/leo430-sem-archive/) (the guided web page; its code is in [`site/`](site/)) reproduces the documented service procedures of LEO-32. Use it only on an
instrument you own or are authorised to maintain, and only to restore functions that instrument is entitled to.
Enabling options that were never licensed for an instrument may infringe the rights of the software's owner.

## Legal basis (for information, not legal advice)
The analysis was done for interoperability, maintenance and study of a program by its lawful user, as allowed in
particular by the European Software Directive (2009/24/EC, articles 5(3) and 6) and the French Intellectual Property
Code (article L122-6-1). Whether any of this applies to a given situation depends on the country and the facts.

## Licence of this project's own work
The documentation written for this project and its own code are licensed as described in [LICENSE.md](LICENSE.md):
documentation under **CC BY 4.0**, code under the **MIT** licence. This does not extend to the third-party material
listed above.

---
[Home](README.md)
