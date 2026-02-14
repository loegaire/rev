
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void Unwind_140059e40(void)

{
  undefined8 *puVar1;
  undefined8 *_Memory;
  void *pvVar2;
  void *_Memory_00;
  
  if (DAT_14012abd0 != (void *)0x0) {
    pvVar2 = DAT_14012abd0;
    if ((0xfff < (ulonglong)(DAT_14012abe0 - (longlong)DAT_14012abd0)) &&
       (pvVar2 = *(void **)((longlong)DAT_14012abd0 + -8),
       0x1f < (ulonglong)((longlong)DAT_14012abd0 + (-8 - (longlong)pvVar2)))) {
LAB_140059f70:
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    free(pvVar2);
    _DAT_14012abd0 = (undefined1  [16])0x0;
    DAT_14012abe0 = 0;
  }
  puVar1 = DAT_14012abc0;
  *(undefined8 *)DAT_14012abc0[1] = 0;
  _Memory = (undefined8 *)*puVar1;
  do {
    if (_Memory == (undefined8 *)0x0) {
      free(puVar1);
      return;
    }
    puVar1 = (undefined8 *)*_Memory;
    if (0xf < (ulonglong)_Memory[5]) {
      pvVar2 = (void *)_Memory[2];
      _Memory_00 = pvVar2;
      if ((0xfff < _Memory[5] + 1) &&
         (_Memory_00 = *(void **)((longlong)pvVar2 + -8),
         0x1f < (ulonglong)((longlong)pvVar2 + (-8 - (longlong)_Memory_00)))) goto LAB_140059f70;
      free(_Memory_00);
    }
    free(_Memory);
    _Memory = puVar1;
    puVar1 = DAT_14012abc0;
  } while( true );
}

