
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1400bff60(void)

{
  void *_Memory;
  
  if (DAT_14012b3a8 != (void *)0x0) {
    _Memory = DAT_14012b3a8;
    if ((0xfff < (ulonglong)(DAT_14012b3b8 - (longlong)DAT_14012b3a8)) &&
       (_Memory = *(void **)((longlong)DAT_14012b3a8 + -8),
       0x1f < (ulonglong)((longlong)DAT_14012b3a8 + (-8 - (longlong)_Memory)))) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    free(_Memory);
    _DAT_14012b3a8 = ZEXT812(0);
    register0x0000120c = 0;
    DAT_14012b3b8 = 0;
  }
  return;
}

