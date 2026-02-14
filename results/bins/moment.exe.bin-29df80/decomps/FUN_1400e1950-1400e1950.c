
void FUN_1400e1950(longlong *param_1)

{
  char cVar1;
  longlong *plVar2;
  void *pvVar3;
  void *pvVar4;
  
  cVar1 = *(char *)((longlong)param_1 + 0x19);
  do {
    if (cVar1 != '\0') {
      return;
    }
    FUN_1400e1950((longlong *)param_1[2]);
    plVar2 = (longlong *)*param_1;
    if (0xf < (ulonglong)param_1[0xb]) {
      pvVar3 = (void *)param_1[8];
      pvVar4 = pvVar3;
      if ((0xfff < param_1[0xb] + 1U) &&
         (pvVar4 = *(void **)((longlong)pvVar3 + -8),
         0x1f < (ulonglong)((longlong)pvVar3 + (-8 - (longlong)pvVar4)))) goto LAB_1400e1a25;
      free(pvVar4);
    }
    param_1[10] = 0;
    param_1[0xb] = 0xf;
    *(undefined1 *)(param_1 + 8) = 0;
    if (0xf < (ulonglong)param_1[7]) {
      pvVar3 = (void *)param_1[4];
      pvVar4 = pvVar3;
      if ((0xfff < param_1[7] + 1U) &&
         (pvVar4 = *(void **)((longlong)pvVar3 + -8),
         0x1f < (ulonglong)((longlong)pvVar3 + (-8 - (longlong)pvVar4)))) {
LAB_1400e1a25:
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
      free(pvVar4);
    }
    free(param_1);
    cVar1 = *(char *)((longlong)plVar2 + 0x19);
    param_1 = plVar2;
  } while( true );
}

