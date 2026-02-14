
void FUN_1400c31c0(longlong *param_1)

{
  void *pvVar1;
  void *pvVar2;
  
  if (0xf < (ulonglong)param_1[7]) {
    pvVar1 = (void *)param_1[4];
    pvVar2 = pvVar1;
    if ((0xfff < param_1[7] + 1U) &&
       (pvVar2 = *(void **)((longlong)pvVar1 + -8),
       0x1f < (ulonglong)((longlong)pvVar1 + (-8 - (longlong)pvVar2)))) goto LAB_1400c326a;
    free(pvVar2);
  }
  param_1[6] = 0;
  param_1[7] = 0xf;
  *(undefined1 *)(param_1 + 4) = 0;
  if (0xf < (ulonglong)param_1[3]) {
    pvVar1 = (void *)*param_1;
    pvVar2 = pvVar1;
    if ((0xfff < param_1[3] + 1U) &&
       (pvVar2 = *(void **)((longlong)pvVar1 + -8),
       0x1f < (ulonglong)((longlong)pvVar1 + (-8 - (longlong)pvVar2)))) {
LAB_1400c326a:
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    free(pvVar2);
  }
  param_1[2] = 0;
  param_1[3] = 0xf;
  *(undefined1 *)param_1 = 0;
  return;
}

