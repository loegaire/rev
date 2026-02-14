
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void Unwind_140003790(void)

{
  void *pvVar1;
  void *_Memory;
  
  if (7 < DAT_14012b1b8) {
    pvVar1 = (void *)CONCAT62(DAT_14012b1a0._2_6_,(undefined2)DAT_14012b1a0);
    _Memory = pvVar1;
    if ((0xfff < DAT_14012b1b8 * 2 + 2) &&
       (_Memory = *(void **)((longlong)pvVar1 + -8),
       0x1f < (ulonglong)((longlong)pvVar1 + (-8 - (longlong)_Memory)))) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    free(_Memory);
  }
  _DAT_14012b1b0 = 0;
  DAT_14012b1b8 = 7;
  DAT_14012b1a0._0_2_ = 0;
  return;
}

