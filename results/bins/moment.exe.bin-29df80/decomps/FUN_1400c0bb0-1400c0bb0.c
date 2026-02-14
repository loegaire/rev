
void FUN_1400c0bb0(longlong *param_1)

{
  char cVar1;
  longlong *plVar2;
  void *pvVar3;
  void *_Memory;
  
  cVar1 = *(char *)((longlong)param_1 + 0x19);
  do {
    if (cVar1 != '\0') {
      return;
    }
    FUN_1400c0bb0((longlong *)param_1[2]);
    plVar2 = (longlong *)*param_1;
    if (7 < (ulonglong)param_1[7]) {
      pvVar3 = (void *)param_1[4];
      _Memory = pvVar3;
      if ((0xfff < param_1[7] * 2 + 2U) &&
         (_Memory = *(void **)((longlong)pvVar3 + -8),
         0x1f < (ulonglong)((longlong)pvVar3 + (-8 - (longlong)_Memory)))) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
      free(_Memory);
    }
    free(param_1);
    cVar1 = *(char *)((longlong)plVar2 + 0x19);
    param_1 = plVar2;
  } while( true );
}

