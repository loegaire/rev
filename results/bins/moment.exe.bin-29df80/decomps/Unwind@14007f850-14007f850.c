
void Unwind_14007f850(undefined8 param_1,longlong param_2)

{
  ulonglong uVar1;
  void *pvVar2;
  undefined1 *puVar3;
  void *_Memory;
  
  uVar1 = *(ulonglong *)(*(longlong *)(param_2 + 0x11d8) + 0x18);
  if (0xf < uVar1) {
    pvVar2 = (void *)**(longlong **)(param_2 + 0x11d8);
    _Memory = pvVar2;
    if ((0xfff < uVar1 + 1) &&
       (_Memory = *(void **)((longlong)pvVar2 + -8),
       0x1f < (ulonglong)((longlong)pvVar2 + (-8 - (longlong)_Memory)))) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    free(_Memory);
  }
  puVar3 = *(undefined1 **)(param_2 + 0x11d8);
  *(undefined8 *)(puVar3 + 0x10) = 0;
  *(undefined8 *)(puVar3 + 0x18) = 0xf;
  *puVar3 = 0;
  return;
}

