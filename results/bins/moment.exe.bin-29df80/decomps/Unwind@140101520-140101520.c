
void Unwind_140101520(void)

{
  undefined8 *puVar1;
  
  if (DAT_14012b078 != (longlong *)0x0) {
    puVar1 = (undefined8 *)(**(code **)(*DAT_14012b078 + 0x10))();
    if (puVar1 != (undefined8 *)0x0) {
      (**(code **)*puVar1)(puVar1,1);
    }
  }
  return;
}

