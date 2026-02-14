
void Unwind_1400d7880(undefined8 param_1,longlong param_2)

{
  void *pvVar1;
  void *_Memory;
  ulonglong *puVar2;
  longlong lVar3;
  
  lVar3 = *(longlong *)(param_2 + 0x2398);
  if (*(longlong *)(param_2 + 0x2390) != *(longlong *)(param_2 + 0x23a0)) {
    puVar2 = (ulonglong *)(*(longlong *)(param_2 + 0x2390) + 0x18);
    do {
      if (7 < *puVar2) {
        pvVar1 = (void *)puVar2[-3];
        _Memory = pvVar1;
        if ((0xfff < *puVar2 * 2 + 2) &&
           (_Memory = *(void **)((longlong)pvVar1 - 8),
           0x1f < (ulonglong)((longlong)pvVar1 + (-8 - (longlong)_Memory)))) {
                    /* WARNING: Subroutine does not return */
          _invalid_parameter_noinfo_noreturn();
        }
        free(_Memory);
      }
      puVar2[-1] = 0;
      *puVar2 = 7;
      *(undefined2 *)(puVar2 + -3) = 0;
      puVar2 = puVar2 + 5;
      lVar3 = lVar3 + -0x28;
    } while (lVar3 != 0);
  }
  return;
}

