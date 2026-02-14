
void FUN_1400de040(longlong *param_1,longlong *param_2)

{
  void *pvVar1;
  void *_Memory;
  
  do {
    if (param_1 == param_2) {
      return;
    }
    if (7 < (ulonglong)param_1[3]) {
      pvVar1 = (void *)*param_1;
      _Memory = pvVar1;
      if ((0xfff < param_1[3] * 2 + 2U) &&
         (_Memory = *(void **)((longlong)pvVar1 + -8),
         0x1f < (ulonglong)((longlong)pvVar1 + (-8 - (longlong)_Memory)))) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
      free(_Memory);
    }
    param_1[2] = 0;
    param_1[3] = 7;
    *(undefined2 *)param_1 = 0;
    param_1 = param_1 + 5;
  } while( true );
}

