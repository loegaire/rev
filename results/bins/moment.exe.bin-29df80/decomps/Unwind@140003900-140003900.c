
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void Unwind_140003900(void)

{
  void *pvVar1;
  void *_Memory;
  
  if (0xf < DAT_14012b178) {
    pvVar1 = (void *)CONCAT71(DAT_14012b160._1_7_,(undefined1)DAT_14012b160);
    _Memory = pvVar1;
    if ((0xfff < DAT_14012b178 + 1) &&
       (_Memory = *(void **)((longlong)pvVar1 + -8),
       0x1f < (ulonglong)((longlong)pvVar1 + (-8 - (longlong)_Memory)))) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    free(_Memory);
  }
  _DAT_14012b170 = 0;
  DAT_14012b178 = 0xf;
  DAT_14012b160._0_1_ = 0;
  return;
}

