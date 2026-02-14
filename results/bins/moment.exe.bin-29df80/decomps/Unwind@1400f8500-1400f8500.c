
void Unwind_1400f8500(undefined8 param_1,longlong param_2)

{
  ulonglong uVar1;
  void *pvVar2;
  void *_Memory;
  
  uVar1 = *(ulonglong *)(*(longlong *)(param_2 + 0x13a8) + 0x28);
  if (7 < uVar1) {
    pvVar2 = (void *)**(longlong **)(param_2 + 0x11e8);
    _Memory = pvVar2;
    if ((0xfff < uVar1 * 2 + 2) &&
       (_Memory = *(void **)((longlong)pvVar2 + -8),
       0x1f < (ulonglong)((longlong)pvVar2 + (-8 - (longlong)_Memory)))) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    free(_Memory);
  }
  free(*(void **)(param_2 + 0x13a8));
  return;
}

