
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void Unwind_140059380(void)

{
  undefined8 *puVar1;
  undefined8 *_Memory;
  void *pvVar2;
  void *_Memory_00;
  
  if (DAT_14012b020 != (void *)0x0) {
    pvVar2 = DAT_14012b020;
    if ((0xfff < (ulonglong)(DAT_14012b030 - (longlong)DAT_14012b020)) &&
       (pvVar2 = *(void **)((longlong)DAT_14012b020 + -8),
       0x1f < (ulonglong)((longlong)DAT_14012b020 + (-8 - (longlong)pvVar2)))) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    free(pvVar2);
    _DAT_14012b020 = (undefined1  [16])0x0;
    DAT_14012b030 = 0;
  }
  puVar1 = DAT_14012b010;
  *(undefined8 *)DAT_14012b010[1] = 0;
  _Memory = (undefined8 *)*puVar1;
  do {
    if (_Memory == (undefined8 *)0x0) {
      free(puVar1);
      return;
    }
    puVar1 = (undefined8 *)*_Memory;
    if (7 < (ulonglong)_Memory[5]) {
      pvVar2 = (void *)_Memory[2];
      _Memory_00 = pvVar2;
      if ((0xfff < _Memory[5] * 2 + 2U) &&
         (_Memory_00 = *(void **)((longlong)pvVar2 + -8),
         0x1f < (ulonglong)((longlong)pvVar2 + (-8 - (longlong)_Memory_00)))) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
      free(_Memory_00);
    }
    free(_Memory);
    _Memory = puVar1;
    puVar1 = DAT_14012b010;
  } while( true );
}

